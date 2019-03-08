#include "problem2.h"

int findElement(int arr[], int ranges[][2], int rotations, int index){
    for (int i = rotations - 1; i >= 0; i--) { 
        // Range[left...right] 
        int left = ranges[i][0]; 
        int right = ranges[i][1]; 
  
        // Rotation will not have any effect 
        if (left <= index && right >= index) { 
            if (index == left) 
                index = right; 
            else
                index--; 
        } 
    } 
  
    // Returning new element 
    return arr[index];
}
