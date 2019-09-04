#include <iostream> 
#include <string>

using namespace std;  
int main(int argc, char** argv) 
{ 
     int i,n,j;   
     char ch; 
     //cout<<"Enter any Number: ";    
     //cin>>number;  
     string x;
     x = argv[1];

     string m = "";
     
     
     n= x.length();
     for(i=0;i<n;i++)
     {
          ch=x.at(i);
          m=ch+m;
     }

     
     cout<<m<<endl;

      
     return 0;  
} 