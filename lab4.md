# Lab-3

For this lab, please only write the required function.  Please use the [skeleton code](https://github.com/jortizcs-rutgers/PM1-public/tree/master/lab4) is "problem**n**.h" and "problem**n**.cpp", where **n** is the problem number.  For problem 1, we will provide problem1.h and problem1.cpp with initial function prototypes.  Simply fill in the code an submit the final version.  If you need to write helper functions, please include them in the "problem**n**.cpp" file and be sure to add their function prototype to the "problem**n**.h" file.

## Problem 1
Given a text txt[0..n-1] and a pattern pat[0..m-1], write a function search(char pat[], char txt[]) that prints all occurrences of pat[] in txt[]. You may assume that n > m.

```
Input:  txt[] = "THIS IS A TEST TEXT"
        pat[] = "TEST"
Output: Pattern found at index 10

Input:  txt[] =  "AABAACAADAABAABA"
        pat[] =  "AABA"
Output: Pattern found at index 0
        Pattern found at index 9
        Pattern found at index 12
```


## Problem 2
Given a sorted array of String and a String x, find index of x if it is present in the array.

```
Input :  arr[] = { "contribute", "geeks", "ide", "practice"}, x = "ide"
Output :  2
The String x is present at index 2.

Input :  arr[] = { "contribute", "geeks", "ide", "practice"}, x = "zz"
Output :  -1
The String "zz" is not present.
```
