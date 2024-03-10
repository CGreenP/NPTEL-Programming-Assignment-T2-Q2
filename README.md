# NPTEL-Programming-Assignment-T2-Q2
NPTEL Programming Assignment: T2-Q2

# T2-Q2
You are given a positive integer N <= 1000. 

You have to see whether N is the tenth number in some series obtained by selecting N[1] and N[2] to be some positive integer, where N[1] <= N[2], and then using the following relation to compute N[3], N[4], ... N[10]:

N[k]=N[k-1]+N[k-2], where 3 <= K <= 10.

If there is such a series, then you must output N[1] and N[2] with a space in between.

If there is no such series, output -1 -1.

# Sample input 1
```sh
199
```

# Sample output 1
```sh
3 4
```

# Sample input 2
```sh
5
```

# Sample output 2
```sh
-1 -1
```

# Sample input 3
```sh
52
```

# Sample output 3
```sh
-1 -1
```

# Sample input 4
```sh
550
```

# Sample output 4
```sh
10 10
```
