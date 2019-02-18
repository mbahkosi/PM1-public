# Lab-3

For this lab, please only write the required function.  Please use the [skeleton code](https://github.com/jortizcs-rutgers/PM1-public/tree/master/lab3) is "problem**n**.h" and "problem**n**.cpp", where **n** is the problem number.  For problem 1, we will provide problem1.h and problem1.cpp with initial function prototypes.  Simply fill in the code an submit the final version.  If you need to write help functions, please include them in the "problem<n>cpp" file and be sure to add their function prototype to the "problem<n>.h" file.

## Problem 1

Write a function to reverse an array of integers starting from a given start index and a given end index.  Note, the end index is inclusive.  Please add your code to problem1.h and problem1.cpp, as provided.

Function prototype:
```
void reverse(int[],int,int);

int[] a = {1,2,3};
reverse(a, 0, 2);
//The content of a should be {3,2,1}.

int[] a = {1,2,3};
reverse(a, 0, 1);
//The content of a should be {2,1,3}.
```



## Problem 2
Write a function that performs a given number of right circular rotations -- each performed from index L to index R and specified as an input parameter -- and returns the value at the given index of the array, after all rotations have been performed.  Please add your code to problem2.h and problem2.cpp as provided.

```
Input : arr[] : {1, 2, 3, 4, 5}
        ranges[] = { {0, 2}, {0, 3} }
        index : 1
Output : 3
Explanation : After first given rotation {0, 2}
                arr[] = {3, 1, 2, 4, 5}
              After second rotation {0, 3} 
                arr[] = {4, 3, 1, 2, 5}
After all rotations we have element 3 at given
index 1. 
```


## Problem 3

Given a matrix, clockwise rotate elements in it.  Please add the code to problem3.h and problem3.cpp, provided.

```
Input
1    2    3
4    5    6
7    8    9

Output:
4    1    2
7    5    3
8    9    6

For 4*4 matrix
Input:
1    2    3    4    
5    6    7    8
9    10   11   12
13   14   15   16

Output:
5    1    2    3
9    10   6    4
13   11   7    8
14   15   16   12
```
