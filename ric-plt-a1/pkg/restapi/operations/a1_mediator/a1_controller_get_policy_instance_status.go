/*
==================================================================================
  Copyright (c) 2021 Samsung

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
// Code generated by go-swagger; DO NOT EDIT.

package a1_mediator

// This file was generated by the swagger tool.
// Editing this file might prove futile when you re-run the generate command

import (
	"context"
	"encoding/json"
	"net/http"

	"github.com/go-openapi/errors"
	"github.com/go-openapi/runtime/middleware"
	"github.com/go-openapi/strfmt"
	"github.com/go-openapi/swag"
	"github.com/go-openapi/validate"
)

// A1ControllerGetPolicyInstanceStatusHandlerFunc turns a function with the right signature into a a1 controller get policy instance status handler
type A1ControllerGetPolicyInstanceStatusHandlerFunc func(A1ControllerGetPolicyInstanceStatusParams) middleware.Responder

// Handle executing the request and returning a response
func (fn A1ControllerGetPolicyInstanceStatusHandlerFunc) Handle(params A1ControllerGetPolicyInstanceStatusParams) middleware.Responder {
	return fn(params)
}

// A1ControllerGetPolicyInstanceStatusHandler interface for that can handle valid a1 controller get policy instance status params
type A1ControllerGetPolicyInstanceStatusHandler interface {
	Handle(A1ControllerGetPolicyInstanceStatusParams) middleware.Responder
}

// NewA1ControllerGetPolicyInstanceStatus creates a new http.Handler for the a1 controller get policy instance status operation
func NewA1ControllerGetPolicyInstanceStatus(ctx *middleware.Context, handler A1ControllerGetPolicyInstanceStatusHandler) *A1ControllerGetPolicyInstanceStatus {
	return &A1ControllerGetPolicyInstanceStatus{Context: ctx, Handler: handler}
}

/* A1ControllerGetPolicyInstanceStatus swagger:route GET /A1-P/v2/policytypes/{policy_type_id}/policies/{policy_instance_id}/status A1 Mediator a1ControllerGetPolicyInstanceStatus

Retrieve the policy instance status across all handlers of the policy If this endpoint returns successfully (200), it is either IN EFFECT or NOT IN EFFECT. IN EFFECT is returned if at least one policy handler in the RIC is implementing the policy NOT IN EFFECT is returned otherwise If a policy instance is successfully deleted, this endpoint will return a 404 (not a 200)


*/
type A1ControllerGetPolicyInstanceStatus struct {
	Context *middleware.Context
	Handler A1ControllerGetPolicyInstanceStatusHandler
}

func (o *A1ControllerGetPolicyInstanceStatus) ServeHTTP(rw http.ResponseWriter, r *http.Request) {
	route, rCtx, _ := o.Context.RouteInfo(r)
	if rCtx != nil {
		*r = *rCtx
	}
	var Params = NewA1ControllerGetPolicyInstanceStatusParams()
	if err := o.Context.BindValidRequest(r, route, &Params); err != nil { // bind params
		o.Context.Respond(rw, r, route.Produces, route, err)
		return
	}

	res := o.Handler.Handle(Params) // actually handle the request
	o.Context.Respond(rw, r, route.Produces, route, res)

}

// A1ControllerGetPolicyInstanceStatusOKBody a1 controller get policy instance status o k body
//
// swagger:model A1ControllerGetPolicyInstanceStatusOKBody
type A1ControllerGetPolicyInstanceStatusOKBody struct {

	// enforce reason
	// Enum: [SCOPE_NOT_APPLICABLE STATEMENT_NOT_APPLICABLE OTHER_REASON]
	EnforceReason string `json:"enforceReason,omitempty"`

	// enforce status
	// Enum: [ENFORCED NOT_ENFORCED]
	EnforceStatus string `json:"enforceStatus,omitempty"`
}

// Validate validates this a1 controller get policy instance status o k body
func (o *A1ControllerGetPolicyInstanceStatusOKBody) Validate(formats strfmt.Registry) error {
	var res []error

	if err := o.validateEnforceReason(formats); err != nil {
		res = append(res, err)
	}

	if err := o.validateEnforceStatus(formats); err != nil {
		res = append(res, err)
	}

	if len(res) > 0 {
		return errors.CompositeValidationError(res...)
	}
	return nil
}

var a1ControllerGetPolicyInstanceStatusOKBodyTypeEnforceReasonPropEnum []interface{}

func init() {
	var res []string
	if err := json.Unmarshal([]byte(`["SCOPE_NOT_APPLICABLE","STATEMENT_NOT_APPLICABLE","OTHER_REASON"]`), &res); err != nil {
		panic(err)
	}
	for _, v := range res {
		a1ControllerGetPolicyInstanceStatusOKBodyTypeEnforceReasonPropEnum = append(a1ControllerGetPolicyInstanceStatusOKBodyTypeEnforceReasonPropEnum, v)
	}
}

const (

	// A1ControllerGetPolicyInstanceStatusOKBodyEnforceReasonSCOPENOTAPPLICABLE captures enum value "SCOPE_NOT_APPLICABLE"
	A1ControllerGetPolicyInstanceStatusOKBodyEnforceReasonSCOPENOTAPPLICABLE string = "SCOPE_NOT_APPLICABLE"

	// A1ControllerGetPolicyInstanceStatusOKBodyEnforceReasonSTATEMENTNOTAPPLICABLE captures enum value "STATEMENT_NOT_APPLICABLE"
	A1ControllerGetPolicyInstanceStatusOKBodyEnforceReasonSTATEMENTNOTAPPLICABLE string = "STATEMENT_NOT_APPLICABLE"

	// A1ControllerGetPolicyInstanceStatusOKBodyEnforceReasonOTHERREASON captures enum value "OTHER_REASON"
	A1ControllerGetPolicyInstanceStatusOKBodyEnforceReasonOTHERREASON string = "OTHER_REASON"
)

// prop value enum
func (o *A1ControllerGetPolicyInstanceStatusOKBody) validateEnforceReasonEnum(path, location string, value string) error {
	if err := validate.EnumCase(path, location, value, a1ControllerGetPolicyInstanceStatusOKBodyTypeEnforceReasonPropEnum, true); err != nil {
		return err
	}
	return nil
}

func (o *A1ControllerGetPolicyInstanceStatusOKBody) validateEnforceReason(formats strfmt.Registry) error {
	if swag.IsZero(o.EnforceReason) { // not required
		return nil
	}

	// value enum
	if err := o.validateEnforceReasonEnum("a1ControllerGetPolicyInstanceStatusOK"+"."+"enforceReason", "body", o.EnforceReason); err != nil {
		return err
	}

	return nil
}

var a1ControllerGetPolicyInstanceStatusOKBodyTypeEnforceStatusPropEnum []interface{}

func init() {
	var res []string
	if err := json.Unmarshal([]byte(`["ENFORCED","NOT_ENFORCED"]`), &res); err != nil {
		panic(err)
	}
	for _, v := range res {
		a1ControllerGetPolicyInstanceStatusOKBodyTypeEnforceStatusPropEnum = append(a1ControllerGetPolicyInstanceStatusOKBodyTypeEnforceStatusPropEnum, v)
	}
}

const (

	// A1ControllerGetPolicyInstanceStatusOKBodyEnforceStatusENFORCED captures enum value "ENFORCED"
	A1ControllerGetPolicyInstanceStatusOKBodyEnforceStatusENFORCED string = "ENFORCED"

	// A1ControllerGetPolicyInstanceStatusOKBodyEnforceStatusNOTENFORCED captures enum value "NOT_ENFORCED"
	A1ControllerGetPolicyInstanceStatusOKBodyEnforceStatusNOTENFORCED string = "NOT_ENFORCED"
)

// prop value enum
func (o *A1ControllerGetPolicyInstanceStatusOKBody) validateEnforceStatusEnum(path, location string, value string) error {
	if err := validate.EnumCase(path, location, value, a1ControllerGetPolicyInstanceStatusOKBodyTypeEnforceStatusPropEnum, true); err != nil {
		return err
	}
	return nil
}

func (o *A1ControllerGetPolicyInstanceStatusOKBody) validateEnforceStatus(formats strfmt.Registry) error {
	if swag.IsZero(o.EnforceStatus) { // not required
		return nil
	}

	// value enum
	if err := o.validateEnforceStatusEnum("a1ControllerGetPolicyInstanceStatusOK"+"."+"enforceStatus", "body", o.EnforceStatus); err != nil {
		return err
	}

	return nil
}

// ContextValidate validates this a1 controller get policy instance status o k body based on context it is used
func (o *A1ControllerGetPolicyInstanceStatusOKBody) ContextValidate(ctx context.Context, formats strfmt.Registry) error {
	return nil
}

// MarshalBinary interface implementation
func (o *A1ControllerGetPolicyInstanceStatusOKBody) MarshalBinary() ([]byte, error) {
	if o == nil {
		return nil, nil
	}
	return swag.WriteJSON(o)
}

// UnmarshalBinary interface implementation
func (o *A1ControllerGetPolicyInstanceStatusOKBody) UnmarshalBinary(b []byte) error {
	var res A1ControllerGetPolicyInstanceStatusOKBody
	if err := swag.ReadJSON(b, &res); err != nil {
		return err
	}
	*o = res
	return nil
}