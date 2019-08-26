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

package handlers

import (
	"e2mgr/logger"
	"e2mgr/managers"
	"e2mgr/models"
	"e2mgr/sessions"
)

type RanLostConnectionHandler struct {
	ranReconnectionManager *managers.RanReconnectionManager
}

func NewRanLostConnectionHandler(ranReconnectionManager *managers.RanReconnectionManager) RanLostConnectionHandler {
	return RanLostConnectionHandler{
		ranReconnectionManager: ranReconnectionManager,
	}
}
func (handler RanLostConnectionHandler) Handle(logger *logger.Logger, e2Sessions sessions.E2Sessions, request *models.NotificationRequest, messageChannel chan<- *models.NotificationResponse) {

	logger.Warnf("#ranLostConnectionHandler.Handle - Received lost connection (transaction id = %s): %s", request.TransactionId, request.Payload)

	err := handler.ranReconnectionManager.ReconnectRan(request.RanName)

	if err != nil {
		logger.Errorf("#ranLostConnectionHandler.Handle - An error occurred while trying to reconnect RAN, %v", err)
		return
	}
}
