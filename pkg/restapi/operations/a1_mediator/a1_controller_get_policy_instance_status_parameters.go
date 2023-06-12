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
// Editing this file might prove futile when you re-run the swagger generate command

import (
	"net/http"

	"github.com/go-openapi/errors"
	"github.com/go-openapi/runtime/middleware"
	"github.com/go-openapi/strfmt"
	"github.com/go-openapi/swag"
	"github.com/go-openapi/validate"
)

// NewA1ControllerGetPolicyInstanceStatusParams creates a new A1ControllerGetPolicyInstanceStatusParams object
//
// There are no default values defined in the spec.
func NewA1ControllerGetPolicyInstanceStatusParams() A1ControllerGetPolicyInstanceStatusParams {

	return A1ControllerGetPolicyInstanceStatusParams{}
}

// A1ControllerGetPolicyInstanceStatusParams contains all the bound params for the a1 controller get policy instance status operation
// typically these are obtained from a http.Request
//
// swagger:parameters a1.controller.get_policy_instance_status
type A1ControllerGetPolicyInstanceStatusParams struct {

	// HTTP Request Object
	HTTPRequest *http.Request `json:"-"`

	/*represents a policy instance identifier. UUIDs are advisable but can be any string

	  Required: true
	  In: path
	*/
	PolicyInstanceID string
	/*represents a policy type identifier. Currently this is restricted to an integer range.

	  Required: true
	  Maximum: 2.147483647e+09
	  Minimum: 1
	  In: path
	*/
	PolicyTypeID int64
}

// BindRequest both binds and validates a request, it assumes that complex things implement a Validatable(strfmt.Registry) error interface
// for simple values it will use straight method calls.
//
// To ensure default values, the struct must have been initialized with NewA1ControllerGetPolicyInstanceStatusParams() beforehand.
func (o *A1ControllerGetPolicyInstanceStatusParams) BindRequest(r *http.Request, route *middleware.MatchedRoute) error {
	var res []error

	o.HTTPRequest = r

	rPolicyInstanceID, rhkPolicyInstanceID, _ := route.Params.GetOK("policy_instance_id")
	if err := o.bindPolicyInstanceID(rPolicyInstanceID, rhkPolicyInstanceID, route.Formats); err != nil {
		res = append(res, err)
	}

	rPolicyTypeID, rhkPolicyTypeID, _ := route.Params.GetOK("policy_type_id")
	if err := o.bindPolicyTypeID(rPolicyTypeID, rhkPolicyTypeID, route.Formats); err != nil {
		res = append(res, err)
	}
	if len(res) > 0 {
		return errors.CompositeValidationError(res...)
	}
	return nil
}

// bindPolicyInstanceID binds and validates parameter PolicyInstanceID from path.
func (o *A1ControllerGetPolicyInstanceStatusParams) bindPolicyInstanceID(rawData []string, hasKey bool, formats strfmt.Registry) error {
	var raw string
	if len(rawData) > 0 {
		raw = rawData[len(rawData)-1]
	}

	// Required: true
	// Parameter is provided by construction from the route
	o.PolicyInstanceID = raw

	return nil
}

// bindPolicyTypeID binds and validates parameter PolicyTypeID from path.
func (o *A1ControllerGetPolicyInstanceStatusParams) bindPolicyTypeID(rawData []string, hasKey bool, formats strfmt.Registry) error {
	var raw string
	if len(rawData) > 0 {
		raw = rawData[len(rawData)-1]
	}

	// Required: true
	// Parameter is provided by construction from the route

	value, err := swag.ConvertInt64(raw)
	if err != nil {
		return errors.InvalidType("policy_type_id", "path", "int64", raw)
	}
	o.PolicyTypeID = value

	if err := o.validatePolicyTypeID(formats); err != nil {
		return err
	}

	return nil
}

// validatePolicyTypeID carries on validations for parameter PolicyTypeID
func (o *A1ControllerGetPolicyInstanceStatusParams) validatePolicyTypeID(formats strfmt.Registry) error {

	if err := validate.MinimumInt("policy_type_id", "path", o.PolicyTypeID, 1, false); err != nil {
		return err
	}

	if err := validate.MaximumInt("policy_type_id", "path", o.PolicyTypeID, 2.147483647e+09, false); err != nil {
		return err
	}

	return nil
}
