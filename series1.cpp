#include <iostream> 
#include <bits/stdc++.h> 
using namespace std;  
int main(int argc, char** argv) 
{ 
     int i,b,c,n, a1=1,a2=1, x=0;    
     //cout<<"Enter any Number: ";    
     //cin>>number;  
     n = atoi(argv[1]);
     
     
     for (i=1;i<=n;i++)
     {
          if(i%2!=0)
          {
               b=2*a1;
               x=a1;
               a1=b;
          }
          else
          {

               c=3*a2;
               x=a2;
               a2=c;
          }
          
     }


     cout<<x<<endl;  
     return 0;  
} 