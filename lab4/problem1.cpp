# include<stdio.h>
       void main()
       {
           int c;

Char ch=’y’;
           void Addition();
           void Subtraction();
           void Multiplication();
           void Transpose();
           void Determinant();
           clrscr();

While(ch==’y’){
           printf("\n- : Matrix Manipulation Functions (for 3 X 3 Matrix)");
           printf("\n-------------------------------------");
           printf("\n Matrix Addition            : 1");
           printf("\n Matrix Subtraction         : 2");
          printf("\n Matrix Multiplication      : 3");
           printf("\n Find Transpose Matrix      : 4");
           printf("\n Matrix is Determinant : 5");

printf("\n Quite : 6");
           printf("\n Enter Your Choice          : ");
           scanf("%d",&c);
           switch(c)
           {
               case 1:
                   Addition();
                   break;
               case 2:
                   Subtraction();
                   break;
               case 3:
                   Multiplication();
                   break;
               case 4:
                   Transpose();
                   break;
               case 5:
                   Determinant();
                   break;

case 6:

     exit();
               default:
                   printf("\nInvalid Choice");
           }

printf(“do you want to continue(Yes=’y’ or No=’n’);

scanf(“%c”,&c);
           getch();
       }




       void Addition()
       {
           int x[3][3],y[3][3],z[3][3];
           void getmatrix(int [][3]);
           void addition(int [][3],int [][3],int [][3]);
           clrscr();
           getmatrix(x);
           getmatrix(y);
           addition(x,y,z);
           printf("\n - : Matrix 1: - \n");
           display(x);
           printf("\n - : Matrix 2: - \n");
           display(y);
           printf("\n - : Matrix Addition (Result): - \n");
           display(z);
       }
      void getmatrix(int t[][3])
       {
           int i,j;
           for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
               {
                   printf("Enter element [%d][%d] : ",i,j);
                   scanf("%d",&t[i][j]);
               }
           }
       }
       void addition(int p[][3],int q[][3],int r[][3])
       {     int i,j;
           for(i=0;i<3;i++)
           {      for(j=0;j<3;j++)
                   r[i][j]=p[i][j]+q[i][j];
           }
       }
       void Subtraction()
       {
           int x[3][3],y[3][3],z[3][3];
           void getmatrix(int [][3]);
           void subtraction(int [][3],int [][3],int [][3]);
           clrscr();
           getmatrix(x);
           getmatrix(y);
           subtraction(x,y,z);
           printf("\n - : Matrix 1: - \n");
           display(x);
           printf("\n - : Matrix 2: - \n");
           display(y);
           printf("\n - : Matrix Subtraction (Result): - \n");
           display(z);
       }
       void subtraction(int p[3][3],int q[3][3],int r[3][3])
       {
           int i,j;
           for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
                   r[i][j]=p[i][j]-q[i][j];
           }
       }
       void Multiplication()
       {
           int x[3][3],y[3][3],z[3][3];
           void getmatrix(int [][3]);
           void multiplication(int [][3],int [][3],int [][3]);
           clrscr();
           getmatrix(x);
           getmatrix(y);
           multiplication(x,y,z);
           printf("\n - : Matrix 1: - \n");
           display(x);
           printf("\n - : Matrix 2: - \n");
           display(y);
           printf("\n - : Matrix Multiplication (Result): - \n");
           display(z);
       }
       void multiplication(int p[][3],int q[3][3],int r[3][3])
       {
           int i,j,k;
           for(i=0;i<3;i++)                
//condition i< total row of matrix1
           {
               for(j=0;j<3;j++)        
//condition i< total col of matrix1 or//condition i< total row of matrix2
{
                   r[i][j]=0;
                   for(k=0;k<3;k++) //condition i< total col of matrix2
                       r[i][j]=r[i][j]+(p[i][j]*q[j][k]);
               }
           }
       }
       void Transpose()
       {
           int x[3][3],y[3][3];
          void getmatrix(int [][3]);
           void transpose(int [][3],int [][3]);
           clrscr();
           getmatrix(x);
           transpose(x,y);
           printf("\n - : Matrix 1: - \n");
           display(x);
           printf("\n - : Transpose Matrix : - \n");
           display(y);
       }
       void transpose(int p[][3],int q[][3])
       {
           int i,j;
           for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
                   q[i][j]=p[j][i];
           }
       }
       void Determinant()
       {
           int x[3][3],y[3][3];
           void getmatrix(int [][3]);
           void transpose(int [][3],int [][3]);
           int symmetric(int [][3],int [][3]);
           clrscr();
           getmatrix(x);
           transpose(x,y);
           if(symmetric(x,y)==1)
               printf("\nMatrix is Symmetric");
           else
               printf("\nMatrix is Not Symmetric");
       }
       int symmetric(int p[][3],int q[][3])
       {
           int i,j;
           for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
               {
                   if(q[i][j]!=p[i][j])
                       return 0;
               }
           }
           return 1;
       }
       void display(int m[][3])
       {
           int i,j;
           printf("\n\n");
           for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
                   printf("%d ",m[i][j]);
               printf("\n");
           }
       }
