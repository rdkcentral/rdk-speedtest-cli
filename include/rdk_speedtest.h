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

#define SPEEDTEST_VERSION "1.0.0"

// Output format types
typedef enum {
    FORMAT_ADAPTIVE = 0,
    FORMAT_KBITS,
    FORMAT_MBITS,
    FORMAT_GBITS,
    FORMAT_KBYTES,
    FORMAT_MBYTES,
    FORMAT_GBYTES
} output_format_t;

// Structure to hold test results
typedef struct {
    unsigned long bytes_sender;
    unsigned long bytes_receiver;
    double speed_sender;
    double speed_receiver;
    int retransmits;
    unsigned long total_bytes;
    double duration_actual;
} TestResults;

// Structure to hold test configuration
typedef struct {
    const char* server_ip;
    const char* bind_address;        // Parsed but may not be implemented
    int port;
    int duration;
    uint64_t bitrate_mbps;
    uint64_t bytes_to_send;          // Parsed but uses duration instead  
    uint64_t blockcount;             // Parsed but uses duration instead
    int parallel_streams;
    int json_output;
    int udp_mode;
    int reverse_mode;                // Parsed but may not be fully implemented
    int ipv4_only;                   // Parsed but may not be implemented
    int ipv6_only;                   // Parsed but may not be implemented
    int interval;
    int omit_seconds;                // Parsed but may not be implemented
    int verbose;                     // Parsed but may not be implemented
    int quiet;
    int no_delay;                    // Parsed but may not be implemented
    int zerocopy;                    // Parsed but may not be implemented
    int window_size;                 // Parsed but may not be implemented
    int mss;                         // Parsed but may not be implemented
    int tos;                         // Parsed but may not be implemented
    const char* title;
    const char* congestion_algo;     // Parsed but may not be implemented
    const char* cpu_affinity;        // Parsed but may not be implemented
    output_format_t format;
    
    // Internal flags
    int use_duration;                // Always 1 for compatibility
    int show_version;
    int daemon_mode;
    int one_off;
} TestConfig;

// Function prototypes
void run_iperf_test(const TestConfig* config, TestResults* results);
void update_test_diag(const TestResults* results);
void print_usage(const char* program_name);
void print_version(void);
void output_json(const TestConfig* config, const TestResults* results);

// Parsing helper functions
int parse_bandwidth(const char* bandwidth_str, uint64_t* bitrate_mbps);
int parse_bytes(const char* bytes_str, uint64_t* bytes);
int parse_time(const char* time_str, int* seconds);
int parse_window_size(const char* window_str, int* window_size);
int parse_format(const char* format_str, output_format_t* format);

// Utility functions
const char* format_bytes(unsigned long bytes, output_format_t format);
const char* format_rate(double rate_mbps, output_format_t format);
void set_socket_options(int sockfd, const TestConfig* config);

#endif /* RDK_SPEEDTEST_H */
