#include <iostream>
using namespace std;
class Matrix{
private:
   int row;
   int col;
   int **matrix;

public:
   //default constructor
   Matrix(){
       row=col=3;
       matrix = new int*[row];
       for(int i=0;i<row;i++){
           matrix[i] = new int[col];
       }
       for(int i=0;i<row;i++){
           for(int j=0;j<col;j++){
               matrix[i][j] = rand()%11;
           }
       }
   }

   //perametrized constructor
   Matrix(int rowIn,int colIn){
       row = rowIn;
       col = colIn;
       matrix = new int*[row];
       for(int i=0;i<row;i++){
           matrix[i] = new int[col];
       }
       for(int i=0;i<row;i++){
           for(int j=0;j<col;j++){
               matrix[i][j] = rand()%11;
           }
       }
   }


   //display matrix
   void display(){
       for(int i=0;i<row;i++){
           cout<<"\tcol"<<i+1;
       }cout<<endl;

       for(int i=0;i<row;i++){
           cout<<"row"<<i+1<<"\t";
           for(int j=0;j<col;j++){
               cout<<matrix[i][j]<<"\t";
           }
           cout<<endl;
       }
   }
   //get element throw out of range
   int getElement(int i, int j){
       if(i<0 || i>row || j<0 || j>col){
           throw "out_of_range";
       }else{
           return matrix[i-1][j-1];
       }

   }
   void setElement(int i, int j,int value){
       if(i<0 || i>row || j<0 || j>col){
           throw "out_of_range";
       }else{
           matrix[i-1][j-1] = value;
       }

   }

   //friend function to override input and output operator
   friend istream & operator >> (istream &is, Matrix &obj);
   friend ostream& operator<<(ostream& os, Matrix &obj);

   //matrix addition
   Matrix operator + (Matrix & obj){
       Matrix newMatrix(obj.row,obj.col);

       //check if row and column are same
       if(row!=obj.row || col !=obj.col){
           throw"Column and row of matrix must be same ";
           return newMatrix;
       }
       for(int i=0;i<obj.row;i++){
           for(int j=0;j<obj.col;j++){
               newMatrix.matrix[i][j] = matrix[i][j]+obj.matrix[i][j];
           }
       }
       return newMatrix;
   }


   void operator += (Matrix & obj){
       //check if row and column are same
       if(row!=obj.row || col !=obj.col){
           throw"Column and row of matrix must be same ";
       }
       for(int i=0;i<obj.row;i++){
           for(int j=0;j<obj.col;j++){
               matrix[i][j] = matrix[i][j]+obj.matrix[i][j];
           }
       }
   }


   bool operator != (Matrix & obj){
       //check if row and column are same
       if(row!=obj.row || col !=obj.col){
           return true;
       }
       for(int i=0;i<obj.row;i++){
           for(int j=0;j<obj.col;j++){
               if(matrix[i][j]!=obj.matrix[i][j]){
                   return true;
               }
           }
       }
       return false;
   }

   Matrix operator - (Matrix & obj){
       Matrix newMatrix(obj.row,obj.col);

       //check if row and column are same
       if(row!=obj.row || col !=obj.col){
           throw"Column and row of matrix must be same ";
           return newMatrix;
       }
       for(int i=0;i<obj.row;i++){
           for(int j=0;j<obj.col;j++){
               newMatrix.matrix[i][j] = matrix[i][j]-obj.matrix[i][j];
           }
       }
       return newMatrix;
   }

   //multiply
   Matrix operator *(Matrix & obj)
   {
       Matrix newMatrix(obj.row,obj.col);
       int i, j, k;
       if(col!=obj.row){
           throw"Matrix dimension not agree for multiplication";
       }

       for (i = 0; i < row; i++)
       {
           for (j = 0; j < obj.col; j++)
           {
               newMatrix.matrix[i][j] = 0;
               for (k = 0; k < col; k++)
                   newMatrix.matrix[i][j] += matrix[i][k]*obj.matrix[k][j];
           }
       }
       return newMatrix;
   }

};
ostream& operator<<(ostream& os, Matrix &obj) {
   for(int i=0;i<obj.col;i++){
       cout<<"\tcol"<<i+1;
   }cout<<endl;
   for(int i=0;i<obj.row;i++){
       cout<<"row"<<i+1<<"\t";
       for(int j=0;j<obj.col;j++){
           cout<<obj.matrix[i][j]<<"\t";
       }
       cout<<endl;
   }

   return os;
}

istream & operator >> (istream &is, Matrix &obj){
   int inRow,inCol;
   cout<<"Enter number of rows and number of columns : ";
   is>>inRow;
   is>>inCol;
   obj.row = inRow;
   obj.col = inCol;

   obj.matrix = new int*[inRow];
   for(int i=0;i<inRow;i++){
       obj.matrix[i] = new int[inCol];
   }

   for(int i=0;i<obj.row;i++){
       for(int j=0;j<obj.col;j++){
           cout<<"Enter m["<<i<<"]["<<j<<"] = ";
           is>>obj.matrix[i][j];
       }
   }
   return is;
}

int main(){
   Matrix M;
   Matrix N;
   cout<<"Enter details of first matrix"<<endl;
   cin>>M;
   cout<<"Enter details of second matrix"<<endl;
   cin>>N;

   cout<<"First matrix is as below"<<endl;
   cout<<M;
   cout<<"Second matrix is as below"<<endl;
   cout<<N;

   Matrix K = M*N;
   Matrix A = M+M;
   Matrix B = M-M;

   cout<<"Multiplication of the matrix is"<<endl;
   cout<<K;
   cout<<"Addition of the matrix is"<<endl;
   cout<<A;
   cout<<"Subtraction of the matrix is"<<endl;
   cout<<B;


   return 0;

}
