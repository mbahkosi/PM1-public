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
    cout << "fib(" << n << ")\t";
    if (n<2)
        return n;
    return fib(n-1)+fib(n-2);
}
