#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
 


int main()
{
     long long n,x;
     int c, d=0, m1=-1, m2=-1;
     
     cin>>n;
     x=n;
     while(x>0)
     {
          d++;
          x=x/10;

     }
     int A[d];
     x=n;
     c=d-1;
     while(x>0)
     {
          A[c--]=x%10;
          x=x/10;

     }
     for(int i=0;i<d;i++)
     {
          cout<<"|"<<A[i]<<"|";
     }

     for(int i=0;i<d;i++)
     {
          if((i+1)%7==0)
          {
               if(m1<A[i])
               {
                    m1=A[i];
               }
          }
     }

     for(int i=0;i<d;i++)
     {
          if((i+1)%5==0)
          {
               if(m2<A[i])
               {
                    m2=A[i];
               }
          }
     }

     c=m1>m2?m1:m2;

     cout<<"\n bigger no."<<c;
      
     cout<< endl;

}