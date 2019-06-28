#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

class findcombination 
{
private:
     int data,orfa[20], factors[20], comb[40][20];
     int x, y , a , b, c=0, k;
public:

     void getInput()
     {
          cout<< " Enter a no. ";
          cin>>data; 
     } 
     
     void factorfind()
     {
          k=0;
          for(int i=1;i<=data;i++)
          {
               if(data%i==0)
               {
                    factors[k]=i;
                    orfa[k]=i;
                    k++;
               }
          }
          display(orfa, k);
     }
     void store(int am){

          for(int i=0;i<k;i++)
          {
               comb[am][i]=factors[i];
          }

     }
     void display(int A[], int n)
     {
          for(int i=0;i<n;i++)
          {
               cout<< "|"<<A[i]<<"|";
          }
          cout<<endl;
     }
     void display2D()
     {
          for(int i=0;i<x;i++)
          {
               for(int j=0;j<k;j++)
               {
                    cout<< "|"<<comb[i][j]<<"|";
               }
               cout<<endl;
          }
          
     }

     void eliminate()
     {
          for(int i=0;i<k-1;i++)
          {
               a=i;
               b=i+1;
               removeRow();
          }
     }

     void removeRow()
     {
          for(int i=0;i<x;i++)
          {
               for(int j=0;j<k-1;j++)
               {
                    if(comb[i][j]==orfa[a] && comb[i][j+1]==orfa[b])
                    {
                         comb[i][0]=0;
                    }
               }
          }
     }
     void countSpaces()
     {
          cout<< endl;
          cout<< "  Valid permutations are:  "<< endl;

          for(int i=0;i<x;i++)
          {
               if(comb[i][0]!=0)
               {
                    c++;
                    for(int j=0;j<k;j++)
                    {
                         cout<< "|"<<comb[i][j]<<"|";
                    }
                    cout<<endl;
               }
          }
          cout<< " The no. of valid combinations is "<<c<<endl;
          
     }

     void findPermutations() 
     { 
  
          // Sort the given array 
          sort(factors, factors + k); 
          x=0; // x stores the no. of rows of comb array
          // Find all possible permutations 
          cout << "Possible permutations are:\n"; 
          do 
          { 
               //display(); 
               store(x++);
          } while (next_permutation(factors, factors + k)); 
     } 

     
};

 



int main()
{
     findcombination f1;
     f1.getInput();
     f1.factorfind();
     f1.findPermutations();
     f1.display2D();
     f1.eliminate();
     f1.countSpaces();


     return 0;
}