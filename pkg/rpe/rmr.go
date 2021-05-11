/*
==================================================================================
  Copyright (c) 2019 AT&T Intellectual Property.
  Copyright (c) 2019 Nokia

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.


   This source code is part of the near-RT RIC (RAN Intelligent Controller)
   platform project (RICP).

==================================================================================
*/
/*
  Mnemonic:	rmr.go
  Abstract:	RMR Route Policy implementation
		Produces RMR (RIC Management Routing) formatted route messages
  Date:		16 March 2019
*/

package rpe

import (
	"gerrit.o-ran-sc.org/r/ric-plt/xapp-frame/pkg/xapp"
	"routing-manager/pkg/models"
	"routing-manager/pkg/rtmgr"
	"strconv"
	//"strings"
)

type Rmr struct {
	Rpe
}

type RmrPush struct {
	Rmr
}

func NewRmrPush() *RmrPush {
	instance := new(RmrPush)
	return instance
}

/*
Produces the raw route message consumable by RMR
*/
func (r *Rmr) generateRMRPolicies(eps rtmgr.Endpoints, rcs *rtmgr.RicComponents, key string) *[]string {
	rawrt := []string{key + "newrt|start\n"}
	rt := r.generateRouteTable(eps)
	for _, rte := range *rt {
		rawrte := key + "mse|" + rte.MessageType
		for _, tx := range rte.TxList {
			rawrte += "," + tx.Ip + ":" + strconv.Itoa(int(tx.Port))
		}
		rawrte += "|" + strconv.Itoa(int(rte.SubID)) + "|"
		group := ""
		for _, rxg := range rte.RxGroups {
			member := ""
			for _, rx := range rxg {
				if member == "" {
					member += rx.Ip + ":" + strconv.Itoa(int(rx.Port))
				} else {
					member += "," + rx.Ip + ":" + strconv.Itoa(int(rx.Port))
				}
			}
			if group == "" {
				group += member
			} else {
				group += ";" + member
			}
		}
		rawrte += group

		if rte.RouteType == "%meid" {
			rawrte += group + rte.RouteType
		}

		rawrt = append(rawrt, rawrte+"\n")
	}
	for _, val := range rtmgr.DynamicRouteList {
		rawrt = append(rawrt, val)
	}

	rawrt = append(rawrt, key+"newrt|end\n")
	count := 0

	//meidrt := key + "meid_map|start\n"
	//meidrt := []string{key + "meid_map|start\n"}
	rawrt = append(rawrt, key+"meid_map|start\n")
	for _, value := range rcs.MeidMap {
		//meidrt += key + value + "\n"
		rawrt = append(rawrt, key+value+"\n")
		count++
	}
	rawrt = append(rawrt, key+"meid_map|end|"+strconv.Itoa(count)+"\n")
	//meidrt += key+"meid_map|end|" + strconv.Itoa(count) +"\n"

	/*for _, value := range meidrt {
		rawrt = append(meidrt, value)
	}*/

	//rawrt = append(rawrt, meidrt)
	xapp.Logger.Debug("rmr.GeneratePolicies returns: %v", rawrt)
	xapp.Logger.Debug("rmr.GeneratePolicies returns: %v", rcs)
	return &rawrt
}

/*
Produces the raw route message consumable by RMR
*/
func (r *Rmr) generatePartialRMRPolicies(eps rtmgr.Endpoints, xappSubData *models.XappSubscriptionData, key string, updatetype rtmgr.RMRUpdateType) *[]string {
	rawrt := []string{key + "updatert|start\n"}
	rt := r.generatePartialRouteTable(eps, xappSubData, updatetype)
	for _, rte := range *rt {
		rawrte := key + "mse|" + rte.MessageType
		for _, tx := range rte.TxList {
			rawrte += "," + tx.Ip + ":" + strconv.Itoa(int(tx.Port))
		}
		rawrte += "|" + strconv.Itoa(int(rte.SubID)) + "|"
		group := ""
		for _, rxg := range rte.RxGroups {
			member := ""
			for _, rx := range rxg {
				if member == "" {
					member += rx.Ip + ":" + strconv.Itoa(int(rx.Port))
				} else {
					member += "," + rx.Ip + ":" + strconv.Itoa(int(rx.Port))
				}
			}
			if group == "" {
				group += member
			} else {
				group += ";" + member
			}
		}
		rawrte += group

		if rte.RouteType == "%meid" {
			rawrte += group + rte.RouteType
		}

		rawrt = append(rawrt, rawrte+"\n")
	}

	rawrt = append(rawrt, key+"updatert|end\n")
	//count := 0

	xapp.Logger.Debug("rmr.GeneratePolicies returns: %v", rawrt)
	return &rawrt
}
func (r *RmrPush) GeneratePolicies(eps rtmgr.Endpoints, rcs *rtmgr.RicComponents) *[]string {
	xapp.Logger.Debug("Invoked rmr.GeneratePolicies, args: %v: ", eps)
	return r.generateRMRPolicies(eps, rcs, "")
}

func (r *RmrPush) GenerateRouteTable(eps rtmgr.Endpoints) *rtmgr.RouteTable {
	return r.generateRouteTable(eps)
}

func (r *RmrPush) GeneratePartialPolicies(eps rtmgr.Endpoints, xappSubData *models.XappSubscriptionData, updatetype rtmgr.RMRUpdateType) *[]string {
	xapp.Logger.Debug("Invoked rmr.GeneratePartialRMR, args: %v: ", eps)
	return r.generatePartialRMRPolicies(eps, xappSubData, "", updatetype)
}
