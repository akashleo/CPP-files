#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 

int main()
{
      int x=0, y=0, a , b, i=0, k=0;
      int arr[20], brr[20];


      cout << "Enter the first no.  ";
      cin >> a ;
      cout << "Enter the second no.  ";
      cin >> b ;

     for(i=a;i<=b;i++)
     {
          y=0;
          for(x=1;x<=i;x++)
          {
               if(i%x==0)
                    y++;
          }
          if(y==2)
               arr[k++]=i;
     }
     cout<<" " << endl;
     cout<<"  " << endl;


     cout<<" Printing the prime no. array " << endl;
     for( i=0;i<k;i++) // prints the array arr
     {
          cout<<" |" << arr[i] <<"|" ;
     }
     cout<<" " << endl;
     
    
     

      
     //cout<<" The largest sum   = " << x+y <<  endl;
     return 0;
}