#include <iostream> 
#include <bits/stdc++.h> 
using namespace std;  
int main(int argc, char** argv) 
{ 
     int i,a,b,c;    
     float s, area;
     //cout<<"Enter any Number: ";    
     //cin>>number;  
     a = atoi(argv[1]);
     b = atoi(argv[2]);
     c = atoi(argv[3]);  
     
     s=(a+b+c)/2;

     //cout<<s<<a<<b<<c<<endl;

     area = sqrt(s*(s-a)*(s-b)*(s-c));

     cout<<area<<endl;  
     return 0;  
} 