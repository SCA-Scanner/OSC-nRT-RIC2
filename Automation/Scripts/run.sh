#!/bin/bash 

COMP="${1:-all}"
E2M_TAG="${2:-1.0.0}"
E2T_TAG="${3:-1.0.0}"
SIM_TAG="${4:-1.0.5}"

if [ "$COMP" == "all" ]; then
docker rm -f e2
docker rm -f e2mgr
docker rm -f gnbe2_simu

docker kill redis
docker rm redis
docker run -d --name redis -p 6379:6379 --env DBAAS_SERVICE_HOST=10.0.2.15  snapshot.docker.ranco-dev-tools.eastus.cloudapp.azure.com:10001/dbass:1.0.0

sleep 2

docker pull nexus3.o-ran-sc.org:10004/ric-plt-e2:$E2T_TAG
docker pull nexus3.o-ran-sc.org:10004/ric-plt-e2mgr:$E2M_TAG
docker pull snapshot.docker.ranco-dev-tools.eastus.cloudapp.azure.com:10001/gnbe2_sim:$SIM_TAG

docker run -d --name e2mgr -p 3800:3800 -p 3801:3801 --env DBAAS_SERVICE_HOST=10.0.2.15 --env RIC_ID="bbbccc-abcd0e/20" nexus3.o-ran-sc.org:10004/ric-plt-e2mgr:$E2M_TAG
docker cp e2mgr:/opt/E2Manager/router.txt .
sleep 2
docker create --name e2 --env sctp=5577 --env nano=38000 --env loglevel=debug --env print=1 -p 38000:38000 nexus3.o-ran-sc.org:10004/ric-plt-e2:$E2T_TAG
sleep 2
docker cp router.txt e2:/opt/e2/dockerRouter.txt
sleep 2
docker start e2

docker run -d --name gnbe2_simu --env gNBipv4=localhost  --env gNBport=36422  --env duration=600000000000 --env indicationReportRate=0 --env indicationInsertRate=0 -p 5577:36422/sctp snapshot.docker.ranco-dev-tools.eastus.cloudapp.azure.com:10001/gnbe2_sim:$SIM_TAG

#docker run -d --name gnbe2_simu --env gNBipv4=localhost  --env gNBport=36422  --env duration=600000000000 --env indicationReportRate=1000000 --env indicationInsertRate=1000000 -p 5577:36422/sctp snapshot.docker.ranco-dev-tools.eastus.cloudapp.azure.com:10001/gnbe2_simu:1.0.0

docker ps
fi
if [ "$COMP" = "gnbe2_sim" ]; then
docker rm -f gnb_simu
#docker run -d --name gnbe2_simu --env gNBipv4=localhost  --env gNBport=36422  --env duration=600000000000 -p 5577:36422/sctp snapshot.docker.ranco-dev-tools.eastus.cloudapp.azure.com:10001/gnbe2_simu:$SIM_TAG
#docker pull snapshot.docker.ranco-dev-tools.eastus.cloudapp.azure.com:10001/gnb_simu:1.1.0
docker run -d --name gnbe2_simu --env gNBipv4=localhost  --env gNBport=36422 --env duration=6000000000000 indicationReportRate=0 --env indicationInsertRate=0 -p 5577:36422/sctp snapshot.docker.ranco-dev-tools.eastus.cloudapp.azure.com:10001/gnbe2_sim:$SIM_TAG
docker ps
fi
if [ "$COMP" = "e2" ]; then
docker rm -f e2
docker pull nexus3.o-ran-sc.org:10004/ric-plt-e2:$E2T_TAG
docker create --name e2 --env sctp=5577 --env nano=38000 --env print=1 --env RMR_RTG_SVC=10.0.2.15 -p 38000:38000 snapshot.docker.ranco-dev-tools.eastus.cloudapp.azure.com:10001/e2:$E2T_TAG

docker ps
fi
if [ "$COMP" = "e2mgr" ]; then
docker rm -f e2mgr
docker pull nexus3.o-ran-sc.org:10004/ric-plt-e2mgr:$E2M_TAG
docker run -d --name e2mgr -p 3800:3800 -p 3801:3801 --env RMR_RTG_SVC=10.0.2.15 --env DBAAS_SERVICE_HOST=10.0.2.15 RIC_ID="bbbccc-abcd0e/20" nexus3.o-ran-sc.org:10004/ric-plt-e2mgr:$E2M_TAG
docker ps
fi

