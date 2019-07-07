#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

struct candy {
     int total=0;
     int free;
};


int main()
{
     int t, x=0, c=0, a=0;
     int min=0, max=0;

     cin>>t;
     struct candy A[t];

     for(int i=0;i<t;i++)
     {
          //cout<< " Enter the total no.  ";
          cin>>A[i].total>>A[i].free;
          //cout<< " Enter the free no.  ";
    


          x=A[i].total;
          int X[x];

          min=0;max=0;
          for(int j=0;j<x;j++)
          {
               //cout << " for :"<<j<<" :";
               cin>>X[j];
          }
          x=A[i].total;
          sort(X, X+x);
          for(int j=0;j<x;j++)
          {
               min=min+X[j];
               x=x-A[i].free;
          }
          x=A[i].total;
          /*while(k<=x)
          {
               max=max+X[--x];
               k=k+A[i].free;
          }*/
          sort(X, X+x,greater<int>());
		for(int j=0;j<x;j++)
		{
			max=max+X[j];
			x=x-A[i].free;
		}

          cout<<min<<" "<<max<<endl;
          /*/for(int j=0;j<A[i].total;j++)
          {
               cout<< "|"<<X[j]<<"|";
          }
          cout<<endl;*/
     }

     return 0;

}