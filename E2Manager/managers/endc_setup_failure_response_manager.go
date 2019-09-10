//
// Copyright 2019 AT&T Intellectual Property
// Copyright 2019 Nokia
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

package managers

import (
	"e2mgr/converters"
	"e2mgr/e2pdus"
	"e2mgr/logger"
	"gerrit.o-ran-sc.org/r/ric-plt/nodeb-rnib.git/entities"
)

type EndcSetupFailureResponseManager struct{}

func NewEndcSetupFailureResponseManager() *EndcSetupFailureResponseManager {
	return &EndcSetupFailureResponseManager{}
}

func (m *EndcSetupFailureResponseManager) PopulateNodebByPdu(logger *logger.Logger, nbIdentity *entities.NbIdentity, nodebInfo *entities.NodebInfo, payload []byte) error {

	failureResponse, err := converters.UnpackEndcX2SetupFailureResponseAndExtract(logger, e2pdus.MaxAsn1CodecAllocationBufferSize, len(payload), payload, e2pdus.MaxAsn1CodecMessageBufferSize)

	if err != nil {
		logger.Errorf("#EndcSetupFailureResponseManager.PopulateNodebByPdu - RAN name: %s - Unpack and extract failed. Error: %v", nodebInfo.RanName, err)
		return err
	}

	logger.Infof("#EndcSetupFailureResponseManager.PopulateNodebByPdu - RAN name: %s - Unpacked payload and extracted protobuf successfully", nodebInfo.RanName)

	nodebInfo.ConnectionStatus = entities.ConnectionStatus_CONNECTED_SETUP_FAILED
	nodebInfo.SetupFailure = failureResponse
	nodebInfo.FailureType = entities.Failure_ENDC_X2_SETUP_FAILURE
	return nil
}
