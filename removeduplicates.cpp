#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
 


int main()
{
     int a, b=0, c , d, m;
     cin>>m;
     int A[m];
     for(int i=0;i<m;i++)
     {
          cin>>A[i];
     }
     sort(A, A+m);
     a=A[0];
     for(int i=0;i<m;i++)
     {
          if(a==A[i+1])
          {
               A[i]=0;
          }
          else
          {
               A[b++]=a;
               a=A[i+1];
          }
     }
     cout<<endl;
     for(int i=0;i<b;i++)
     {
          cout<<"|"<<A[i]<<"|";
     }
      
     cout<< endl;

}