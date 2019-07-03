#include <iostream>
using namespace std;
 



int secondLargest(int A[], int n)
{
     int max=0;
     for(int i=0;i<n;i++)
     {
          if(A[i]>max)
          {
               max=A[i];
          }
     }
     
     return max;


}

void findLargest( int A[], int n)
{
     int max=0, max2=0;
     for(int i=0;i<n;i++)
     {
          if(A[i]>max)
          {
               max2=i;
               max=A[i];
          }
     }
     
     A[max2]=0;

}


int main()
{
     int A[20], length=0;
     cout<< " Enter the no. of elements :";
     cin>>length;
     cout<< "  Enter the values "<<endl;
     for(int i=0;i<length;i++)
     {
          cin>>A[i];
     }
      
     findLargest( A , length);
     int max2= secondLargest(A, length);
     cout<< "\n The second largest no. is :  "<<max2 << endl;

}