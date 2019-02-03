# Lab-2

## Problem 1

In this problem, you need to print the pattern of the following form containing the numbers from 1 to n:
```
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
```
Example when n=4.

INPUT
Input contains a single integer n.

CONSTRAINTS
* 1 <= n <= 1000

OUTPUT
Print the pattern mentioned in the problem statement.

EXAMPLES:

INPUT:
```
2
```

OUTPUT:
```
2 2 2
2 1 2
2 2 2
```

INPUT:
```
5
```

OUTPUT:
```
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5
```

INPUT:
7

OUTPUT:
```
7 7 7 7 7 7 7 7 7 7 7 7 7
7 6 6 6 6 6 6 6 6 6 6 6 7
7 6 5 5 5 5 5 5 5 5 5 6 7
7 6 5 4 4 4 4 4 4 4 5 6 7
7 6 5 4 3 3 3 3 3 4 5 6 7
7 6 5 4 3 2 2 2 3 4 5 6 7
7 6 5 4 3 2 1 2 3 4 5 6 7
7 6 5 4 3 2 2 2 3 4 5 6 7
7 6 5 4 3 3 3 3 3 4 5 6 7
7 6 5 4 4 4 4 4 4 4 5 6 7
7 6 5 5 5 5 5 5 5 5 5 6 7
7 6 6 6 6 6 6 6 6 6 6 6 7
7 7 7 7 7 7 7 7 7 7 7 7 7
```


## Problem 2
Write a recursive function that finds the n-th integer of the Fibonacci sequence. Then build a minimal program to test it. For reference see [Fibonacci number](https://en.wikipedia.org/wiki/Fibonacci_number).  To check for recursion, please have the Fibonacci function print out its input as shown in the examples below:

INPUT:
```
5
```

OUTPUT:
```
fib(5)	fib(4)	fib(3)	fib(2)	fib(1)	fib(0)	fib(1)	fib(2)	fib(1)	fib(0)	fib(3)	fib(2)	fib(1)	fib(0)	fib(1)	
5
```

INPUT:
```
7
```

OUTPUT:
```
fib(7)	fib(6)	fib(5)	fib(4)	fib(3)	fib(2)	fib(1)	fib(0)	fib(1)	fib(2)	fib(1)	fib(0)	fib(3)	fib(2)	fib(1)	fib(0)	fib(1)	fib(4)	fib(3)	fib(2)	fib(1)	fib(0)	fib(1)	fib(2)	fib(1)	fib(0)	fib(5)	fib(4)	fib(3)	fib(2fib(1)	fib(0)	fib(1)	fib(2)	fib(1)	fib(0)	fib(3)	fib(2)	fib(1)	fib(0)	fib(1)	
13
```




## Problem 3

Please write the non-recursive (iterative) program for problem 2.  Please print out the order in which you are calculating the Fibonacci sequence number.  Follow the examples exactly, as follows:

INPUT
```
5
```

OUTPUT
```
(0, 2)	(1, 3)	(2, 5)	
5
```

INPUT:
```
7
```

OUTPUT:
```
(0, 2)	(1, 3)	(2, 5)	(3, 8)	(4, 13)	
13
```

INPUT:
```
20
```

OUTPUT:
```
(0, 2)	(1, 3)	(2, 5)	(3, 8)	(4, 13)	(5, 21)	(6, 34)	(7, 55)	(8, 89)	(9, 144)	(10, 233)	(11, 377)	(12, 610)	(13, 987)	(14, 1597)	(15, 2584)	(16, 4181)	(17, 6765)	
6765
```

Note, the first number in the pair is the iteration count (i) and the second number is the value of the (i+2)-th Fibonacci value.


## Problem 4

Write the solution to problem 2 or 3 into a separate header and definition file and create a makefile to compile it into an executable.  It will be tested by simply running 'make' in <you-drop-box-dir>/lab2.
