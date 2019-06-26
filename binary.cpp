#include <iostream>
using namespace std;
 

int checkdist(int z, int c)
{
     int count=0,m=0,k=0,i=0 ;// decllring all the necessary variables
     int num[20],one[10];
     int x=z, store=0;
     for(i=0;i<c;i++) // Puts the binary no. in the array num
     {
          num[i]=x%10;
          x=x/10;
     }
     for( i=0;i<c;i++) // marks the indices of 1's in one array
     {
          if(num[i]==1)
               one[k++]=i;
     }
     m= k; // calculate the length of array one
     for(i=0;i<m-1;i++) // m-1 because of store=one[i+1]-one[i]; statement
     {
          store=(one[i+1]-one[i])-1;
          if(count<store)
               count=store; // checking maximum no. of 0's
     }
     return count;
}


int main()
{
      int x=0, y=0, z=0, a ,c=0, dist=0;
     
      cout << "Enter one integer to convert  ";
      cin >> a ;
      x=a;
      while(x>0)
      {
           y=x%2;
           z= z*10 + y;
           x=x/2;
      }
      cout<<" Binary no = " << z<< endl;
      x=a;
      while(x>0)
      {
           c++;
           x=x/2;
      }
      cout<<" length = " << c<< endl;
     dist=checkdist(z,c);
     cout<<" Maximum no of zeroes = " << dist<<  endl;
     return 0;
}