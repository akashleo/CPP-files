#include <iostream>  
using namespace std;  


int main() 
{ 
     int t ;
     cin>>t;
     while(t--)
     {
          string m1="gfg", m2;
          int s1=0, s2=0, a=0, b=0;
          cin>>m2;
          s1=m1.length();
          s2=m2.length();
          for(int i=0;i<s2-s1;i++)
          {
               b=0;
               for(int j=0;j<s1;j++)
               {
                    if(m1.at(j)==m2.at(i+j))
                    {
                         b++;
                    }
               }
               if(s1==b)
                    a++;
          }
          if(a>0)
               cout<<a<<endl;
          else
               cout<<-1<<endl;        
     }


     return 0;  
} 