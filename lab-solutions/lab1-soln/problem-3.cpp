#include <iostream>

using namespace std;

int main(void){
    float low, step, high;
    const float lowbound = -89.2;   //lowest recorded temperature on earth in degrees celsius
    const float upperbound = 57.6;  //highest recorded temperature on earth in degrees celsius
    float f;
    cin >> low >> step >> high;

    if (low<lowbound)
        cout << "ERROR"<<endl;

    if (step>high-low)
        cout << "ERROR" << endl;

    if (high>upperbound)
        cout << "ERROR"<<endl;

    if (step<=0)
        cout << "ERROR"<<endl;

    for (float i=low; i<=high; i+=step){
        f = (((float)i)*(9.0/5.0))+32.0;
        cout << i << "\t" << f << endl;
    }
    return 0;
}
