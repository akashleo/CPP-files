#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 

int main()
{
      int x=0, y=0, a , b, i=0;
      int arr[20], brr[20];


      cout << "Enter the length of array1  ";
      cin >> a ;
      cout << "Enter the length of array2  ";
      cin >> b ;

      cout << "Input for Arr  "<<endl;
      for(i=0;i<a;i++)
      {
           cout<<" Arr : At "<<i<<"th index :";
           cin>>arr[i];
           if(x<arr[i]) // Storing the largest no in x
               x=arr[i];
      }
      cout << "Input for Brr  "<<endl;
      for(i=0;i<b;i++)
      {
           cout<<" Brr : At "<<i<<"th index :";
           cin>>brr[i];
           if(y<brr[i]) // Storing the largest no. in y
               y=brr[i];
      }

     cout<<" " << endl;
     cout<<"  " << endl;
     
     cout<<" Printing the respective arrays " << endl;
     for( i=0;i<a;i++) // prints the array arr
     {
          cout<<" |" << arr[i] <<"|" ;
     }
     cout<<" " << endl;
     for( i=0;i<b;i++) // prints the array brr
     {
          cout<<" |" << brr[i] <<"|";
     }
     cout<<" " << endl;
     
     

      
     cout<<" The largest sum   = " << x+y <<  endl;
     return 0;
}