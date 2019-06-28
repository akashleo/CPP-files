#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

class hopcount
{
private:
     int data,stone[20], count[20];
     int x, c=0, k, flag=0 , sum=0;
public:

     void getInput()
     {
          cout<< " Enter the no. of stones ";
          cin>>data; 
          for(int i=0;i<data;i++)
          {
               cin>>stone[i];
          }
          x=(sizeof(stone)/sizeof(stone[0]));
          for(int i=data;i<x;i++)
          {
               stone[i]=0;
          }
          sum=stone[0];
          count[c++]=stone[0];
     } 
     
     void check()
     {
          for(int i=0;i<data;i++)
          {
               
               if(stone[i+3]>=stone[i+2] && stone[i+3]>=stone[i+1] && flag==0)  // double hop
               {
                    sum=sum + 3*stone[i+3];
                    i+=3;
                    count[c++]=3*stone[i];
                    flag= 1;
                    i--;
                    continue;
               }
               else if(stone[i+2]>=stone[i+1]) // single hop
               {
                    sum=sum + 2*stone[i+2];
                    i+=2;
                    count[c++]=2*stone[i];
                    i--;
                    continue;
               }
               else
               {
                    sum=sum+ stone[i+1];
                    i++;
                    count[c++]=stone[i];
               }
               
          }

     }
     void display()
     {
          cout<< " Maximum score on Hops : "<< sum << endl;

          for(int i=0;i<c;i++)
          {
               cout<< "|"<<count[i]<<"|";
          }
          cout<<endl;
     }
     

     
     
};

 



int main()
{
     hopcount f1;
     f1.getInput();
     f1.check();
     f1.display();
     


     return 0;
}