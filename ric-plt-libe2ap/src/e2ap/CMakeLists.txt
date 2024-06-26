# vim: sw=4 ts=4 noet:
#
#==================================================================================
#   Copyright (c) 2020 AT&T Intellectual Property.
#   Copyright (c) 2020 Nokia
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
#==================================================================================
#


# pick up everything
#
file( GLOB e2ap_files *.c *.h )
file( GLOB e2ap_headers *.h )

# For clarity: this generates object, not a lib as the CM command implies.
#
add_library( e2ap_objects OBJECT ${e2ap_files} )

target_include_directories (
	e2ap_objects PUBLIC
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
	$<INSTALL_INTERFACE:include>
	PRIVATE src
)

# header files should go into .../include/riclibe2ap/
if( DEV_PKG )
	install( FILES
		${e2ap_headers}
		DESTINATION ${install_inc}
	)
endif()

