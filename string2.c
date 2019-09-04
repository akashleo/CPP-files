#include <stdio.h> 
#include <string.h>
 
int main(int argc, char** argv) 
{ 
     int i,n,j;   
     char ch; 
     char *m, *x;
     //cout<<"Enter any Number: ";    
     //cin>>number;  

     x = argv[1];
    
     
     n= strlen(x);

     m= malloc(n);
     for(i=0;i<n;i++)
     {
          m[n-i-1]=x[i];
     }
     m[n]= '\0';
     
     printf(m);

      
     return 0;  
} 