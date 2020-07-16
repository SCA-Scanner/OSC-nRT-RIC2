##############################################################################
#
#   Copyright (c) 2019 AT&T Intellectual Property.
#
#   Licensed under the Apache License, Version 2.0 (the "License");
#   you may not use this file except in compliance with the License.
#   You may obtain a copy of the License at
#
#       http://www.apache.org/licenses/LICENSE-2.0
#
#   Unless required by applicable law or agreed to in writing, software
#   distributed under the License is distributed on an "AS IS" BASIS,
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#   See the License for the specific language governing permissions and
#   limitations under the License.
#
##############################################################################
#
#   This source code is part of the near-RT RIC (RAN Intelligent Controller)
#   platform project (RICP).
#

*** Settings ***
Variables  ../Scripts/variables.py
Suite Setup   Prepare Enviorment     ${True}
Resource   ../Resource/resource.robot
Resource   ../Resource/Keywords.robot
Library     OperatingSystem
Library     REST      ${url}

*** Variables ***
${url}  ${e2mgr_address}


*** Test Cases ***

Add eNb Node
    Sleep   2s
    Add eNb Request


Get all node ids
    GET     v1/nodeb/ids
    Sleep  2s
    Integer  response status   200

    #Verify eNB node
    String   response body 0 inventoryName    ${enb_ran_name}
    String   response body 0 connectionStatus    DISCONNECTED
    String   response body 0 globalNbId plmnId   def
    String   response body 0 globalNbId nbId     abc

    #Verify gNB node
    String   response body 1 inventoryName  ${ranName}
#    String   response body 1 connectionStatus    CONNECTED
#    String   response body 1 nodeType     GNB
    String   response body 1 globalNbId plmnId   02F829
    String   response body 1 globalNbId nbId     001100000011000000110000


Prepare Logs For Tests
    Remove log files
    Save logs






