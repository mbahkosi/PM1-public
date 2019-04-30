#include<iostream>
using namespace std;

class Matrix{
   private:
       int m,n;
       double **arr;
      
   public:
      
      
       Matrix(int r,int c){
           m=r;
           n=c;
           arr = new double*[m];
           for(int i=0;i<m;i++)arr[i] = new double[n];
       }
       Matrix(Matrix & mat){
       m=mat.m;
           n=mat.n;
           arr = new double*[m];
           for(int i=0;i<m;i++)arr[i] = new double[n];
          
           for(int i=0;i<m;i++){
               for(int j=0;j<n;j++)arr[i][j] = mat.arr[i][j];
           }
       }
       Matrix & operator +(Matrix & mat){
           Matrix *newMatrix = new Matrix (*this);
           for(int i=0;i<mat.m;i++){
               for(int j=0;j<mat.n;j++){
                   newMatrix->arr[i][j] +=mat.arr[i][j];
               }
           }
           return *newMatrix;
       }
       Matrix & operator -(Matrix& mat){
           Matrix *newMatrix = new Matrix (*this);
           for(int i=0;i<mat.m;i++){
               for(int j=0;j<mat.n;j++){
                   newMatrix->arr[i][j] -=mat.arr[i][j];
               }
           }
           return *newMatrix;
       }
       Matrix &operator *(Matrix & mat){
           Matrix *matrix = new Matrix (m,mat.n);
       for(int i = 0; i < m; ++i)
       for(int j = 0; j < mat.n; ++j)matrix->arr[i][j]=0;
                          
for(int i = 0; i < matrix->m; ++i)
   for(int j = 0; j < matrix->n; ++j)
   for(int k = 0; k < n; ++k)
       matrix->arr[i][j] += arr[i][k] * mat.arr[k][j];
      
        return *matrix;
       }
      
       void display(){
           for(int i=0;i<m;i++){
               for(int j=0;j<n;j++)cout<<arr[i][j]<<" ";
               cout<<"\n";
           }
       }
       Matrix & transpose(){
           Matrix *mat = new Matrix(n,m);
           for(int i=0;i<m;i++){
               for(int j=0;j<n;j++)mat->arr[j][i] = arr[i][j];
           }
           return *mat;
       }
       void setMatrix(){
           cout<<"enter "<<m<<" rows and "<<n<<" column matrix\n";
           for(int i=0;i<m;i++){
               for(int j=0;j<n;j++)cin>>arr[i][j];
           }
       }
      
};

int main(){
   Matrix M(3,3);
Matrix N(2,3);
  
M.setMatrix();
N.setMatrix();
  
Matrix K=M*N.transpose();
Matrix A=M+M;
   Matrix B=M-M;
  
   cout<<"Matrix K \n";
   K.display();
  
   cout<<"\n\nMatrix A \n";
   A.display();
  
   cout<<"\n\nMatrix B \n";
   B.display();
   return 0;
  

}
