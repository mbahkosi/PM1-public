#include<iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

class Matrix {
    private:
        int ar [3][3];//declaring the array
        string contents;//for taking input

    public:
    //overloading the output
        friend ostream &operator<<( ostream &output, const Matrix &M ) {
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    output <<M.ar[i][j]<<" ";
                }
                output<<endl;
            }
            return output;
        }
    //overloading the input
        friend istream &operator>>( istream &input, Matrix &M ) {
            getline(input, M.contents);//getting input as string
            M.storeArray();//converting string to integer
            return input;
        }

        void storeArray(){
            stringstream sstream; //using stringstream to extract integer
            sstream << contents;
            vector<int> vec;//using vector to store integer
            string temp;
            int number;//storing individual integer
            while (!sstream.eof()){
                sstream >> temp;
                if (stringstream(temp) >> number){
                    vec.push_back(number);//storing integers
                }
                temp = "";
            }
            int counts = 0;
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    ar[i][j] = vec[counts];//storing integers in the 2d array
                    counts++;
                }
            }
        }
};
int main() {
Matrix M;
cout<<"Input: ";
cin>>M;
cout<<"\nOutput:"<<endl;
cout<<M;
return 0;
}
