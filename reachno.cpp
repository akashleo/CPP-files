#include <iostream>
#include <bits/stdc++.h> 
using namespace std;



int main()
{
     int n , A[10], x=0, c=0;

     cin>>n;

     for(int i=0;i<n;i++)
     {
          cin>>A[i];
     }
     
     for(int i=0;i<n;i++)
     {
          x=A[i];
          c=0;
          while(x>0)
          {
               if(x%2==0)
               {
                    x=x/2;
                    c++;
               }
               else
               {
                    x=x-1;
                    c++;
               }
               
          }
          cout<<c<<endl;
     }

     return 0;

}