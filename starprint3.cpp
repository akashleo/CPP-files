#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
 


int main()
{
     int a, b, c , d, m;
     cin>>a;
     if(a%2!=0)
          b=(a/2)+1;
     else
     {
          b=(a/2);
     }
     
     for(int i=1;i<=a;i++)
     {
          if(i<=b)
          {
               c=i;
               m=c;
               if(m==b && a%2!=0)
                    m=m-1;
               d= a- 2*c;
          }
          else
          {
               c--;
               d= a- 2*c;
               m=c;
          }
          
          for(int j=1;j<=c;j++)
          {
               cout<<"*\t";
          }
          for(int j=1;j<=d;j++)
          {
               cout<<" \t";
          }
          for(int j=1;j<=m;j++)
          {
               cout<<"*\t";
          }
          cout<<endl;
     }
      
     cout<< endl;

}