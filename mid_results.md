# Results

## When using response text hardcoded
```
Tarass-MacBook-Pro-3:Desktop madtaras$ loadtest -n 5000 -c 80 http://localhost:3000
[Tue May 15 2018 00:12:03 GMT+0300 (EEST)] INFO Requests: 0 (0%), requests per second: 0, mean latency: 0 ms
[Tue May 15 2018 00:12:05 GMT+0300 (EEST)] INFO 
[Tue May 15 2018 00:12:05 GMT+0300 (EEST)] INFO Target URL:          http://localhost:3000
[Tue May 15 2018 00:12:05 GMT+0300 (EEST)] INFO Max requests:        5000
[Tue May 15 2018 00:12:05 GMT+0300 (EEST)] INFO Concurrency level:   80
[Tue May 15 2018 00:12:05 GMT+0300 (EEST)] INFO Agent:               none
[Tue May 15 2018 00:12:05 GMT+0300 (EEST)] INFO 
[Tue May 15 2018 00:12:05 GMT+0300 (EEST)] INFO Completed requests:  5000
[Tue May 15 2018 00:12:05 GMT+0300 (EEST)] INFO Total errors:        0
[Tue May 15 2018 00:12:05 GMT+0300 (EEST)] INFO Total time:          2.002663101 s
[Tue May 15 2018 00:12:05 GMT+0300 (EEST)] INFO Requests per second: 2497
[Tue May 15 2018 00:12:05 GMT+0300 (EEST)] INFO Mean latency:        31.5 ms
[Tue May 15 2018 00:12:05 GMT+0300 (EEST)] INFO 
[Tue May 15 2018 00:12:05 GMT+0300 (EEST)] INFO Percentage of the requests served within a certain time
[Tue May 15 2018 00:12:05 GMT+0300 (EEST)] INFO   50%      27 ms
[Tue May 15 2018 00:12:05 GMT+0300 (EEST)] INFO   90%      34 ms
[Tue May 15 2018 00:12:05 GMT+0300 (EEST)] INFO   95%      47 ms
[Tue May 15 2018 00:12:05 GMT+0300 (EEST)] INFO   99%      199 ms
[Tue May 15 2018 00:12:05 GMT+0300 (EEST)] INFO  100%      207 ms (longest request)
```

## When reading data from filesystem
```
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ loadtest -n 5000 -c 80 http://localhost:3000
[Tue May 15 2018 01:30:41 GMT+0300 (EEST)] INFO Requests: 0 (0%), requests per second: 0, mean latency: 0 ms
[Tue May 15 2018 01:30:43 GMT+0300 (EEST)] INFO 
[Tue May 15 2018 01:30:43 GMT+0300 (EEST)] INFO Target URL:          http://localhost:3000
[Tue May 15 2018 01:30:43 GMT+0300 (EEST)] INFO Max requests:        5000
[Tue May 15 2018 01:30:43 GMT+0300 (EEST)] INFO Concurrency level:   80
[Tue May 15 2018 01:30:43 GMT+0300 (EEST)] INFO Agent:               none
[Tue May 15 2018 01:30:43 GMT+0300 (EEST)] INFO 
[Tue May 15 2018 01:30:43 GMT+0300 (EEST)] INFO Completed requests:  5000
[Tue May 15 2018 01:30:43 GMT+0300 (EEST)] INFO Total errors:        0
[Tue May 15 2018 01:30:43 GMT+0300 (EEST)] INFO Total time:          2.0821390070000003 s
[Tue May 15 2018 01:30:43 GMT+0300 (EEST)] INFO Requests per second: 2401
[Tue May 15 2018 01:30:43 GMT+0300 (EEST)] INFO Mean latency:        32.8 ms
[Tue May 15 2018 01:30:43 GMT+0300 (EEST)] INFO 
[Tue May 15 2018 01:30:43 GMT+0300 (EEST)] INFO Percentage of the requests served within a certain time
[Tue May 15 2018 01:30:43 GMT+0300 (EEST)] INFO   50%      31 ms
[Tue May 15 2018 01:30:43 GMT+0300 (EEST)] INFO   90%      38 ms
[Tue May 15 2018 01:30:43 GMT+0300 (EEST)] INFO   95%      42 ms
[Tue May 15 2018 01:30:43 GMT+0300 (EEST)] INFO   99%      62 ms
[Tue May 15 2018 01:30:43 GMT+0300 (EEST)] INFO  100%      69 ms (longest request)
```

## After all `cout`s removed
```
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ loadtest -n 5000 -c 80 http://localhost:3000
[Tue May 15 2018 01:34:18 GMT+0300 (EEST)] INFO Requests: 0 (0%), requests per second: 0, mean latency: 0 ms
[Tue May 15 2018 01:34:20 GMT+0300 (EEST)] INFO 
[Tue May 15 2018 01:34:20 GMT+0300 (EEST)] INFO Target URL:          http://localhost:3000
[Tue May 15 2018 01:34:20 GMT+0300 (EEST)] INFO Max requests:        5000
[Tue May 15 2018 01:34:20 GMT+0300 (EEST)] INFO Concurrency level:   80
[Tue May 15 2018 01:34:20 GMT+0300 (EEST)] INFO Agent:               none
[Tue May 15 2018 01:34:20 GMT+0300 (EEST)] INFO 
[Tue May 15 2018 01:34:20 GMT+0300 (EEST)] INFO Completed requests:  5000
[Tue May 15 2018 01:34:20 GMT+0300 (EEST)] INFO Total errors:        0
[Tue May 15 2018 01:34:20 GMT+0300 (EEST)] INFO Total time:          1.80828617 s
[Tue May 15 2018 01:34:20 GMT+0300 (EEST)] INFO Requests per second: 2765
[Tue May 15 2018 01:34:20 GMT+0300 (EEST)] INFO Mean latency:        28.4 ms
[Tue May 15 2018 01:34:20 GMT+0300 (EEST)] INFO 
[Tue May 15 2018 01:34:20 GMT+0300 (EEST)] INFO Percentage of the requests served within a certain time
[Tue May 15 2018 01:34:20 GMT+0300 (EEST)] INFO   50%      27 ms
[Tue May 15 2018 01:34:20 GMT+0300 (EEST)] INFO   90%      32 ms
[Tue May 15 2018 01:34:20 GMT+0300 (EEST)] INFO   95%      39 ms
[Tue May 15 2018 01:34:20 GMT+0300 (EEST)] INFO   99%      52 ms
[Tue May 15 2018 01:34:20 GMT+0300 (EEST)] INFO  100%      64 ms (longest request)
```

## BEFORE f181dbd f3f38d8 cb71ae8

```
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ loadtest -n 5000 -c 80 http://localhost:3000
[Thu May 17 2018 13:19:40 GMT+0300 (EEST)] INFO Requests: 0 (0%), requests per second: 0, mean latency: 0 ms
[Thu May 17 2018 13:19:44 GMT+0300 (EEST)] INFO 
[Thu May 17 2018 13:19:44 GMT+0300 (EEST)] INFO Target URL:          http://localhost:3000
[Thu May 17 2018 13:19:44 GMT+0300 (EEST)] INFO Max requests:        5000
[Thu May 17 2018 13:19:44 GMT+0300 (EEST)] INFO Concurrency level:   80
[Thu May 17 2018 13:19:44 GMT+0300 (EEST)] INFO Agent:               none
[Thu May 17 2018 13:19:44 GMT+0300 (EEST)] INFO 
[Thu May 17 2018 13:19:44 GMT+0300 (EEST)] INFO Completed requests:  5000
[Thu May 17 2018 13:19:44 GMT+0300 (EEST)] INFO Total errors:        0
[Thu May 17 2018 13:19:44 GMT+0300 (EEST)] INFO Total time:          3.978731135 s
[Thu May 17 2018 13:19:44 GMT+0300 (EEST)] INFO Requests per second: 1257
[Thu May 17 2018 13:19:44 GMT+0300 (EEST)] INFO Mean latency:        62.9 ms
[Thu May 17 2018 13:19:44 GMT+0300 (EEST)] INFO 
[Thu May 17 2018 13:19:44 GMT+0300 (EEST)] INFO Percentage of the requests served within a certain time
[Thu May 17 2018 13:19:44 GMT+0300 (EEST)] INFO   50%      58 ms
[Thu May 17 2018 13:19:44 GMT+0300 (EEST)] INFO   90%      93 ms
[Thu May 17 2018 13:19:44 GMT+0300 (EEST)] INFO   95%      103 ms
[Thu May 17 2018 13:19:44 GMT+0300 (EEST)] INFO   99%      136 ms
[Thu May 17 2018 13:19:44 GMT+0300 (EEST)] INFO  100%      147 ms (longest request)
```

```
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ loadtest -n 5000 -c 80 http://localhost:3000
[Thu May 17 2018 13:20:14 GMT+0300 (EEST)] INFO Requests: 0 (0%), requests per second: 0, mean latency: 0 ms
[Thu May 17 2018 13:20:16 GMT+0300 (EEST)] INFO 
[Thu May 17 2018 13:20:16 GMT+0300 (EEST)] INFO Target URL:          http://localhost:3000
[Thu May 17 2018 13:20:16 GMT+0300 (EEST)] INFO Max requests:        5000
[Thu May 17 2018 13:20:16 GMT+0300 (EEST)] INFO Concurrency level:   80
[Thu May 17 2018 13:20:16 GMT+0300 (EEST)] INFO Agent:               none
[Thu May 17 2018 13:20:16 GMT+0300 (EEST)] INFO 
[Thu May 17 2018 13:20:16 GMT+0300 (EEST)] INFO Completed requests:  5000
[Thu May 17 2018 13:20:16 GMT+0300 (EEST)] INFO Total errors:        0
[Thu May 17 2018 13:20:16 GMT+0300 (EEST)] INFO Total time:          2.255440242 s
[Thu May 17 2018 13:20:16 GMT+0300 (EEST)] INFO Requests per second: 2217
[Thu May 17 2018 13:20:16 GMT+0300 (EEST)] INFO Mean latency:        35.5 ms
[Thu May 17 2018 13:20:16 GMT+0300 (EEST)] INFO 
[Thu May 17 2018 13:20:16 GMT+0300 (EEST)] INFO Percentage of the requests served within a certain time
[Thu May 17 2018 13:20:16 GMT+0300 (EEST)] INFO   50%      33 ms
[Thu May 17 2018 13:20:16 GMT+0300 (EEST)] INFO   90%      44 ms
[Thu May 17 2018 13:20:16 GMT+0300 (EEST)] INFO   95%      52 ms
[Thu May 17 2018 13:20:16 GMT+0300 (EEST)] INFO   99%      81 ms
[Thu May 17 2018 13:20:16 GMT+0300 (EEST)] INFO  100%      87 ms (longest request)
```

## AFTER f181dbd f3f38d8 cb71ae8

```
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ loadtest -n 5000 -c 80 http://localhost:3000
[Thu May 17 2018 13:21:24 GMT+0300 (EEST)] INFO Requests: 0 (0%), requests per second: 0, mean latency: 0 ms
[Thu May 17 2018 13:21:26 GMT+0300 (EEST)] INFO 
[Thu May 17 2018 13:21:26 GMT+0300 (EEST)] INFO Target URL:          http://localhost:3000
[Thu May 17 2018 13:21:26 GMT+0300 (EEST)] INFO Max requests:        5000
[Thu May 17 2018 13:21:26 GMT+0300 (EEST)] INFO Concurrency level:   80
[Thu May 17 2018 13:21:26 GMT+0300 (EEST)] INFO Agent:               none
[Thu May 17 2018 13:21:26 GMT+0300 (EEST)] INFO 
[Thu May 17 2018 13:21:26 GMT+0300 (EEST)] INFO Completed requests:  5000
[Thu May 17 2018 13:21:26 GMT+0300 (EEST)] INFO Total errors:        0
[Thu May 17 2018 13:21:26 GMT+0300 (EEST)] INFO Total time:          1.9533794640000002 s
[Thu May 17 2018 13:21:26 GMT+0300 (EEST)] INFO Requests per second: 2560
[Thu May 17 2018 13:21:26 GMT+0300 (EEST)] INFO Mean latency:        30.7 ms
[Thu May 17 2018 13:21:26 GMT+0300 (EEST)] INFO 
[Thu May 17 2018 13:21:26 GMT+0300 (EEST)] INFO Percentage of the requests served within a certain time
[Thu May 17 2018 13:21:26 GMT+0300 (EEST)] INFO   50%      29 ms
[Thu May 17 2018 13:21:26 GMT+0300 (EEST)] INFO   90%      34 ms
[Thu May 17 2018 13:21:26 GMT+0300 (EEST)] INFO   95%      40 ms
[Thu May 17 2018 13:21:26 GMT+0300 (EEST)] INFO   99%      76 ms
[Thu May 17 2018 13:21:26 GMT+0300 (EEST)] INFO  100%      83 ms (longest request)
```

```
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ loadtest -n 5000 -c 80 http://localhost:3000
[Thu May 17 2018 13:21:42 GMT+0300 (EEST)] INFO Requests: 0 (0%), requests per second: 0, mean latency: 0 ms
[Thu May 17 2018 13:21:44 GMT+0300 (EEST)] INFO 
[Thu May 17 2018 13:21:44 GMT+0300 (EEST)] INFO Target URL:          http://localhost:3000
[Thu May 17 2018 13:21:44 GMT+0300 (EEST)] INFO Max requests:        5000
[Thu May 17 2018 13:21:44 GMT+0300 (EEST)] INFO Concurrency level:   80
[Thu May 17 2018 13:21:44 GMT+0300 (EEST)] INFO Agent:               none
[Thu May 17 2018 13:21:44 GMT+0300 (EEST)] INFO 
[Thu May 17 2018 13:21:44 GMT+0300 (EEST)] INFO Completed requests:  5000
[Thu May 17 2018 13:21:44 GMT+0300 (EEST)] INFO Total errors:        0
[Thu May 17 2018 13:21:44 GMT+0300 (EEST)] INFO Total time:          1.942082161 s
[Thu May 17 2018 13:21:44 GMT+0300 (EEST)] INFO Requests per second: 2575
[Thu May 17 2018 13:21:44 GMT+0300 (EEST)] INFO Mean latency:        30.6 ms
[Thu May 17 2018 13:21:44 GMT+0300 (EEST)] INFO 
[Thu May 17 2018 13:21:44 GMT+0300 (EEST)] INFO Percentage of the requests served within a certain time
[Thu May 17 2018 13:21:44 GMT+0300 (EEST)] INFO   50%      29 ms
[Thu May 17 2018 13:21:44 GMT+0300 (EEST)] INFO   90%      34 ms
[Thu May 17 2018 13:21:44 GMT+0300 (EEST)] INFO   95%      41 ms
[Thu May 17 2018 13:21:44 GMT+0300 (EEST)] INFO   99%      66 ms
[Thu May 17 2018 13:21:44 GMT+0300 (EEST)] INFO  100%      71 ms (longest request)
```

```
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ loadtest -n 5000 -c 80 http://localhost:3000
[Thu May 17 2018 13:22:07 GMT+0300 (EEST)] INFO Requests: 0 (0%), requests per second: 0, mean latency: 0 ms
[Thu May 17 2018 13:22:09 GMT+0300 (EEST)] INFO 
[Thu May 17 2018 13:22:09 GMT+0300 (EEST)] INFO Target URL:          http://localhost:3000
[Thu May 17 2018 13:22:09 GMT+0300 (EEST)] INFO Max requests:        5000
[Thu May 17 2018 13:22:09 GMT+0300 (EEST)] INFO Concurrency level:   80
[Thu May 17 2018 13:22:09 GMT+0300 (EEST)] INFO Agent:               none
[Thu May 17 2018 13:22:09 GMT+0300 (EEST)] INFO 
[Thu May 17 2018 13:22:09 GMT+0300 (EEST)] INFO Completed requests:  5000
[Thu May 17 2018 13:22:09 GMT+0300 (EEST)] INFO Total errors:        0
[Thu May 17 2018 13:22:09 GMT+0300 (EEST)] INFO Total time:          2.1558521820000003 s
[Thu May 17 2018 13:22:09 GMT+0300 (EEST)] INFO Requests per second: 2319
[Thu May 17 2018 13:22:09 GMT+0300 (EEST)] INFO Mean latency:        34 ms
[Thu May 17 2018 13:22:09 GMT+0300 (EEST)] INFO 
[Thu May 17 2018 13:22:09 GMT+0300 (EEST)] INFO Percentage of the requests served within a certain time
[Thu May 17 2018 13:22:09 GMT+0300 (EEST)] INFO   50%      32 ms
[Thu May 17 2018 13:22:09 GMT+0300 (EEST)] INFO   90%      40 ms
[Thu May 17 2018 13:22:09 GMT+0300 (EEST)] INFO   95%      44 ms
[Thu May 17 2018 13:22:09 GMT+0300 (EEST)] INFO   99%      56 ms
[Thu May 17 2018 13:22:09 GMT+0300 (EEST)] INFO  100%      79 ms (longest request)
```

```
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ loadtest -n 5000 -c 80 http://localhost:3000
[Thu May 17 2018 13:22:20 GMT+0300 (EEST)] INFO Requests: 0 (0%), requests per second: 0, mean latency: 0 ms
[Thu May 17 2018 13:22:22 GMT+0300 (EEST)] INFO 
[Thu May 17 2018 13:22:22 GMT+0300 (EEST)] INFO Target URL:          http://localhost:3000
[Thu May 17 2018 13:22:22 GMT+0300 (EEST)] INFO Max requests:        5000
[Thu May 17 2018 13:22:22 GMT+0300 (EEST)] INFO Concurrency level:   80
[Thu May 17 2018 13:22:22 GMT+0300 (EEST)] INFO Agent:               none
[Thu May 17 2018 13:22:22 GMT+0300 (EEST)] INFO 
[Thu May 17 2018 13:22:22 GMT+0300 (EEST)] INFO Completed requests:  5000
[Thu May 17 2018 13:22:22 GMT+0300 (EEST)] INFO Total errors:        0
[Thu May 17 2018 13:22:22 GMT+0300 (EEST)] INFO Total time:          1.888225899 s
[Thu May 17 2018 13:22:22 GMT+0300 (EEST)] INFO Requests per second: 2648
[Thu May 17 2018 13:22:22 GMT+0300 (EEST)] INFO Mean latency:        29.7 ms
[Thu May 17 2018 13:22:22 GMT+0300 (EEST)] INFO 
[Thu May 17 2018 13:22:22 GMT+0300 (EEST)] INFO Percentage of the requests served within a certain time
[Thu May 17 2018 13:22:22 GMT+0300 (EEST)] INFO   50%      28 ms
[Thu May 17 2018 13:22:22 GMT+0300 (EEST)] INFO   90%      32 ms
[Thu May 17 2018 13:22:22 GMT+0300 (EEST)] INFO   95%      41 ms
[Thu May 17 2018 13:22:22 GMT+0300 (EEST)] INFO   99%      74 ms
[Thu May 17 2018 13:22:22 GMT+0300 (EEST)] INFO  100%      78 ms (longest request)
```

## Started using Apache ab for testing

### No threads
```
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ ab -n 5000 -c 100 -k http://127.0.0.1:3000/
This is ApacheBench, Version 2.3 <$Revision: 1807734 $>
Copyright 1996 Adam Twiss, Zeus Technology Ltd, http://www.zeustech.net/
Licensed to The Apache Software Foundation, http://www.apache.org/

Benchmarking 127.0.0.1 (be patient)
Completed 500 requests
Completed 1000 requests
Completed 1500 requests
Completed 2000 requests
Completed 2500 requests
Completed 3000 requests
Completed 3500 requests
Completed 4000 requests
Completed 4500 requests
Completed 5000 requests
Finished 5000 requests


Server Software:        
Server Hostname:        127.0.0.1
Server Port:            3000

Document Path:          /
Document Length:        503 bytes

Concurrency Level:      100
Time taken for tests:   1.038 seconds
Complete requests:      5000
Failed requests:        0
Keep-Alive requests:    0
Total transferred:      2820000 bytes
HTML transferred:       2515000 bytes
Requests per second:    4817.97 [#/sec] (mean)
Time per request:       20.756 [ms] (mean)
Time per request:       0.208 [ms] (mean, across all concurrent requests)
Transfer rate:          2653.65 [Kbytes/sec] received

Connection Times (ms)
              min  mean[+/-sd] median   max
Connect:        0    0   1.0      0      64
Processing:     2   20   7.7     20      79
Waiting:        1   20   7.6     19      79
Total:          5   21   7.6     20      79

Percentage of the requests served within a certain time (ms)
  50%     20
  66%     20
  75%     20
  80%     20
  90%     21
  95%     21
  98%     64
  99%     72
 100%     79 (longest request)
```

```
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ ab -n 5000 -c 100 -k http://127.0.0.1:3000/
This is ApacheBench, Version 2.3 <$Revision: 1807734 $>
Copyright 1996 Adam Twiss, Zeus Technology Ltd, http://www.zeustech.net/
Licensed to The Apache Software Foundation, http://www.apache.org/

Benchmarking 127.0.0.1 (be patient)
Completed 500 requests
Completed 1000 requests
Completed 1500 requests
Completed 2000 requests
Completed 2500 requests
Completed 3000 requests
Completed 3500 requests
Completed 4000 requests
Completed 4500 requests
Completed 5000 requests
Finished 5000 requests


Server Software:        
Server Hostname:        127.0.0.1
Server Port:            3000

Document Path:          /
Document Length:        503 bytes

Concurrency Level:      100
Time taken for tests:   1.000 seconds
Complete requests:      5000
Failed requests:        0
Keep-Alive requests:    0
Total transferred:      2820000 bytes
HTML transferred:       2515000 bytes
Requests per second:    4999.89 [#/sec] (mean)
Time per request:       20.000 [ms] (mean)
Time per request:       0.200 [ms] (mean, across all concurrent requests)
Transfer rate:          2753.84 [Kbytes/sec] received

Connection Times (ms)
              min  mean[+/-sd] median   max
Connect:        0    0   0.6      0      20
Processing:     2   20   2.7     20      39
Waiting:        2   19   2.8     19      39
Total:          7   20   2.4     20      39

Percentage of the requests served within a certain time (ms)
  50%     20
  66%     20
  75%     20
  80%     20
  90%     20
  95%     21
  98%     26
  99%     31
 100%     39 (longest request)
```

```
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ ab -n 5000 -c 100 -k http://127.0.0.1:3000/
This is ApacheBench, Version 2.3 <$Revision: 1807734 $>
Copyright 1996 Adam Twiss, Zeus Technology Ltd, http://www.zeustech.net/
Licensed to The Apache Software Foundation, http://www.apache.org/

Benchmarking 127.0.0.1 (be patient)
Completed 500 requests
Completed 1000 requests
Completed 1500 requests
Completed 2000 requests
Completed 2500 requests
Completed 3000 requests
Completed 3500 requests
Completed 4000 requests
Completed 4500 requests
Completed 5000 requests
Finished 5000 requests


Server Software:        
Server Hostname:        127.0.0.1
Server Port:            3000

Document Path:          /
Document Length:        503 bytes

Concurrency Level:      100
Time taken for tests:   1.007 seconds
Complete requests:      5000
Failed requests:        0
Keep-Alive requests:    0
Total transferred:      2820000 bytes
HTML transferred:       2515000 bytes
Requests per second:    4967.17 [#/sec] (mean)
Time per request:       20.132 [ms] (mean)
Time per request:       0.201 [ms] (mean, across all concurrent requests)
Transfer rate:          2735.83 [Kbytes/sec] received

Connection Times (ms)
              min  mean[+/-sd] median   max
Connect:        0    0   0.5      0       4
Processing:     1   20   3.2     20      43
Waiting:        1   19   3.3     19      43
Total:          5   20   2.9     20      43

Percentage of the requests served within a certain time (ms)
  50%     20
  66%     20
  75%     20
  80%     20
  90%     21
  95%     21
  98%     28
  99%     35
 100%     43 (longest request)
```

### 2 threads (main + 1)
```
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ ab -n 5000 -c 100 -k http://127.0.0.1:3000/
This is ApacheBench, Version 2.3 <$Revision: 1807734 $>
Copyright 1996 Adam Twiss, Zeus Technology Ltd, http://www.zeustech.net/
Licensed to The Apache Software Foundation, http://www.apache.org/

Benchmarking 127.0.0.1 (be patient)
Completed 500 requests
Completed 1000 requests
Completed 1500 requests
Completed 2000 requests
Completed 2500 requests
Completed 3000 requests
Completed 3500 requests
Completed 4000 requests
Completed 4500 requests
Completed 5000 requests
Finished 5000 requests


Server Software:        
Server Hostname:        127.0.0.1
Server Port:            3000

Document Path:          /
Document Length:        503 bytes

Concurrency Level:      100
Time taken for tests:   0.566 seconds
Complete requests:      5000
Failed requests:        0
Keep-Alive requests:    0
Total transferred:      2820000 bytes
HTML transferred:       2515000 bytes
Requests per second:    8827.81 [#/sec] (mean)
Time per request:       11.328 [ms] (mean)
Time per request:       0.113 [ms] (mean, across all concurrent requests)
Transfer rate:          4862.19 [Kbytes/sec] received

Connection Times (ms)
              min  mean[+/-sd] median   max
Connect:        0    0   0.3      0       4
Processing:     1   11   0.9     11      13
Waiting:        1   11   1.1     11      13
Total:          5   11   0.7     11      13

Percentage of the requests served within a certain time (ms)
  50%     11
  66%     11
  75%     11
  80%     12
  90%     12
  95%     12
  98%     13
  99%     13
 100%     13 (longest request)
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ ab -n 5000 -c 100 -k http://127.0.0.1:3000/
This is ApacheBench, Version 2.3 <$Revision: 1807734 $>
Copyright 1996 Adam Twiss, Zeus Technology Ltd, http://www.zeustech.net/
Licensed to The Apache Software Foundation, http://www.apache.org/

Benchmarking 127.0.0.1 (be patient)
Completed 500 requests
Completed 1000 requests
Completed 1500 requests
Completed 2000 requests
Completed 2500 requests
Completed 3000 requests
Completed 3500 requests
Completed 4000 requests
Completed 4500 requests
Completed 5000 requests
Finished 5000 requests


Server Software:        
Server Hostname:        127.0.0.1
Server Port:            3000

Document Path:          /
Document Length:        503 bytes

Concurrency Level:      100
Time taken for tests:   0.633 seconds
Complete requests:      5000
Failed requests:        0
Keep-Alive requests:    0
Total transferred:      2820000 bytes
HTML transferred:       2515000 bytes
Requests per second:    7892.76 [#/sec] (mean)
Time per request:       12.670 [ms] (mean)
Time per request:       0.127 [ms] (mean, across all concurrent requests)
Transfer rate:          4347.18 [Kbytes/sec] received

Connection Times (ms)
              min  mean[+/-sd] median   max
Connect:        0    0   1.1      0      64
Processing:     1   12   8.3     11      72
Waiting:        1   12   8.1     11      72
Total:          6   13   8.2     11      73

Percentage of the requests served within a certain time (ms)
  50%     11
  66%     12
  75%     12
  80%     12
  90%     13
  95%     14
  98%     67
  99%     70
 100%     73 (longest request)
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ ab -n 5000 -c 100 -k http://127.0.0.1:3000/
This is ApacheBench, Version 2.3 <$Revision: 1807734 $>
Copyright 1996 Adam Twiss, Zeus Technology Ltd, http://www.zeustech.net/
Licensed to The Apache Software Foundation, http://www.apache.org/

Benchmarking 127.0.0.1 (be patient)
Completed 500 requests
Completed 1000 requests
Completed 1500 requests
Completed 2000 requests
Completed 2500 requests
Completed 3000 requests
Completed 3500 requests
Completed 4000 requests
Completed 4500 requests
Completed 5000 requests
Finished 5000 requests


Server Software:        
Server Hostname:        127.0.0.1
Server Port:            3000

Document Path:          /
Document Length:        503 bytes

Concurrency Level:      100
Time taken for tests:   0.583 seconds
Complete requests:      5000
Failed requests:        0
Keep-Alive requests:    0
Total transferred:      2820000 bytes
HTML transferred:       2515000 bytes
Requests per second:    8574.70 [#/sec] (mean)
Time per request:       11.662 [ms] (mean)
Time per request:       0.117 [ms] (mean, across all concurrent requests)
Transfer rate:          4722.78 [Kbytes/sec] received

Connection Times (ms)
              min  mean[+/-sd] median   max
Connect:        0    0   0.5      0       5
Processing:     1   11   1.3     11      15
Waiting:        1   11   1.3     11      15
Total:          6   11   1.0     11      15

Percentage of the requests served within a certain time (ms)
  50%     11
  66%     12
  75%     12
  80%     12
  90%     13
  95%     14
  98%     14
  99%     14
 100%     15 (longest request)
```

### 3 threads (main + 2)
```
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ ab -n 5000 -c 100 -k http://127.0.0.1:3000/
This is ApacheBench, Version 2.3 <$Revision: 1807734 $>
Copyright 1996 Adam Twiss, Zeus Technology Ltd, http://www.zeustech.net/
Licensed to The Apache Software Foundation, http://www.apache.org/

Benchmarking 127.0.0.1 (be patient)
Completed 500 requests
Completed 1000 requests
Completed 1500 requests
Completed 2000 requests
Completed 2500 requests
Completed 3000 requests
Completed 3500 requests
Completed 4000 requests
Completed 4500 requests
Completed 5000 requests
Finished 5000 requests


Server Software:        
Server Hostname:        127.0.0.1
Server Port:            3000

Document Path:          /
Document Length:        503 bytes

Concurrency Level:      100
Time taken for tests:   0.568 seconds
Complete requests:      5000
Failed requests:        0
Keep-Alive requests:    0
Total transferred:      2820000 bytes
HTML transferred:       2515000 bytes
Requests per second:    8801.02 [#/sec] (mean)
Time per request:       11.362 [ms] (mean)
Time per request:       0.114 [ms] (mean, across all concurrent requests)
Transfer rate:          4847.44 [Kbytes/sec] received

Connection Times (ms)
              min  mean[+/-sd] median   max
Connect:        0    0   1.6      0     109
Processing:     1   11  14.4      9     114
Waiting:        1   11  14.2      9     114
Total:          5   11  14.4      9     114

Percentage of the requests served within a certain time (ms)
  50%      9
  66%      9
  75%     10
  80%     10
  90%     10
  95%     10
  98%     13
  99%    112
 100%    114 (longest request)
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ ab -n 5000 -c 100 -k http://127.0.0.1:3000/
This is ApacheBench, Version 2.3 <$Revision: 1807734 $>
Copyright 1996 Adam Twiss, Zeus Technology Ltd, http://www.zeustech.net/
Licensed to The Apache Software Foundation, http://www.apache.org/

Benchmarking 127.0.0.1 (be patient)
Completed 500 requests
Completed 1000 requests
Completed 1500 requests
Completed 2000 requests
Completed 2500 requests
Completed 3000 requests
Completed 3500 requests
Completed 4000 requests
Completed 4500 requests
Completed 5000 requests
Finished 5000 requests


Server Software:        
Server Hostname:        127.0.0.1
Server Port:            3000

Document Path:          /
Document Length:        503 bytes

Concurrency Level:      100
Time taken for tests:   0.534 seconds
Complete requests:      5000
Failed requests:        0
Keep-Alive requests:    0
Total transferred:      2820000 bytes
HTML transferred:       2515000 bytes
Requests per second:    9368.98 [#/sec] (mean)
Time per request:       10.674 [ms] (mean)
Time per request:       0.107 [ms] (mean, across all concurrent requests)
Transfer rate:          5160.26 [Kbytes/sec] received

Connection Times (ms)
              min  mean[+/-sd] median   max
Connect:        0    0   1.1      0      71
Processing:     1   10   9.4      9      78
Waiting:        1   10   9.2      9      77
Total:          5   11   9.3      9      78

Percentage of the requests served within a certain time (ms)
  50%      9
  66%      9
  75%     10
  80%     10
  90%     10
  95%     11
  98%     73
  99%     76
 100%     78 (longest request)
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ ab -n 5000 -c 100 -k http://127.0.0.1:3000/
This is ApacheBench, Version 2.3 <$Revision: 1807734 $>
Copyright 1996 Adam Twiss, Zeus Technology Ltd, http://www.zeustech.net/
Licensed to The Apache Software Foundation, http://www.apache.org/

Benchmarking 127.0.0.1 (be patient)
Completed 500 requests
Completed 1000 requests
Completed 1500 requests
Completed 2000 requests
Completed 2500 requests
Completed 3000 requests
Completed 3500 requests
Completed 4000 requests
Completed 4500 requests
Completed 5000 requests
Finished 5000 requests


Server Software:        
Server Hostname:        127.0.0.1
Server Port:            3000

Document Path:          /
Document Length:        503 bytes

Concurrency Level:      100
Time taken for tests:   0.563 seconds
Complete requests:      5000
Failed requests:        0
Keep-Alive requests:    0
Total transferred:      2820000 bytes
HTML transferred:       2515000 bytes
Requests per second:    8876.86 [#/sec] (mean)
Time per request:       11.265 [ms] (mean)
Time per request:       0.113 [ms] (mean, across all concurrent requests)
Transfer rate:          4889.21 [Kbytes/sec] received

Connection Times (ms)
              min  mean[+/-sd] median   max
Connect:        0    0   1.6      0     106
Processing:     1   11  13.9      9     112
Waiting:        1   11  13.8      9     111
Total:          5   11  14.0      9     112

Percentage of the requests served within a certain time (ms)
  50%      9
  66%      9
  75%      9
  80%     10
  90%     10
  95%     10
  98%     11
  99%    109
 100%    112 (longest request)
```

### 4 threads (main + 3)
```
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ ab -n 5000 -c 100 -k http://127.0.0.1:3000/
This is ApacheBench, Version 2.3 <$Revision: 1807734 $>
Copyright 1996 Adam Twiss, Zeus Technology Ltd, http://www.zeustech.net/
Licensed to The Apache Software Foundation, http://www.apache.org/

Benchmarking 127.0.0.1 (be patient)
Completed 500 requests
Completed 1000 requests
Completed 1500 requests
Completed 2000 requests
Completed 2500 requests
Completed 3000 requests
Completed 3500 requests
Completed 4000 requests
Completed 4500 requests
Completed 5000 requests
Finished 5000 requests


Server Software:        
Server Hostname:        127.0.0.1
Server Port:            3000

Document Path:          /
Document Length:        503 bytes

Concurrency Level:      100
Time taken for tests:   0.416 seconds
Complete requests:      5000
Failed requests:        0
Keep-Alive requests:    0
Total transferred:      2820000 bytes
HTML transferred:       2515000 bytes
Requests per second:    12025.85 [#/sec] (mean)
Time per request:       8.315 [ms] (mean)
Time per request:       0.083 [ms] (mean, across all concurrent requests)
Transfer rate:          6623.61 [Kbytes/sec] received

Connection Times (ms)
              min  mean[+/-sd] median   max
Connect:        0    2   0.7      2       4
Processing:     2    6   1.0      6      11
Waiting:        2    6   1.1      6      11
Total:          6    8   0.7      8      13

Percentage of the requests served within a certain time (ms)
  50%      8
  66%      8
  75%      8
  80%      9
  90%      9
  95%      9
  98%     10
  99%     11
 100%     13 (longest request)
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ ab -n 5000 -c 100 -k http://127.0.0.1:3000/
This is ApacheBench, Version 2.3 <$Revision: 1807734 $>
Copyright 1996 Adam Twiss, Zeus Technology Ltd, http://www.zeustech.net/
Licensed to The Apache Software Foundation, http://www.apache.org/

Benchmarking 127.0.0.1 (be patient)
Completed 500 requests
Completed 1000 requests
Completed 1500 requests
Completed 2000 requests
Completed 2500 requests
Completed 3000 requests
Completed 3500 requests
Completed 4000 requests
Completed 4500 requests
Completed 5000 requests
Finished 5000 requests


Server Software:        
Server Hostname:        127.0.0.1
Server Port:            3000

Document Path:          /
Document Length:        503 bytes

Concurrency Level:      100
Time taken for tests:   0.402 seconds
Complete requests:      5000
Failed requests:        0
Keep-Alive requests:    0
Total transferred:      2820000 bytes
HTML transferred:       2515000 bytes
Requests per second:    12424.09 [#/sec] (mean)
Time per request:       8.049 [ms] (mean)
Time per request:       0.080 [ms] (mean, across all concurrent requests)
Transfer rate:          6842.96 [Kbytes/sec] received

Connection Times (ms)
              min  mean[+/-sd] median   max
Connect:        0    2   0.9      1       5
Processing:     2    6   1.4      6      11
Waiting:        2    6   1.5      6      10
Total:          6    8   1.0      8      12
WARNING: The median and mean for the initial connection time are not within a normal deviation
        These results are probably not that reliable.

Percentage of the requests served within a certain time (ms)
  50%      8
  66%      8
  75%      8
  80%      9
  90%      9
  95%     10
  98%     11
  99%     11
 100%     12 (longest request)
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ ab -n 5000 -c 100 -k http://127.0.0.1:3000/
This is ApacheBench, Version 2.3 <$Revision: 1807734 $>
Copyright 1996 Adam Twiss, Zeus Technology Ltd, http://www.zeustech.net/
Licensed to The Apache Software Foundation, http://www.apache.org/

Benchmarking 127.0.0.1 (be patient)
Completed 500 requests
Completed 1000 requests
Completed 1500 requests
Completed 2000 requests
Completed 2500 requests
Completed 3000 requests
Completed 3500 requests
Completed 4000 requests
Completed 4500 requests
Completed 5000 requests
Finished 5000 requests


Server Software:        
Server Hostname:        127.0.0.1
Server Port:            3000

Document Path:          /
Document Length:        503 bytes

Concurrency Level:      100
Time taken for tests:   0.439 seconds
Complete requests:      5000
Failed requests:        0
Keep-Alive requests:    0
Total transferred:      2820000 bytes
HTML transferred:       2515000 bytes
Requests per second:    11390.51 [#/sec] (mean)
Time per request:       8.779 [ms] (mean)
Time per request:       0.088 [ms] (mean, across all concurrent requests)
Transfer rate:          6273.68 [Kbytes/sec] received

Connection Times (ms)
              min  mean[+/-sd] median   max
Connect:        0    2   3.2      1      38
Processing:     1    7   3.7      7      40
Waiting:        1    7   3.7      6      40
Total:          6    9   4.7      8      42

Percentage of the requests served within a certain time (ms)
  50%      8
  66%      8
  75%      8
  80%      9
  90%      9
  95%     10
  98%     12
  99%     41
 100%     42 (longest request)
```

### 6 threads (main + 5)
```
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ ab -n 5000 -c 100 -k http://127.0.0.1:3000/
This is ApacheBench, Version 2.3 <$Revision: 1807734 $>
Copyright 1996 Adam Twiss, Zeus Technology Ltd, http://www.zeustech.net/
Licensed to The Apache Software Foundation, http://www.apache.org/

Benchmarking 127.0.0.1 (be patient)
Completed 500 requests
Completed 1000 requests
Completed 1500 requests
Completed 2000 requests
Completed 2500 requests
Completed 3000 requests
Completed 3500 requests
Completed 4000 requests
Completed 4500 requests
Completed 5000 requests
Finished 5000 requests


Server Software:        
Server Hostname:        127.0.0.1
Server Port:            3000

Document Path:          /
Document Length:        503 bytes

Concurrency Level:      100
Time taken for tests:   0.619 seconds
Complete requests:      5000
Failed requests:        0
Keep-Alive requests:    0
Total transferred:      2820000 bytes
HTML transferred:       2515000 bytes
Requests per second:    8077.74 [#/sec] (mean)
Time per request:       12.380 [ms] (mean)
Time per request:       0.124 [ms] (mean, across all concurrent requests)
Transfer rate:          4449.07 [Kbytes/sec] received

Connection Times (ms)
              min  mean[+/-sd] median   max
Connect:        0    1   1.1      0      17
Processing:     2   12   3.2     12      23
Waiting:        1   11   3.2     12      22
Total:          6   12   2.9     13      25

Percentage of the requests served within a certain time (ms)
  50%     13
  66%     14
  75%     14
  80%     14
  90%     15
  95%     16
  98%     17
  99%     23
 100%     25 (longest request)
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ ab -n 5000 -c 100 -k http://127.0.0.1:3000/
This is ApacheBench, Version 2.3 <$Revision: 1807734 $>
Copyright 1996 Adam Twiss, Zeus Technology Ltd, http://www.zeustech.net/
Licensed to The Apache Software Foundation, http://www.apache.org/

Benchmarking 127.0.0.1 (be patient)
Completed 500 requests
Completed 1000 requests
Completed 1500 requests
Completed 2000 requests
Completed 2500 requests
Completed 3000 requests
Completed 3500 requests
Completed 4000 requests
Completed 4500 requests
Completed 5000 requests
Finished 5000 requests


Server Software:        
Server Hostname:        127.0.0.1
Server Port:            3000

Document Path:          /
Document Length:        503 bytes

Concurrency Level:      100
Time taken for tests:   0.439 seconds
Complete requests:      5000
Failed requests:        0
Keep-Alive requests:    0
Total transferred:      2820000 bytes
HTML transferred:       2515000 bytes
Requests per second:    11396.61 [#/sec] (mean)
Time per request:       8.775 [ms] (mean)
Time per request:       0.088 [ms] (mean, across all concurrent requests)
Transfer rate:          6277.04 [Kbytes/sec] received

Connection Times (ms)
              min  mean[+/-sd] median   max
Connect:        0    1   0.6      1       4
Processing:     1    8   1.1      8      11
Waiting:        1    7   1.2      7      11
Total:          5    9   0.9      8      12
WARNING: The median and mean for the total time are not within a normal deviation
        These results are probably not that reliable.

Percentage of the requests served within a certain time (ms)
  50%      8
  66%      9
  75%      9
  80%      9
  90%     10
  95%     11
  98%     11
  99%     11
 100%     12 (longest request)
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ ab -n 5000 -c 100 -k http://127.0.0.1:3000/
This is ApacheBench, Version 2.3 <$Revision: 1807734 $>
Copyright 1996 Adam Twiss, Zeus Technology Ltd, http://www.zeustech.net/
Licensed to The Apache Software Foundation, http://www.apache.org/

Benchmarking 127.0.0.1 (be patient)
Completed 500 requests
Completed 1000 requests
Completed 1500 requests
Completed 2000 requests
Completed 2500 requests
Completed 3000 requests
Completed 3500 requests
Completed 4000 requests
Completed 4500 requests
Completed 5000 requests
Finished 5000 requests


Server Software:        
Server Hostname:        127.0.0.1
Server Port:            3000

Document Path:          /
Document Length:        503 bytes

Concurrency Level:      100
Time taken for tests:   0.509 seconds
Complete requests:      5000
Failed requests:        0
Keep-Alive requests:    0
Total transferred:      2820000 bytes
HTML transferred:       2515000 bytes
Requests per second:    9831.62 [#/sec] (mean)
Time per request:       10.171 [ms] (mean)
Time per request:       0.102 [ms] (mean, across all concurrent requests)
Transfer rate:          5415.07 [Kbytes/sec] received

Connection Times (ms)
              min  mean[+/-sd] median   max
Connect:        0    1   1.3      1      57
Processing:     2    9   7.6      7      65
Waiting:        2    8   7.6      7      65
Total:          6   10   7.4      9      65

Percentage of the requests served within a certain time (ms)
  50%      9
  66%      9
  75%     10
  80%     10
  90%     11
  95%     12
  98%     13
  99%     61
 100%     65 (longest request)
```

### 8 threads (main + 7)
```
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ ab -n 5000 -c 100 -k http://127.0.0.1:3000/
This is ApacheBench, Version 2.3 <$Revision: 1807734 $>
Copyright 1996 Adam Twiss, Zeus Technology Ltd, http://www.zeustech.net/
Licensed to The Apache Software Foundation, http://www.apache.org/

Benchmarking 127.0.0.1 (be patient)
Completed 500 requests
Completed 1000 requests
Completed 1500 requests
Completed 2000 requests
Completed 2500 requests
Completed 3000 requests
Completed 3500 requests
Completed 4000 requests
Completed 4500 requests
Completed 5000 requests
Finished 5000 requests


Server Software:        
Server Hostname:        127.0.0.1
Server Port:            3000

Document Path:          /
Document Length:        503 bytes

Concurrency Level:      100
Time taken for tests:   0.737 seconds
Complete requests:      5000
Failed requests:        0
Keep-Alive requests:    0
Total transferred:      2820000 bytes
HTML transferred:       2515000 bytes
Requests per second:    6785.70 [#/sec] (mean)
Time per request:       14.737 [ms] (mean)
Time per request:       0.147 [ms] (mean, across all concurrent requests)
Transfer rate:          3737.43 [Kbytes/sec] received

Connection Times (ms)
              min  mean[+/-sd] median   max
Connect:        0    0   0.6      0       6
Processing:     2   14   4.6     14      48
Waiting:        1   14   4.5     14      47
Total:          7   15   4.4     14      48

Percentage of the requests served within a certain time (ms)
  50%     14
  66%     14
  75%     14
  80%     15
  90%     15
  95%     16
  98%     39
  99%     44
 100%     48 (longest request)
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ ab -n 5000 -c 100 -k http://127.0.0.1:3000/
This is ApacheBench, Version 2.3 <$Revision: 1807734 $>
Copyright 1996 Adam Twiss, Zeus Technology Ltd, http://www.zeustech.net/
Licensed to The Apache Software Foundation, http://www.apache.org/

Benchmarking 127.0.0.1 (be patient)
Completed 500 requests
Completed 1000 requests
Completed 1500 requests
Completed 2000 requests
Completed 2500 requests
Completed 3000 requests
Completed 3500 requests
Completed 4000 requests
Completed 4500 requests
Completed 5000 requests
Finished 5000 requests


Server Software:        
Server Hostname:        127.0.0.1
Server Port:            3000

Document Path:          /
Document Length:        503 bytes

Concurrency Level:      100
Time taken for tests:   0.705 seconds
Complete requests:      5000
Failed requests:        0
Keep-Alive requests:    0
Total transferred:      2820000 bytes
HTML transferred:       2515000 bytes
Requests per second:    7094.25 [#/sec] (mean)
Time per request:       14.096 [ms] (mean)
Time per request:       0.141 [ms] (mean, across all concurrent requests)
Transfer rate:          3907.38 [Kbytes/sec] received

Connection Times (ms)
              min  mean[+/-sd] median   max
Connect:        0    0   1.0      0       6
Processing:     2   13   3.1     14      35
Waiting:        1   13   3.1     13      35
Total:          5   14   2.6     14      35

Percentage of the requests served within a certain time (ms)
  50%     14
  66%     14
  75%     14
  80%     14
  90%     14
  95%     15
  98%     25
  99%     30
 100%     35 (longest request)
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ ab -n 5000 -c 100 -k http://127.0.0.1:3000/
This is ApacheBench, Version 2.3 <$Revision: 1807734 $>
Copyright 1996 Adam Twiss, Zeus Technology Ltd, http://www.zeustech.net/
Licensed to The Apache Software Foundation, http://www.apache.org/

Benchmarking 127.0.0.1 (be patient)
Completed 500 requests
Completed 1000 requests
Completed 1500 requests
Completed 2000 requests
Completed 2500 requests
Completed 3000 requests
Completed 3500 requests
Completed 4000 requests
Completed 4500 requests
Completed 5000 requests
Finished 5000 requests


Server Software:        
Server Hostname:        127.0.0.1
Server Port:            3000

Document Path:          /
Document Length:        503 bytes

Concurrency Level:      100
Time taken for tests:   0.698 seconds
Complete requests:      5000
Failed requests:        0
Keep-Alive requests:    0
Total transferred:      2820000 bytes
HTML transferred:       2515000 bytes
Requests per second:    7161.57 [#/sec] (mean)
Time per request:       13.963 [ms] (mean)
Time per request:       0.140 [ms] (mean, across all concurrent requests)
Transfer rate:          3944.46 [Kbytes/sec] received

Connection Times (ms)
              min  mean[+/-sd] median   max
Connect:        0    0   0.6      0       5
Processing:     2   14   1.1     14      16
Waiting:        2   13   1.2     14      15
Total:          7   14   0.7     14      18

Percentage of the requests served within a certain time (ms)
  50%     14
  66%     14
  75%     14
  80%     14
  90%     14
  95%     15
  98%     15
  99%     15
 100%     18 (longest request)
```

### 40 threads (main + 39)
```
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ ab -n 5000 -c 100 -k http://127.0.0.1:3000/
This is ApacheBench, Version 2.3 <$Revision: 1807734 $>
Copyright 1996 Adam Twiss, Zeus Technology Ltd, http://www.zeustech.net/
Licensed to The Apache Software Foundation, http://www.apache.org/

Benchmarking 127.0.0.1 (be patient)
Completed 500 requests
Completed 1000 requests
Completed 1500 requests
Completed 2000 requests
Completed 2500 requests
Completed 3000 requests
Completed 3500 requests
Completed 4000 requests
Completed 4500 requests
Completed 5000 requests
Finished 5000 requests


Server Software:        
Server Hostname:        127.0.0.1
Server Port:            3000

Document Path:          /
Document Length:        503 bytes

Concurrency Level:      100
Time taken for tests:   1.055 seconds
Complete requests:      5000
Failed requests:        0
Keep-Alive requests:    0
Total transferred:      2820000 bytes
HTML transferred:       2515000 bytes
Requests per second:    4738.18 [#/sec] (mean)
Time per request:       21.105 [ms] (mean)
Time per request:       0.211 [ms] (mean, across all concurrent requests)
Transfer rate:          2609.70 [Kbytes/sec] received

Connection Times (ms)
              min  mean[+/-sd] median   max
Connect:        0    0   0.6      0       5
Processing:     2   21   3.7     21      43
Waiting:        1   20   3.8     21      43
Total:          6   21   3.3     21      43

Percentage of the requests served within a certain time (ms)
  50%     21
  66%     21
  75%     21
  80%     22
  90%     22
  95%     23
  98%     28
  99%     36
 100%     43 (longest request)
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ ab -n 5000 -c 100 -k http://127.0.0.1:3000/
This is ApacheBench, Version 2.3 <$Revision: 1807734 $>
Copyright 1996 Adam Twiss, Zeus Technology Ltd, http://www.zeustech.net/
Licensed to The Apache Software Foundation, http://www.apache.org/

Benchmarking 127.0.0.1 (be patient)
Completed 500 requests
Completed 1000 requests
Completed 1500 requests
Completed 2000 requests
Completed 2500 requests
Completed 3000 requests
Completed 3500 requests
Completed 4000 requests
Completed 4500 requests
Completed 5000 requests
Finished 5000 requests


Server Software:        
Server Hostname:        127.0.0.1
Server Port:            3000

Document Path:          /
Document Length:        503 bytes

Concurrency Level:      100
Time taken for tests:   1.182 seconds
Complete requests:      5000
Failed requests:        0
Keep-Alive requests:    0
Total transferred:      2820000 bytes
HTML transferred:       2515000 bytes
Requests per second:    4231.63 [#/sec] (mean)
Time per request:       23.632 [ms] (mean)
Time per request:       0.236 [ms] (mean, across all concurrent requests)
Transfer rate:          2330.70 [Kbytes/sec] received

Connection Times (ms)
              min  mean[+/-sd] median   max
Connect:        0    0   2.4      0     160
Processing:     2   23  21.3     21     178
Waiting:        1   23  21.2     21     178
Total:          6   23  21.3     21     178

Percentage of the requests served within a certain time (ms)
  50%     21
  66%     21
  75%     21
  80%     21
  90%     22
  95%     22
  98%    163
  99%    172
 100%    178 (longest request)
Tarass-MacBook-Pro-3:simpe_server_cpp madtaras$ ab -n 5000 -c 100 -k http://127.0.0.1:3000/
This is ApacheBench, Version 2.3 <$Revision: 1807734 $>
Copyright 1996 Adam Twiss, Zeus Technology Ltd, http://www.zeustech.net/
Licensed to The Apache Software Foundation, http://www.apache.org/

Benchmarking 127.0.0.1 (be patient)
Completed 500 requests
Completed 1000 requests
Completed 1500 requests
Completed 2000 requests
Completed 2500 requests
Completed 3000 requests
Completed 3500 requests
Completed 4000 requests
Completed 4500 requests
Completed 5000 requests
Finished 5000 requests


Server Software:        
Server Hostname:        127.0.0.1
Server Port:            3000

Document Path:          /
Document Length:        503 bytes

Concurrency Level:      100
Time taken for tests:   1.179 seconds
Complete requests:      5000
Failed requests:        0
Keep-Alive requests:    0
Total transferred:      2820000 bytes
HTML transferred:       2515000 bytes
Requests per second:    4241.77 [#/sec] (mean)
Time per request:       23.575 [ms] (mean)
Time per request:       0.236 [ms] (mean, across all concurrent requests)
Transfer rate:          2336.29 [Kbytes/sec] received

Connection Times (ms)
              min  mean[+/-sd] median   max
Connect:        0    0   2.2      0     153
Processing:     2   23  19.9     21     170
Waiting:        2   23  19.7     21     170
Total:          6   23  19.9     21     170

Percentage of the requests served within a certain time (ms)
  50%     21
  66%     21
  75%     21
  80%     22
  90%     22
  95%     22
  98%    154
  99%    162
 100%    170 (longest request)
```

### Macbook Air 2014, 4gb RAM
#### 4 threads (main + 3) 
##### Requests per second:  5826.35 (mean)

```
This is ApacheBench, Version 2.3 <$Revision: 1807734 $>
Copyright 1996 Adam Twiss, Zeus Technology Ltd, http://www.zeustech.net/
Licensed to The Apache Software Foundation, http://www.apache.org/

Benchmarking 127.0.0.1 (be patient)
Completed 500 requests
Completed 1000 requests
Completed 1500 requests
Completed 2000 requests
Completed 2500 requests
Completed 3000 requests
Completed 3500 requests
Completed 4000 requests
Completed 4500 requests
Completed 5000 requests
Finished 5000 requests


Server Software:        
Server Hostname:        127.0.0.1
Server Port:            3000

Document Path:          /
Document Length:        503 bytes

Concurrency Level:      100
Time taken for tests:   0.858 seconds
Complete requests:      5000
Failed requests:        0
Keep-Alive requests:    0
Total transferred:      2820000 bytes
HTML transferred:       2515000 bytes
Requests per second:    5826.35 [#/sec] (mean)
Time per request:       17.163 [ms] (mean)
Time per request:       0.172 [ms] (mean, across all concurrent requests)
Transfer rate:          3209.05 [Kbytes/sec] received

Connection Times (ms)
              min  mean[+/-sd] median   max
Connect:        0    5   2.7      5      14
Processing:     3   11   3.1     11      24
Waiting:        2    9   3.1      9      22
Total:          9   17   3.1     16      28

Percentage of the requests served within a certain time (ms)
  50%     16
  66%     18
  75%     19
  80%     20
  90%     22
  95%     22
  98%     24
  99%     24
 100%     28 (longest request)
```
