/*
==================================================================================
  Copyright (c) 2019 Nokia
==================================================================================
*/

package xapp

import (
	apimodel "gerrit.o-ran-sc.org/r/ric-plt/xapp-frame/pkg/clientmodel"
	"gerrit.o-ran-sc.org/r/ric-plt/xapp-frame/pkg/models"
	"github.com/stretchr/testify/assert"
	"testing"
	"time"
)

var suite *testing.T

var requestorId = int64(0x4EEC)
var direction = int64(0)
var procedureCode = int64(27)
var typeOfMessage = int64(1)

var reportParams = apimodel.ReportParams{
	RequestorID: &requestorId,
	EventTriggers: apimodel.EventTriggerList{
		&apimodel.EventTrigger{
			InterfaceDirection: &direction,
			ProcedureCode:      &procedureCode,
			TypeOfMessage:      &typeOfMessage,
		},
	},
}

var controlParams = apimodel.ControlParams{
	RequestorID: requestorId,
}

var policyParams = apimodel.PolicyParams{
	RequestorID: requestorId,
}

func subscriptionHandler(stype models.SubscriptionType, params interface{}) (models.SubscriptionResult, error) {
	switch stype {
	case models.SubscriptionTypeReport:
		p := params.(*models.ReportParams)
		assert.Equal(suite, requestorId, *p.RequestorID)
		assert.Equal(suite, direction, *p.EventTriggers[0].InterfaceDirection)
		assert.Equal(suite, procedureCode, *p.EventTriggers[0].ProcedureCode)
		assert.Equal(suite, typeOfMessage, *p.EventTriggers[0].TypeOfMessage)
	case models.SubscriptionTypeControl:
		p := params.(*models.ControlParams)
		assert.Equal(suite, requestorId, p.RequestorID)
	case models.SubscriptionTypePolicy:
		p := params.(*models.PolicyParams)
		assert.Equal(suite, requestorId, p.RequestorID)
	}

	return models.SubscriptionResult{11, 22, 33}, nil
}

func queryHandler() (models.SubscriptionList, error) {
	resp := models.SubscriptionList{
		&models.SubscriptionData{
			SubscriptionID: 11,
			Meid:           "Test-Gnb",
			Endpoint:       []string{"127.0.0.1:4056"},
		},
	}

	return resp, nil
}

func TestSetup(t *testing.T) {
	suite = t

	// Start the server to simulate SubManager
	go Subscription.Listen(subscriptionHandler, queryHandler)
	time.Sleep(time.Duration(2) * time.Second)
}

func TestSubscriptionQueryHandling(t *testing.T) {
	resp, err := Subscription.QuerySubscriptions()

	assert.Equal(t, err, nil)
	assert.Equal(t, resp[0].SubscriptionID, int64(11))
	assert.Equal(t, resp[0].Meid, "Test-Gnb")
	assert.Equal(t, resp[0].Endpoint, []string{"127.0.0.1:4056"})
}

func TestSubscriptionReportHandling(t *testing.T) {
	result, err := Subscription.SubscribeReport(&reportParams)

	assert.Equal(t, err, nil)
	assert.Equal(t, len(result), 3)
	assert.Equal(t, result[0], int64(11))
	assert.Equal(t, result[1], int64(22))
	assert.Equal(t, result[2], int64(33))
}

func TestSubscriptionControltHandling(t *testing.T) {
	result, err := Subscription.SubscribeControl(&controlParams)

	assert.Equal(t, err, nil)
	assert.Equal(t, len(result), 3)
	assert.Equal(t, result[0], int64(11))
}

func TestSubscriptionPolicytHandling(t *testing.T) {
	result, err := Subscription.SubscribePolicy(&policyParams)

	assert.Equal(t, err, nil)
	assert.Equal(t, len(result), 3)
	assert.Equal(t, result[0], int64(11))
}
