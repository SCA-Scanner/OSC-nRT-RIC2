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

#ifndef SHAREDDATALAYER_LOGGER_HPP_
#define SHAREDDATALAYER_LOGGER_HPP_

#include <iosfwd>

namespace shareddatalayer
{
    class Logger
    {
    public:
        virtual ~Logger() = default;

        virtual std::ostream& emerg() = 0;

        virtual std::ostream& alert() = 0;

        virtual std::ostream& crit() = 0;

        virtual std::ostream& error() = 0;

        virtual std::ostream& warning() = 0;

        virtual std::ostream& notice() = 0;

        virtual std::ostream& info() = 0;

        virtual std::ostream& debug() = 0;

        Logger(const Logger&) = delete;
        Logger(Logger&&) = delete;
        Logger& operator = (const Logger&) = delete;
        Logger& operator = (Logger&&) = delete;

    protected:
        Logger() = default;
    };
}

#endif
