#include <iostream>
#include <cmath>
#include <string>
using namespace std; 
 

int main()
{
      int x=0, y=0, z=0, a ,c=0, dist=0, b, b1, i=0;
      int num[20], bum[20];
      double cal=0.0, bcal=0.0;


      cout << "Enter one integer to convert  ";
      cin >> a ;
      cout << "Enter the base of the integer  ";
      cin >> b ;
      x=a;
      cout << "Enter the base of integer to convert  ";
      cin >> b1 ;

      // convert to decimal
     while(x>0)
      {
           y=x%10;
           num[c++]=y;
           x=x/10;
      }

      cout<<" Inputted no = " << a<< endl;
     for( i=0;i<c;i++) // prints the array and calculates decimal
     {
          cout<<" | " << num[i] ;
          cal=pow(b,i); 
          bcal= bcal+num[i]*cal;
     }
      cout<<" Calculated no = " << bcal<< endl;
      // convert from decimal to other form

     x=round(bcal);
     

      while(x>0)
      {
           y=x%b1;
           z= z*10 + y;
           x=x/b1; 
      }
     x=z;
     z=0;
      while(x>0)// reversing the string
      {
           y=x%10;
           z= z*10 + y;
           x=x/10;
      }
      
     cout<<" converted no  = " << z<<  endl;
     return 0;
}