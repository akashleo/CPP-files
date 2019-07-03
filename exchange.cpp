#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
void swap(char *a, char *b)
{
     int temp=*a;
     *a=*b;
     *b=temp;
}

void findNext(char *number, int n, int b)
{
     int i, j;
     for(i=n-1;i>0;i--)
     {
          if (number[i]>number[i-1])
               break;
     }
     if(i==0)
     {
          cout<< -1;
          return;
     }
     int x= number[i-1], smallest =i;
     for (j= i+1;j< n;j++)
     {
          if( number[j]>x && number[j]< number[smallest])
          {
               smallest=j;
          }
     }

     swap(&number[smallest], &number[i-1]);
     sort( number + i, number +n);
     if(atoi(number)<=b)
          findNext(number, n, b);
     else
          cout<< number;
     
     return;
   
     
}

int main()
{
     int a,c,b,n;
     char *digits;
     cin>>a;
     cin>>b;
     int l=0;
     c=a;
     while(c)
     {
          c=c/10;
          l++;
     }
     digits = new char[l];
     l=l-1;
     while(a)
     {
          digits[l] = (char)(a%10 +48);
          a=a/10;
          l--;
     }
     digits[l] = '\0';
     sort(digits, digits+ strlen(digits));
     n= strlen(digits);
     findNext( digits , n, b);
     return 0;
}