#include <iostream> 
using namespace std;  
int main(int argc, char** argv) 
{ 
     int i,b,c,n, a1=0,a2=0, x=0;    
     //cout<<"Enter any Number: ";    
     //cin>>number;  
     n = atoi(argv[1]);
     
     
     if(n%2==0)
     {
          b= n/2;
          x=b-1;
          cout<<x<<endl;
     }
     else
     {
          x=n-1;
          cout<<x<<endl;
     }
     


 
     return 0;  
} 