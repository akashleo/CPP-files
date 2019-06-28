#include <iostream>
#include <bits/stdc++.h> 


using namespace std;

class minimumbid
{
private:
     int store[20], count[20], len;
     int x=0, c=0, a, base, m=0;
     char input[10], data[20];
public:

     void getInput()
     {
          gets(data); 
          len= strlen(data);
          data[len]=' ';
          data[++len]='\0'; 
          for(int i=0;i<len;i++)
          {
               if(data[i]==' ')
               {
                    checkMax(m);
                    m=0;
                    
               }
               else
               {
                    input[m++]=data[i];
               }
               
          }
          
          
     } 
     void checkMax(int m1)
     {
          x=0;
          for(int i=0;i<m1;i++)
          {
               if(int(input[i])>x)
               {
                    x=int(input[i]);
               }
          }
          if(x>=65)
          {
               x=x-65+10;
          }
          if(x>=48 && x<=57)
          {
               x=x-48;
          }
          base=x+1;
          convert(m1);
     }
     
     void convert(int m1)
     {
          a=0;
          for(int i=0;i<m1;i++)
          {
               a=int(input[i]);
               if(a>=65)
               {
                    a=a-65+10;
               }
               if(a>=48 && a<=57)
               {
                    a=a-48;
               }
               store[i]=a;
          }
          countTotal(m1);
     }
     void countTotal(int m1)
     {
          x=0;
          for(int i=m1-1;i>=0;i--)
          {
               x=x + (pow(base,m1-i-1)* store[i]);

          }
          count[c++]=x;
     }
     void display()
     {
          x=1000;
          for(int i=0;i<c;i++)
          {
               if(x>=count[i])
               {
                    x=count[i];
               }
          }
          cout<<x;
     }
     

     
     
};

 



int main()
{
     minimumbid f1;
     f1.getInput();
     f1.display();
     


     return 0;
}