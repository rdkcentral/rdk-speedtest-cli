/*
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
 */
#ifndef RDK_SPEEDTEST_H
#define RDK_SPEEDTEST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>  // Added for uint64_t

// Structure to hold test results
typedef struct {
    unsigned long bytes_sender;
    unsigned long bytes_receiver;
    double speed_sender;
    double speed_receiver;
} TestResults;

// Structure to hold test configuration
typedef struct {
    const char* server_ip;
    int port;
    int duration;
    uint64_t bitrate_mbps;
    int parallel_streams;
    int json_output;  // Flag to output in JSON format
} TestConfig;

// Function prototypes
void run_iperf_test(const TestConfig* config, TestResults* results);
void update_test_diag(const TestResults* results);
void print_usage(const char* program_name);
void output_json(const TestConfig* config, const TestResults* results);

#endif /* RDK_SPEEDTEST_H */
