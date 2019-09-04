#include <iostream>
#include <bits/stdc++.h> 
using namespace std;


int main(int argc, char **argv)
{
     int x=0, c=0, a=0;
     long long int t;
     int min=0, max=0;

     t=atoi(argv[1]);

     while(t>0)
     {
          x=t%10;
          a++;
          if(x%2==0)
          {
               min=min+x;
          }
          else
          {
               max=max+x;
          }

          t=t/10;
     }

     c= abs(max-min);

     cout<<c<<endl;

     return 0;
}