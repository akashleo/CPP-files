#include <iostream>  
using namespace std;  
int main(int argc, char** argv) 
{ 
     int i,x, b=0,number, a;    
     //cout<<"Enter any Number: ";    
     //cin>>number;  
     number = atoi(argv[1]);
        a= number;  
     while(a>0){
        x=a%10;
        b=b*10+x;
        a=a/10;

       }

     cout<<b<<endl;  
     return 0;  
} 