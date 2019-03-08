#include <iostream>
#include "problem2.h"
using namespace std;

int main() 
{ 
    int arr[] = { 1, 2, 3, 4, 5 }; 
  
    // No. of rotations 
    const int rotations = 2; 
  
    // Ranges according to 0-based indexing 
    int ranges[rotations][2] = { { 0, 2 }, { 0, 3 } }; 
  
    int index = 1; 
  
    cout << findElement(arr, ranges, rotations, index); 
  
    return 0; 
  
}
