#include <iostream>

using namespace std;

unsigned int fib(unsigned int n);

int main(){
    unsigned int n, res;
    cin >> n;
    res  = fib(n);
    cout << endl << res << endl;
}

unsigned int fib(unsigned int n){
    int nm1=0,nm2=1,val=1;
    for (int i=0; i<n-2; i++){
        nm1=nm2;
        nm2=val;
        val=nm1+nm2;
        cout << "(" << i << ", " << val << ")\t";
    }
    return val;
}
