#include <iostream>
#include "problem3.h"
using namespace std;

int main(){
    int m=4,n=8;
    int a[][100] = { {1,  2,  3,  4, 5, 6,7,8}, 
        {5,  6,  7,  8, 9, 10, 11,12}, 
        {9,  10, 11, 12, 13, 14,15,16}, 
        {13, 14, 15, 16, 17, 18, 19, 20}  };
        
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    cout<<endl;
    
    rotatematrix(m,n,a);
    
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
