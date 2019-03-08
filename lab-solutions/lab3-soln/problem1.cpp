#include "problem1.h"

void reverseArray(int arr[], int start, int end) 
{ 
   int temp; 
   if (start >= end) 
     return; 
   temp = arr[start];    
   arr[start] = arr[end]; 
   arr[end] = temp; 
  reverseArray(arr, start+1, end-1);    
}  
