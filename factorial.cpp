#include <iostream>  
using namespace std;  
int main(int argc, char** argv) 
{ 
     int i,fact=1,number;    
     //cout<<"Enter any Number: ";    
     //cin>>number;  
     number = atoi(argv[1]);  
     for(i=1;i<=number;i++)
     {    
          fact=fact*i;    
     }    
     cout<<fact<<endl;  
     return 0;  
} 