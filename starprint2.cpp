#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
 


int main()
{
     int a, b, c;
     cin>>a;
     b=a/2;
     for(int i=1;i<=a;i++)
     {
          if(i<=b+1)
          {
               c=i;
          }
          else
          {
               c--;
          }
          
          for(int j=1;j<=c;j++)
          {
               cout<<"*\t";
          }
          cout<<endl;
     }
      
     cout<< endl;

}