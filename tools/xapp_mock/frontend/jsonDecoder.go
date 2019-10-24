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
package frontend

import (
	"bytes"
	"encoding/json"
	"fmt"
	"github.com/pkg/errors"
	"io"
)

const (
	SendRmrMessage  = "send"
	ReceiveRmrMessage  = "receive"
)


type JsonCommand struct {
 Id string
 RmrMessageType  string
 TransactionId string
 RanName string
 RanIp string
 RanPort int
 PayloadHeader string
 PackedPayload string
 Payload string
 Action string
 WaitForRmrMessageType string
}

// Id -> Command
var Configuration = make(map[string]*JsonCommand)
// Rmr Message Id -> Command
var WaitedForRmrMessageType = make(map[int]*JsonCommand)

func JsonCommandDecoder(data []byte, processor func (*JsonCommand) error ) error {
	dec := json.NewDecoder(bytes.NewReader(data))
	var cmd JsonCommand
	if err := dec.Decode(&cmd); err != nil && err != io.EOF {
		return errors.New(err.Error())
	}
	if err := processor (&cmd); err != nil {
		return err
	}
	return nil
}

func JsonCommandsDecoder(data []byte, processor func (*JsonCommand) error ) error {
	dec := json.NewDecoder(bytes.NewReader(data))
	for {
		var commands []JsonCommand
		if err := dec.Decode(&commands); err == io.EOF {
			break
		} else if err != nil {
			return errors.New(err.Error())
		}
		for i, cmd := range commands {
			if err := processor(&cmd); err != nil {
				return errors.New(fmt.Sprintf("processing error at #%d, %s",i,err))
			}
		}
	}
	return nil
}
