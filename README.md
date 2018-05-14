# Simple Server cpp

## For testing
Requires node.js and npm installed

1. `npm i -g loadtest`  
2. `loadtest -n 5000 -c 80 http://localhost:3000`

Can send 2500 requests per second from my MacBook Pro

## Results

### When using response text hardcoded
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

### When reading data from filesystem
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

### After all `cout`s removed
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