#include <iostream> 
#include <string>

using namespace std;  
int main(int argc, char** argv) 
{ 
     int i,n,j;   
     char ch; 
     //cout<<"Enter any Number: ";    
     //cin>>number;  
     string x, y, z;
     x = argv[1];
     y = argv[2];
     z = argv[3];

     string check= "aeiouAEIOU";

     string m = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
     
     
     n= x.length();
     for(i=0;i<n;i++)
     {
          ch=x.at(i);
          for(j=0;j<10;j++)
          {
               if(ch==check.at(j))
               {
                    ch='"';
                    x.at(i)=ch;
                    break;
               }
          }
     }

     n= y.length();
     for(i=0;i<n;i++)
     {
          ch=y.at(i);
          for(j=0;j<m.length();j++)
          {
               if(ch==m.at(j))
               {
                    y.at(i)='*';
                    break;
               }
          }
     }

     n= z.length();
     for(i=0;i<n;i++)
     {
          ch=z.at(i);
          if(ch>=97 && ch<=122)
               ch= (char)((int)ch - 32);
          z.at(i)= ch;
     }

     cout<<x<<endl;
     cout<<y<<endl;
     cout<<z<<endl;

      
     return 0;  
} 