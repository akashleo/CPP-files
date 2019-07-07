#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int B[20][20], C[20][20];

void calculate(int A[], int a, int b)
{
     int k, x=24615,z=0, y=0;
     for(k=a;k<b;k++)
     {
          z=B[a][k] + B[k+1][b] + (A[a-1]*A[b]*A[k]);
          if(x>z)
          {
               x=z;
               y=k;
          }          
     }
     B[a][b]=x;
     C[a][b]=y;


}
 

int main()
{
     int a=0,b=0,c=0, i, j , k, n, d=0;
     int A[20];
     cout<< "Enter the no. of matrices : ";
     cin>>n;
     n=n+1;

     for(i=0;i<n;i++) 
     {
          cout<<" for "<<i<<": ";
          cin>>A[i];
     }
     
     for(i=0;i<n;i++)
     {
          for(j=0;j<n;j++)
          {
               if(i==j || i==0 || j==0){
                    B[i][j]=0;
                    C[i][j]=0;
               }
          }
     }

     for(d=1;d<n-1;d++)
     { 
          for(i=1;i<n-d;i++)
          {
               j=i+d;
               calculate(A,i,j);
          }
     }


     cout<< endl;
     for(i=1;i<n;i++)
     {
          for(j=1;j<n;j++)
          {
               cout<<"\t"<<B[i][j];
          }
          cout<< endl;
     }

     cout<< endl;
     for(i=1;i<n;i++)
     {
          for(j=1;j<n;j++)
          {
               cout<<"\t"<<C[i][j];
          }
          cout<< endl;
     }

     return 0;

}