This opensource can be used to run speedtest in a gateway , fetch results and send it to telmetery and update the SpeedTest DM in the TestAndDiagnostics 


# rdk-speedtest-cli
Reference speedtest client wrapper on iperf3
mkdir -p build && cd build && cmake .. && make
sudo apt-get install libiperf-dev
./rdk-speedtest-cli 192.168.64.55
test-cli/build$ ./rdk-speedtest-cli 192.168.64.55
Connecting to host 192.168.64.55, port 5201
[  5] local 192.168.64.55 port 49924 connected to 192.168.64.55 port 5201
[  7] local 192.168.64.55 port 49932 connected to 192.168.64.55 port 5201
[  9] local 192.168.64.55 port 49946 connected to 192.168.64.55 port 5201
[ 11] local 192.168.64.55 port 49952 connected to 192.168.64.55 port 5201
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  12.2 MBytes   103 Mbits/sec    0   1023 KBytes       
[  7]   0.00-1.02   sec  12.4 MBytes   102 Mbits/sec    0   1.25 MBytes       
[  9]   0.00-1.02   sec  12.6 MBytes   104 Mbits/sec    0   1.25 MBytes       
[ 11]   0.00-1.02   sec  12.6 MBytes   104 Mbits/sec    0   1.12 MBytes       
[SUM]   0.00-1.00   sec  49.9 MBytes   418 Mbits/sec    0             
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   1.00-2.00   sec  12.1 MBytes   101 Mbits/sec    2   1023 KBytes       
[  7]   1.02-2.00   sec  12.2 MBytes   104 Mbits/sec    0   1.31 MBytes       
[  9]   1.02-2.03   sec  12.5 MBytes   103 Mbits/sec    1   1.25 MBytes       
[ 11]   1.02-2.03   sec  12.5 MBytes   103 Mbits/sec    0   1.12 MBytes       
[SUM]   1.00-2.00   sec  49.4 MBytes   413 Mbits/sec    3             
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   2.00-3.00   sec  12.0 MBytes   101 Mbits/sec    1   1023 KBytes       
[  7]   2.00-3.00   sec  12.0 MBytes   101 Mbits/sec    3   1.31 MBytes       
[  9]   2.03-3.00   sec  12.2 MBytes   105 Mbits/sec    0   1.25 MBytes       
[ 11]   2.03-3.00   sec  12.2 MBytes   105 Mbits/sec    0   1.1

//-------
st-cli$ mkdir build
ubuntu@cont:~/rdk-speedtest-cli$ cd build/
ubuntu@cont:~/rdk-speedtest-cli/build$ cmake ..
-- The C compiler identification is GNU 13.3.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Found iperf3 library: /usr/lib/x86_64-linux-gnu/libiperf.so
-- Found iperf3 include dir: /usr/include
-- Configuring done (0.4s)
-- Generating done (0.0s)
-- Build files have been written to: /home/ubuntu/rdk-speedtest-cli/build
ubuntu@cont:~/rdk-speedtest-cli/build$ make
[ 50%] Building C object CMakeFiles/rdk-speedtest-cli.dir/source/rdk-speedtest-cli.c.o
In file included from /home/ubuntu/rdk-speedtest-cli/source/rdk-speedtest-cli.c:24:
/usr/include/iperf_api.h:48:2: warning: #warning "No <stdatomic.h> available" [-Wcpp]
   48 | #warning "No <stdatomic.h> available"
      |  ^~~~~~~
[100%] Linking C executable rdk-speedtest-cli
[100%] Built target rdk-speedtest-cli
ubuntu@cont:~/rdk-speedtest-cli/build$ ./rdk-speedtest-cli 192.168.64.55 

Running iperf test with the following configuration:
  Server IP:      192.168.64.55
  Port:           5202
  Duration:       60 seconds
  Bandwidth:      100 Mbps
  Parallel streams: 4

Connecting to host 192.168.64.55, port 5202
[  5] local 192.168.64.55 port 45402 connected to 192.168.64.55 port 5202
[  7] local 192.168.64.55 port 45408 connected to 192.168.64.55 port 5202
[  9] local 192.168.64.55 port 45422 connected to 192.168.64.55 port 5202
[ 11] local 192.168.64.55 port 45426 connected to 192.168.64.55 port 5202
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  11.9 MBytes  99.4 Mbits/sec    0    639 KBytes       
[  7]   0.00-1.00   sec  12.0 MBytes   100 Mbits/sec    1   1.06 MBytes       
[  9]   0.00-1.00   sec  11.9 MBytes  99.4 Mbits/sec    0    639 KBytes       
[ 11]   0.00-1.00   sec  11.8 MBytes  98.4 Mbits/sec    0   1.06 MBytes       
[SUM]   0.00-1.00   sec  47.5 MBytes   398 Mbits/sec    1             
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   1.00-2.00   sec  12.0 MBytes   101 Mbits/sec    1    639 KBytes       
[  7]   1.00-2.00   sec  11.6 MBytes  97.4 Mbits/sec    0   1.06 MBytes       
[  9]   1.00-2.00   sec  12.0 MBytes   101 Mbits/sec    0    639 KBytes       
[ 11]   1.00-2.00   sec  11.8 MBytes  98.5 Mbits/sec    0   1.06 MBytes       
[SUM]   1.00-2.00   sec  47.4 MBytes   397 Mbits/sec    1             
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   2.00-3.01   sec  11.9 MBytes  99.3 Mbits/sec    0    639 KBytes       
[  7]   2.00-3.01   sec  12.1 MBytes   101 Mbits/sec    1   1.06 MBytes       
[  9]   2.00-3.01   sec  11.9 MBytes  99.3 Mbits/sec    0    639 KBytes       
[ 11]   2.00-3.01   sec  12.2 MBytes   102 Mbits/sec    1   1.06 MBytes       
[SUM]   2.00-3.01   sec  48.1 MBytes   402 Mbits/sec    2             
^C
ubuntu@cont:~/rdk-speedtest-cli/build$ 
ubuntu@cont:~/rdk-speedtest-cli/build$ ./rdk-speedtest-cli -t 30 192.168.64.55 

Running iperf test with the following configuration:
  Server IP:      192.168.64.55
  Port:           5202
  Duration:       30 seconds
  Bandwidth:      100 Mbps
  Parallel streams: 4

Connecting to host 192.168.64.55, port 5202
[  5] local 192.168.64.55 port 51838 connected to 192.168.64.55 port 5202
[  7] local 192.168.64.55 port 51846 connected to 192.168.64.55 port 5202
[  9] local 192.168.64.55 port 51862 connected to 192.168.64.55 port 5202
[ 11] local 192.168.64.55 port 51866 connected to 192.168.64.55 port 5202
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  12.0 MBytes   100 Mbits/sec    0    639 KBytes       
[  7]   0.00-1.00   sec  12.0 MBytes   100 Mbits/sec    1   1.06 MBytes       
[  9]   0.00-1.00   sec  11.9 MBytes  99.2 Mbits/sec    0    639 KBytes       
[ 11]   0.00-1.00   sec  11.8 MBytes  98.2 Mbits/sec    0    639 KBytes       
[SUM]   0.00-1.00   sec  47.6 MBytes   398 Mbits/sec    1             
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   1.00-2.00   sec  11.6 MBytes  97.7 Mbits/sec    1   1.06 MBytes       
[  7]   1.00-2.00   sec  11.9 MBytes  99.8 Mbits/sec    0   1.06 MBytes       
[  9]   1.00-2.00   sec  12.0 MBytes   101 Mbits/sec    1    639 KBytes       
[ 11]   1.00-2.00   sec  11.9 MBytes  99.8 Mbits/sec    2    639 KBytes       
[SUM]   1.00-2.00   sec  47.4 MBytes   398 Mbits/sec    4             
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   2.00-3.00   sec  12.0 MBytes   101 Mbits/sec    2   1.06 MBytes       
[  7]   2.00-3.00   sec  11.9 MBytes  99.6 Mbits/sec    0   1.06 MBytes       
[  9]   2.00-3.00   sec  12.0 MBytes   101 Mbits/sec    0   1.06 MBytes       
[ 11]   2.00-3.00   sec  12.1 MBytes   102 Mbits/sec    1    639 KBytes       
[SUM]   2.00-3.00   sec  48.0 MBytes   403 Mbits/sec    3             
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   3.00-4.00   sec  12.1 MBytes   102 Mbits/sec    0   1.06 MBytes       
[  7]   3.00-4.00   sec  11.9 MBytes  99.8 Mbits/sec    0   1.06 MBytes       
[  9]   3.00-4.00   sec  11.8 MBytes  98.7 Mbits/sec    1   1.06 MBytes       
[ 11]   3.00-4.00   sec  11.9 MBytes  99.8 Mbits/sec    1    639 KBytes       
[SUM]   3.00-4.00   sec  47.6 MBytes   400 Mbits/sec    2             
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   4.00-5.00   sec  11.8 MBytes  98.5 Mbits/sec    1   1.06 MBytes       
[  7]   4.00-5.00   sec  11.9 MBytes  99.5 Mbits/sec    1   1.06 MBytes       
[  9]   4.00-5.01   sec  11.6 MBytes  96.5 Mbits/sec    0   1.06 MBytes       
[ 11]   4.00-5.01   sec  12.0 MBytes  99.6 Mbits/sec    2   1.19 MBytes       
[SUM]   4.00-5.00   sec  47.2 MBytes   396 Mbits/sec    4             
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   5.00-6.00   sec  12.0 MBytes   100 Mbits/sec    0   1.06 MBytes       
[  7]   5.00-6.00   sec  11.8 MBytes  98.4 Mbits/sec    0   1.06 MBytes       
[  9]   5.01-6.00   sec  12.2 MBytes   104 Mbits/sec    0   1.06 MBytes       
[ 11]   5.01-6.00   sec  11.9 MBytes   100 Mbits/sec    1   1.19 MBytes       
[SUM]   5.00-6.00   sec  47.9 MBytes   401 Mbits/sec    1             
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   6.00-7.01   sec  12.0 MBytes   100 Mbits/sec    0   1.06 MBytes       
[  7]   6.00-7.01   sec  12.1 MBytes   102 Mbits/sec    1   1.06 MBytes       
[  9]   6.00-7.01   sec  12.0 MBytes   100 Mbits/sec    0   1.06 MBytes       
[ 11]   6.00-7.01   sec  12.0 MBytes   100 Mbits/sec    1   1.19 MBytes       
[SUM]   6.00-7.01   sec  48.1 MBytes   403 Mbits/sec    2             
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   7.01-8.01   sec  11.8 MBytes  98.4 Mbits/sec    1   1.06 MBytes       
[  7]   7.01-8.01   sec  11.8 MBytes  98.4 Mbits/sec    1   1.06 MBytes       
[  9]   7.01-8.01   sec  11.8 MBytes  98.4 Mbits/sec    0   1.06 MBytes       
[ 11]   7.01-8.01   sec  11.8 MBytes  98.4 Mbits/sec    1   1.19 MBytes       
[SUM]   7.01-8.01   sec  47.0 MBytes   394 Mbits/sec    3             
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   8.01-9.01   sec  12.1 MBytes   102 Mbits/sec    0   1.06 MBytes       
[  7]   8.01-9.01   sec  12.0 MBytes   101 Mbits/sec    1   1.06 MBytes       
[  9]   8.01-9.01   sec  11.9 MBytes  99.5 Mbits/sec    0   1.06 MBytes       
[ 11]   8.01-9.01   sec  11.9 MBytes  99.5 Mbits/sec    0   1.19 MBytes       
[SUM]   8.01-9.01   sec  47.9 MBytes   401 Mbits/sec    1             
^C
ubuntu@cont:~/rdk-speedtest-cli/build$ 
ubuntu@cont:~/rdk-speedtest-cli/build$ ./rdk-speedtest-cli -b 50 192.168.64.55 

Running iperf test with the following configuration:
  Server IP:      192.168.64.55
  Port:           5202
  Duration:       60 seconds
  Bandwidth:      50 Mbps
  Parallel streams: 4

Connecting to host 192.168.64.55, port 5202
[  5] local 192.168.64.55 port 47104 connected to 192.168.64.55 port 5202
[  7] local 192.168.64.55 port 47112 connected to 192.168.64.55 port 5202
[  9] local 192.168.64.55 port 47118 connected to 192.168.64.55 port 5202
[ 11] local 192.168.64.55 port 47126 connected to 192.168.64.55 port 5202
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  6.00 MBytes  50.2 Mbits/sec    0    639 KBytes       
[  7]   0.00-1.00   sec  6.00 MBytes  50.2 Mbits/sec    0    639 KBytes       
[  9]   0.00-1.00   sec  6.00 MBytes  50.2 Mbits/sec    1    639 KBytes       
[ 11]   0.00-1.00   sec  6.00 MBytes  50.2 Mbits/sec    0    639 KBytes       
[SUM]   0.00-1.00   sec  24.0 MBytes   201 Mbits/sec    1             
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   1.00-2.00   sec  6.00 MBytes  50.3 Mbits/sec    1    639 KBytes       
[  7]   1.00-2.00   sec  6.00 MBytes  50.3 Mbits/sec    0    639 KBytes       
[  9]   1.00-2.00   sec  6.00 MBytes  50.3 Mbits/sec    1    639 KBytes       
[ 11]   1.00-2.00   sec  5.88 MBytes  49.2 Mbits/sec    1    639 KBytes       
[SUM]   1.00-2.00   sec  23.9 MBytes   200 Mbits/sec    3             
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   2.00-3.00   sec  5.88 MBytes  49.4 Mbits/sec    0    639 KBytes       
[  7]   2.00-3.00   sec  5.88 MBytes  49.4 Mbits/sec    0    639 KBytes       
[  9]   2.00-3.00   sec  5.88 MBytes  49.4 Mbits/sec    0    639 KBytes       
[ 11]   2.00-3.00   sec  6.00 MBytes  50.4 Mbits/sec    0    639 KBytes       
[SUM]   2.00-3.00   sec  23.6 MBytes   199 Mbits/sec    0             
^C
ubuntu@cont:~/rdk-speedtest-cli/build$ ./rdk-speedtest-cli -P 8 192.168.64.55 

Running iperf test with the following configuration:
  Server IP:      192.168.64.55
  Port:           5202
  Duration:       60 seconds
  Bandwidth:      100 Mbps
  Parallel streams: 8

Connecting to host 192.168.64.55, port 5202
[  5] local 192.168.64.55 port 35310 connected to 192.168.64.55 port 5202
[  7] local 192.168.64.55 port 35312 connected to 192.168.64.55 port 5202
[  9] local 192.168.64.55 port 35322 connected to 192.168.64.55 port 5202
[ 11] local 192.168.64.55 port 35332 connected to 192.168.64.55 port 5202
[ 13] local 192.168.64.55 port 35340 connected to 192.168.64.55 port 5202
[ 15] local 192.168.64.55 port 35350 connected to 192.168.64.55 port 5202
[ 17] local 192.168.64.55 port 35360 connected to 192.168.64.55 port 5202
[ 19] local 192.168.64.55 port 35364 connected to 192.168.64.55 port 5202
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  11.8 MBytes  98.4 Mbits/sec    0   1023 KBytes       
[  7]   0.00-1.00   sec  11.6 MBytes  97.4 Mbits/sec    0   1.06 MBytes       
[  9]   0.00-1.00   sec  11.4 MBytes  95.3 Mbits/sec    0   1.19 MBytes       
[ 11]   0.00-1.00   sec  11.5 MBytes  96.3 Mbits/sec    0   2.19 MBytes       
[ 13]   0.00-1.00   sec  11.9 MBytes  99.4 Mbits/sec    0   2.37 MBytes       
[ 15]   0.00-1.01   sec  12.1 MBytes   101 Mbits/sec    0   1.25 MBytes       
[ 17]   0.00-1.01   sec  11.6 MBytes  96.4 Mbits/sec    0   1.06 MBytes       
[ 19]   0.00-1.01   sec  11.9 MBytes  98.5 Mbits/sec    0   1.87 MBytes       
[SUM]   0.00-1.00   sec  93.8 MBytes   785 Mbits/sec    0             
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   1.00-2.00   sec  12.0 MBytes   101 Mbits/sec    0   1023 KBytes       
[  7]   1.00-2.00   sec  12.2 MBytes   103 Mbits/sec    0   1.06 MBytes       
[  9]   1.00-2.00   sec  12.5 MBytes   105 Mbits/sec    0   1.19 MBytes       
[ 11]   1.00-2.00   sec  11.9 MBytes  99.5 Mbits/sec    0   2.19 MBytes       
[ 13]   1.00-2.00   sec  11.1 MBytes  93.3 Mbits/sec    0   2.37 MBytes       
[ 15]   1.01-2.01   sec  11.5 MBytes  96.6 Mbits/sec    0   1.25 MBytes       
[ 17]   1.01-2.01   sec  12.0 MBytes   101 Mbits/sec    0   1.06 MBytes       
[ 19]   1.01-2.01   sec  11.8 MBytes  98.7 Mbits/sec    0   1.87 MBytes       
[SUM]   1.00-2.00   sec  95.0 MBytes   796 Mbits/sec    0             
^C
ubuntu@cont:~/rdk-speedtest-cli/build$ ./rdk-speedtest-cli -p 5202 192.168.64.55

Running iperf test with the following configuration:
  Server IP:      192.168.64.55
  Port:           5202
  Duration:       60 seconds
  Bandwidth:      100 Mbps
  Parallel streams: 4

Connecting to host 192.168.64.55, port 5202
[  5] local 192.168.64.55 port 46994 connected to 192.168.64.55 port 5202
[  7] local 192.168.64.55 port 47010 connected to 192.168.64.55 port 5202
[  9] local 192.168.64.55 port 47022 connected to 192.168.64.55 port 5202
[ 11] local 192.168.64.55 port 47036 connected to 192.168.64.55 port 5202
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.00   sec  12.0 MBytes   100 Mbits/sec    1    639 KBytes       
[  7]   0.00-1.00   sec  11.5 MBytes  96.3 Mbits/sec    0    639 KBytes       
[  9]   0.00-1.00   sec  11.6 MBytes  97.3 Mbits/sec    0   1023 KBytes       
[ 11]   0.00-1.00   sec  11.5 MBytes  96.3 Mbits/sec    0   1.06 MBytes       
[SUM]   0.00-1.00   sec  46.6 MBytes   390 Mbits/sec    1             
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   1.00-2.01   sec  11.6 MBytes  97.0 Mbits/sec    0    639 KBytes       
[  7]   1.00-2.02   sec  12.5 MBytes   103 Mbits/sec    0   1.19 MBytes       
[  9]   1.00-2.02   sec  12.2 MBytes   101 Mbits/sec    0   1023 KBytes       
[ 11]   1.00-2.02   sec  12.5 MBytes   103 Mbits/sec    1   1.06 MBytes       
[SUM]   1.00-2.01   sec  48.9 MBytes   408 Mbits/sec    1             
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   2.01-3.00   sec  11.8 MBytes  98.9 Mbits/sec    0   1023 KBytes       
[  7]   2.02-3.01   sec  11.6 MBytes  98.3 Mbits/sec    1   1.19 MBytes       
[  9]   2.02-3.01   sec  11.6 MBytes  98.3 Mbits/sec    2   1023 KBytes       
[ 11]   2.02-3.01   sec  11.8 MBytes  99.3 Mbits/sec    2   1.06 MBytes       
[SUM]   2.01-3.00   sec  46.8 MBytes   394 Mbits/sec    5             
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   2.01-3.00   sec  11.8 MBytes  98.9 Mbits/sec    0   1023 KBytes       
[  7]   2.02-3.01   sec  11.6 MBytes  98.3 Mbits/sec    1   1.19 MBytes       
[  9]   2.02-3.01   sec  11.6 MBytes  98.3 Mbits/sec    2   1023 KBytes       
[ 11]   2.02-3.01   sec  11.8 MBytes  99.3 Mbits/sec    2   1.06 MBytes       
[SUM]   2.01-3.00   sec  46.8 MBytes   394 Mbits/sec    5             
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-3.00   sec  40.1 MBytes   112 Mbits/sec    1             sender
[  5]   0.00-3.00   sec  0.00 Bytes  0.00 bits/sec                  receiver
[  7]   0.00-3.00   sec  40.0 MBytes   112 Mbits/sec    1             sender
[  7]   0.00-3.00   sec  0.00 Bytes  0.00 bits/sec                  receiver
[  9]   0.00-3.00   sec  40.0 MBytes   112 Mbits/sec    2             sender
[  9]   0.00-3.00   sec  0.00 Bytes  0.00 bits/sec                  receiver
[ 11]   0.00-3.00   sec  40.0 MBytes   112 Mbits/sec    3             sender
[ 11]   0.00-3.00   sec  0.00 Bytes  0.00 bits/sec                  receiver
[SUM]   0.00-3.00   sec   160 MBytes   447 Mbits/sec    7             sender
[SUM]   0.00-3.00   sec  0.00 Bytes  0.00 bits/sec                  receiver
Error: the server has terminated

Test Results:
Sender: 0 bytes (0.0 Mbits/sec)
Receiver: 0 bytes (0.0 Mbits/sec)
sh: 1: dmcli: not found
sh: 1: dmcli: not found
sh: 1: dmcli: not found
ubuntu@cont:~/rdk-speedtest-cli/build$ ./rdk-speedtest-cli -h
Usage: ./rdk-speedtest-cli [OPTIONS] <server_ip>

Options:
  -p PORT     Server port to connect to (default: 5202)
  -t SECONDS  Test duration in seconds (default: 60)
  -b MBPS     Target bandwidth in Mbps (default: 100)
  -P STREAMS  Number of parallel streams (default: 4)

Examples:
  # Basic usage (uses all defaults)
  ./rdk-speedtest-cli 192.168.64.55

  # Specify test duration of 30 seconds
  ./rdk-speedtest-cli -t 30 192.168.64.55

  # Combine multiple options
  ./rdk-speedtest-cli -t 15 -b 200 -P 6 -p 5202 192.168.64.55
ubuntu@cont:~/rdk-speedtest-cli/build$ 

//--------server--------
t-cli$ iperf3 -s -p 5202
-----------------------------------------------------------
Server listening on 5202 (test #1)
-----------------------------------------------------------
Accepted connection from 192.168.64.55, port 45398
[  5] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 45402
[  8] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 45408
[ 10] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 45422
[ 12] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 45426
[ ID] Interval           Transfer     Bitrate
[  5]   0.00-1.00   sec  11.9 MBytes  99.5 Mbits/sec                  
[  8]   0.00-1.00   sec  12.0 MBytes   101 Mbits/sec                  
[ 10]   0.00-1.00   sec  11.9 MBytes  99.5 Mbits/sec                  
[ 12]   0.00-1.00   sec  11.8 MBytes  98.4 Mbits/sec                  
[SUM]   0.00-1.00   sec  47.5 MBytes   398 Mbits/sec                  
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   1.00-2.00   sec  12.0 MBytes   101 Mbits/sec                  
[  8]   1.00-2.00   sec  11.6 MBytes  97.6 Mbits/sec                  
[ 10]   1.00-2.00   sec  11.9 MBytes  99.7 Mbits/sec                  
[ 12]   1.00-2.00   sec  11.8 MBytes  98.6 Mbits/sec                  
[SUM]   1.00-2.00   sec  47.2 MBytes   396 Mbits/sec                  
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   2.00-3.01   sec  11.9 MBytes  99.2 Mbits/sec                  
[  8]   2.00-3.01   sec  12.1 MBytes   101 Mbits/sec                  
[ 10]   2.00-3.01   sec  12.0 MBytes   100 Mbits/sec                  
[ 12]   2.00-3.01   sec  12.2 MBytes   102 Mbits/sec                  
[SUM]   2.00-3.01   sec  48.2 MBytes   403 Mbits/sec                  
iperf3: the client has unexpectedly closed the connection
-----------------------------------------------------------
Server listening on 5202 (test #2)
-----------------------------------------------------------
Accepted connection from 192.168.64.55, port 51828
[  5] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 51838
[  8] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 51846
[ 10] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 51862
[ 12] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 51866
[ ID] Interval           Transfer     Bitrate
[  5]   0.00-1.00   sec  12.0 MBytes   100 Mbits/sec                  
[  8]   0.00-1.00   sec  12.0 MBytes   100 Mbits/sec                  
[ 10]   0.00-1.00   sec  11.9 MBytes  99.1 Mbits/sec                  
[ 12]   0.00-1.00   sec  11.8 MBytes  98.1 Mbits/sec                  
[SUM]   0.00-1.00   sec  47.6 MBytes   398 Mbits/sec                  
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   1.00-2.00   sec  11.6 MBytes  97.7 Mbits/sec                  
[  8]   1.00-2.00   sec  11.9 MBytes  99.8 Mbits/sec                  
[ 10]   1.00-2.00   sec  12.0 MBytes   101 Mbits/sec                  
[ 12]   1.00-2.00   sec  11.9 MBytes  99.8 Mbits/sec                  
[SUM]   1.00-2.00   sec  47.4 MBytes   398 Mbits/sec                  
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   2.00-3.00   sec  12.0 MBytes   101 Mbits/sec                  
[  8]   2.00-3.00   sec  11.9 MBytes  99.8 Mbits/sec                  
[ 10]   2.00-3.00   sec  11.9 MBytes  99.8 Mbits/sec                  
[ 12]   2.00-3.00   sec  12.1 MBytes   102 Mbits/sec                  
[SUM]   2.00-3.00   sec  47.9 MBytes   402 Mbits/sec                  
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   3.00-4.00   sec  12.1 MBytes   102 Mbits/sec                  
[  8]   3.00-4.00   sec  11.9 MBytes  99.6 Mbits/sec                  
[ 10]   3.00-4.00   sec  11.9 MBytes  99.6 Mbits/sec                  
[ 12]   3.00-4.00   sec  11.9 MBytes  99.6 Mbits/sec                  
[SUM]   3.00-4.00   sec  47.8 MBytes   400 Mbits/sec                  
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   4.00-5.00   sec  11.8 MBytes  98.4 Mbits/sec                  
[  8]   4.00-5.00   sec  11.6 MBytes  97.4 Mbits/sec                  
[ 10]   4.00-5.00   sec  11.5 MBytes  96.3 Mbits/sec                  
[ 12]   4.00-5.00   sec  12.0 MBytes   101 Mbits/sec                  
[SUM]   4.00-5.00   sec  46.9 MBytes   393 Mbits/sec                  
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   5.00-6.00   sec  12.0 MBytes   101 Mbits/sec                  
[  8]   5.00-6.00   sec  12.1 MBytes   102 Mbits/sec                  
[ 10]   5.00-6.00   sec  12.4 MBytes   104 Mbits/sec                  
[ 12]   5.00-6.00   sec  11.9 MBytes  99.5 Mbits/sec                  
[SUM]   5.00-6.00   sec  48.4 MBytes   405 Mbits/sec                  
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   6.00-7.00   sec  11.9 MBytes  99.7 Mbits/sec                  
[  8]   6.00-7.00   sec  12.0 MBytes   101 Mbits/sec                  
[ 10]   6.00-7.00   sec  12.0 MBytes   101 Mbits/sec                  
[ 12]   6.00-7.00   sec  12.0 MBytes   101 Mbits/sec                  
[SUM]   6.00-7.00   sec  47.9 MBytes   402 Mbits/sec                  
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   7.00-8.00   sec  11.9 MBytes  99.5 Mbits/sec                  
[  8]   7.00-8.00   sec  11.9 MBytes  99.5 Mbits/sec                  
[ 10]   7.00-8.00   sec  11.6 MBytes  97.4 Mbits/sec                  
[ 12]   7.00-8.00   sec  11.6 MBytes  97.4 Mbits/sec                  
[SUM]   7.00-8.00   sec  47.0 MBytes   394 Mbits/sec                  
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   8.00-9.01   sec  12.1 MBytes   101 Mbits/sec                  
[  8]   8.00-9.01   sec  12.0 MBytes   100 Mbits/sec                  
[ 10]   8.00-9.01   sec  12.0 MBytes   100 Mbits/sec                  
[ 12]   8.00-9.01   sec  12.0 MBytes   100 Mbits/sec                  
[SUM]   8.00-9.01   sec  48.1 MBytes   403 Mbits/sec                  
iperf3: the client has unexpectedly closed the connection
-----------------------------------------------------------
Server listening on 5202 (test #3)
-----------------------------------------------------------
Accepted connection from 192.168.64.55, port 47090
[  5] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 47104
[  8] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 47112
[ 10] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 47118
[ 12] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 47126
[ ID] Interval           Transfer     Bitrate
[  5]   0.00-1.00   sec  6.00 MBytes  50.2 Mbits/sec                  
[  8]   0.00-1.00   sec  6.00 MBytes  50.2 Mbits/sec                  
[ 10]   0.00-1.00   sec  6.00 MBytes  50.2 Mbits/sec                  
[ 12]   0.00-1.00   sec  6.00 MBytes  50.2 Mbits/sec                  
[SUM]   0.00-1.00   sec  24.0 MBytes   201 Mbits/sec                  
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   1.00-2.00   sec  5.88 MBytes  49.3 Mbits/sec                  
[  8]   1.00-2.00   sec  6.00 MBytes  50.3 Mbits/sec                  
[ 10]   1.00-2.00   sec  6.00 MBytes  50.3 Mbits/sec                  
[ 12]   1.00-2.00   sec  5.88 MBytes  49.3 Mbits/sec                  
[SUM]   1.00-2.00   sec  23.8 MBytes   199 Mbits/sec                  
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   2.00-3.00   sec  6.00 MBytes  50.4 Mbits/sec                  
[  8]   2.00-3.00   sec  5.88 MBytes  49.3 Mbits/sec                  
[ 10]   2.00-3.00   sec  5.88 MBytes  49.3 Mbits/sec                  
[ 12]   2.00-3.00   sec  6.00 MBytes  50.4 Mbits/sec                  
[SUM]   2.00-3.00   sec  23.8 MBytes   199 Mbits/sec                  
iperf3: the client has unexpectedly closed the connection
-----------------------------------------------------------
Server listening on 5202 (test #4)
-----------------------------------------------------------
Accepted connection from 192.168.64.55, port 35306
[  5] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 35310
[  8] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 35312
[ 10] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 35322
[ 12] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 35332
[ 14] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 35340
[ 16] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 35350
[ 18] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 35360
[ 20] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 35364
[ ID] Interval           Transfer     Bitrate
[  5]   0.00-1.00   sec  11.8 MBytes  98.4 Mbits/sec                  
[  8]   0.00-1.00   sec  11.6 MBytes  97.4 Mbits/sec                  
[ 10]   0.00-1.00   sec  11.4 MBytes  95.3 Mbits/sec                  
[ 12]   0.00-1.00   sec  11.5 MBytes  96.3 Mbits/sec                  
[ 14]   0.00-1.00   sec  11.9 MBytes  99.5 Mbits/sec                  
[ 16]   0.00-1.00   sec  11.5 MBytes  96.3 Mbits/sec                  
[ 18]   0.00-1.00   sec  11.5 MBytes  96.3 Mbits/sec                  
[ 20]   0.00-1.00   sec  11.8 MBytes  98.4 Mbits/sec                  
[SUM]   0.00-1.00   sec  92.9 MBytes   778 Mbits/sec                  
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   1.00-2.00   sec  12.0 MBytes   101 Mbits/sec                  
[  8]   1.00-2.00   sec  12.2 MBytes   103 Mbits/sec                  
[ 10]   1.00-2.00   sec  12.0 MBytes   101 Mbits/sec                  
[ 12]   1.00-2.00   sec  11.9 MBytes  99.6 Mbits/sec                  
[ 14]   1.00-2.00   sec  11.4 MBytes  95.4 Mbits/sec                  
[ 16]   1.00-2.00   sec  12.1 MBytes   102 Mbits/sec                  
[ 18]   1.00-2.00   sec  12.1 MBytes   102 Mbits/sec                  
[ 20]   1.00-2.00   sec  11.9 MBytes  99.6 Mbits/sec                  
[SUM]   1.00-2.00   sec  95.6 MBytes   802 Mbits/sec                  
iperf3: the client has unexpectedly closed the connection
-----------------------------------------------------------
Server listening on 5202 (test #5)
-----------------------------------------------------------
Accepted connection from 192.168.64.55, port 46980
[  5] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 46994
[  8] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 47010
[ 10] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 47022
[ 12] local 192.168.64.55 port 5202 connected to 192.168.64.55 port 47036
[ ID] Interval           Transfer     Bitrate
[  5]   0.00-1.00   sec  12.0 MBytes   100 Mbits/sec                  
[  8]   0.00-1.00   sec  11.5 MBytes  96.1 Mbits/sec                  
[ 10]   0.00-1.00   sec  11.6 MBytes  97.1 Mbits/sec                  
[ 12]   0.00-1.00   sec  11.5 MBytes  96.1 Mbits/sec                  
[SUM]   0.00-1.00   sec  46.6 MBytes   390 Mbits/sec                  
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   1.00-2.00   sec  11.6 MBytes  97.5 Mbits/sec                  
[  8]   1.00-2.00   sec  12.2 MBytes   103 Mbits/sec                  
[ 10]   1.00-2.00   sec  12.2 MBytes   103 Mbits/sec                  
[ 12]   1.00-2.00   sec  12.4 MBytes   104 Mbits/sec                  
[SUM]   1.00-2.00   sec  48.5 MBytes   407 Mbits/sec                  
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   2.00-3.00   sec  11.9 MBytes  99.8 Mbits/sec                  
[  8]   2.00-3.00   sec  11.9 MBytes  99.8 Mbits/sec                  
[ 10]   2.00-3.00   sec  11.6 MBytes  97.7 Mbits/sec                  
[ 12]   2.00-3.00   sec  11.9 MBytes  99.8 Mbits/sec                  
[SUM]   2.00-3.00   sec  47.2 MBytes   397 Mbits/sec                  
^C- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   3.00-3.36   sec  4.50 MBytes   106 Mbits/sec                  
[  8]   3.00-3.36   sec  4.38 MBytes   103 Mbits/sec                  
[ 10]   3.00-3.36   sec  4.50 MBytes   106 Mbits/sec                  
[ 12]   3.00-3.36   sec  4.25 MBytes   100 Mbits/sec                  
[SUM]   3.00-3.36   sec  17.6 MBytes   415 Mbits/sec                  
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate
[  5]   0.00-3.36   sec  40.0 MBytes  99.9 Mbits/sec                  receiver
[  8]   0.00-3.36   sec  40.0 MBytes  99.9 Mbits/sec                  receiver
[ 10]   0.00-3.36   sec  40.0 MBytes  99.9 Mbits/sec                  receiver
[ 12]   0.00-3.36   sec  40.0 MBytes  99.9 Mbits/sec                  receiver
[SUM]   0.00-3.36   sec   160 MBytes   400 Mbits/sec                  receiver
iperf3: interrupt - the server has terminated

//-----
tu@cont:~/rdk-speedtest-cli/build$ ./rdk-speedtest-cli -J -t 5 -b 200 -P 6 -p 5202 192.168.64.55 > res.json
sh: 1: dmcli: not found
sh: 1: dmcli: not found
sh: 1: dmcli: not found
ubuntu@cont:~/rdk-speedtest-cli/build$ cat res.json 
Connecting to host 192.168.64.55, port 5202
[  5] local 192.168.64.55 port 53754 connected to 192.168.64.55 port 5202
[  7] local 192.168.64.55 port 53764 connected to 192.168.64.55 port 5202
[  9] local 192.168.64.55 port 53776 connected to 192.168.64.55 port 5202
[ 11] local 192.168.64.55 port 53786 connected to 192.168.64.55 port 5202
[ 13] local 192.168.64.55 port 53792 connected to 192.168.64.55 port 5202
[ 15] local 192.168.64.55 port 53794 connected to 192.168.64.55 port 5202
[ ID] Interval           Transfer     Bitrate         Retr  Cwnd
[  5]   0.00-1.01   sec  23.5 MBytes   195 Mbits/sec    0   2.50 MBytes       
[  7]   0.00-1.01   sec  23.6 MBytes   196 Mbits/sec    0   1.44 MBytes       
[  9]   0.00-1.01   sec  23.9 MBytes   198 Mbits/sec    1   1.19 MBytes       
[ 11]   0.00-1.01   sec  23.5 MBytes   195 Mbits/sec    0   1.87 MBytes       
[ 13]   0.00-1.01   sec  22.8 MBytes   189 Mbits/sec    0   2.50 MBytes       
[ 15]   0.00-1.01   sec  22.9 MBytes   190 Mbits/sec    0   1.31 MBytes       
[SUM]   0.00-1.01   sec   140 MBytes  1.16 Gbits/sec    1             
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   1.01-2.01   sec  15.0 MBytes   126 Mbits/sec    0   2.69 MBytes       
[  7]   1.01-2.01   sec  23.8 MBytes   199 Mbits/sec    0   1.62 MBytes       
[  9]   1.01-2.01   sec  23.2 MBytes   195 Mbits/sec    0   1.56 MBytes       
[ 11]   1.01-2.01   sec  24.0 MBytes   201 Mbits/sec    0   1.94 MBytes       
[ 13]   1.01-2.01   sec  23.2 MBytes   195 Mbits/sec    0   2.62 MBytes       
[ 15]   1.01-2.01   sec  19.9 MBytes   167 Mbits/sec    0   1.62 MBytes       
[SUM]   1.01-2.01   sec   129 MBytes  1.08 Gbits/sec    0             
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   2.01-3.02   sec  33.6 MBytes   278 Mbits/sec    0   2.94 MBytes       
[  7]   2.01-3.02   sec  22.5 MBytes   186 Mbits/sec    1   1.81 MBytes       
[  9]   2.01-3.06   sec  24.0 MBytes   192 Mbits/sec    0   1.75 MBytes       
[ 11]   2.01-3.06   sec  24.0 MBytes   192 Mbits/sec    1   2.12 MBytes       
[ 13]   2.01-3.06   sec  24.9 MBytes   199 Mbits/sec    1   2.62 MBytes       
[ 15]   2.01-3.06   sec  24.5 MBytes   196 Mbits/sec    0   1.81 MBytes       
[SUM]   2.01-3.02   sec   154 MBytes  1.27 Gbits/sec    3             
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   3.02-4.00   sec  22.1 MBytes   190 Mbits/sec    0   2.94 MBytes       
[  7]   3.02-4.03   sec  23.1 MBytes   193 Mbits/sec    1   1.94 MBytes       
[  9]   3.06-4.03   sec  19.2 MBytes   166 Mbits/sec    0   1.81 MBytes       
[ 11]   3.06-4.03   sec  22.2 MBytes   192 Mbits/sec    0   2.12 MBytes       
[ 13]   3.06-4.17   sec  24.5 MBytes   184 Mbits/sec    0   2.75 MBytes       
[ 15]   3.06-4.17   sec  24.9 MBytes   187 Mbits/sec    0   1.94 MBytes       
[SUM]   3.02-4.00   sec   136 MBytes  1.17 Gbits/sec    1             
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5]   4.00-5.02   sec  21.5 MBytes   177 Mbits/sec    0   2.94 MBytes       
[  7]   4.03-5.02   sec  22.6 MBytes   191 Mbits/sec    1   2.00 MBytes       
[  9]   4.03-5.02   sec  27.8 MBytes   235 Mbits/sec    0   2.19 MBytes       
[ 11]   4.03-5.02   sec  19.5 MBytes   165 Mbits/sec    0   2.37 MBytes       
[ 13]   4.17-5.02   sec  22.5 MBytes   223 Mbits/sec    1   2.00 MBytes       
[ 15]   4.17-5.02   sec  23.0 MBytes   228 Mbits/sec    0   2.00 MBytes       
[SUM]   4.00-5.02   sec   137 MBytes  1.12 Gbits/sec    2             
- - - - - - - - - - - - - - - - - - - - - - - - -
[ ID] Interval           Transfer     Bitrate         Retr
[  5]   0.00-5.02   sec   118 MBytes   196 Mbits/sec    0             sender
[  5]   0.00-5.02   sec   118 MBytes   196 Mbits/sec                  receiver
[  7]   0.00-5.02   sec   118 MBytes   198 Mbits/sec    3             sender
[  7]   0.00-5.02   sec   118 MBytes   198 Mbits/sec                  receiver
[  9]   0.00-5.02   sec   119 MBytes   199 Mbits/sec    1             sender
[  9]   0.00-5.02   sec   119 MBytes   199 Mbits/sec                  receiver
[ 11]   0.00-5.02   sec   119 MBytes   199 Mbits/sec    1             sender
[ 11]   0.00-5.02   sec   119 MBytes   199 Mbits/sec                  receiver
[ 13]   0.00-5.02   sec   118 MBytes   197 Mbits/sec    2             sender
[ 13]   0.00-5.02   sec   118 MBytes   197 Mbits/sec                  receiver
[ 15]   0.00-5.02   sec   119 MBytes   199 Mbits/sec    0             sender
[ 15]   0.00-5.02   sec   119 MBytes   199 Mbits/sec                  receiver
[SUM]   0.00-5.02   sec   711 MBytes  1.19 Gbits/sec    7             sender
[SUM]   0.00-5.02   sec   712 MBytes  1.19 Gbits/sec                  receiver

iperf Done.
{
  "timestamp": "2025-02-21 23:47:03",
  "configuration": {
    "server_ip": "192.168.64.55",
    "port": 5202,
    "duration": 5,
    "bitrate_mbps": 200,
    "parallel_streams": 6
  },
  "results": {
    "sender": {
      "bytes": 125000000,
      "mbits_per_sec": 200.00
    },
    "receiver": {
      "bytes": 125000000,
      "mbits_per_sec": 200.00
    }
  }
}
