/*
   Copyright (c) 2018-2019 Nokia.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

/*
 * This source code is part of the near-RT RIC (RAN Intelligent Controller)
 * platform project (RICP).
*/

#include "private/databaseconfiguration.hpp"
#include <sstream>

using namespace shareddatalayer;

namespace
{
    std::string buildInvalidDbTypeError(const std::string& type)
    {
        std::ostringstream os;
        os << "invalid database type: '" << type << "'. ";
        os << "Allowed types are: 'redis-standalone' or 'redis-cluster'";
        return os.str();
    }
}

DatabaseConfiguration::InvalidDbType::InvalidDbType(const std::string& type):
    Exception(buildInvalidDbTypeError(type))
{
}

