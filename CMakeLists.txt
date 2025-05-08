##########################################################################
# If not stated otherwise in this file or this component's LICENSE
# file the following copyright and licenses apply:
#
# Copyright 2024 RDK Management
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
###########################################################################

cmake_minimum_required(VERSION 3.10)
project(rdk_speedtest_cli C)

set(CMAKE_C_STANDARD 99)

# Allow setting the executable name through CMake options
if(NOT DEFINED EXECUTABLE_NAME)
    set(EXECUTABLE_NAME "rdk-speedtest-cli")
endif()

# Find the iperf3 library
find_library(IPERF_LIBRARY NAMES iperf)
find_path(IPERF_INCLUDE_DIR NAMES iperf_api.h)

# Check if iperf3 library was found
if(NOT IPERF_LIBRARY)
    message(FATAL_ERROR "iperf3 library not found. Please install libiperf-dev or equivalent package.")
endif()

if(NOT IPERF_INCLUDE_DIR)
    message(FATAL_ERROR "iperf3 headers not found. Please install libiperf-dev or equivalent package.")
endif()

message(STATUS "Found iperf3 library: ${IPERF_LIBRARY}")
message(STATUS "Found iperf3 include dir: ${IPERF_INCLUDE_DIR}")

# Include directories
include_directories(include ${IPERF_INCLUDE_DIR})

# Add the executable with configurable name
add_executable(${EXECUTABLE_NAME} source/rdk-speedtest-cli.c)

# Link against the iperf3 library
target_link_libraries(${EXECUTABLE_NAME} ${IPERF_LIBRARY})

# Install the binary
install(TARGETS ${EXECUTABLE_NAME}
        RUNTIME DESTINATION bin)
