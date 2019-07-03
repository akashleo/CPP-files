#include <iostream>
#include <bits/stdc++.h> 
#include <cstring>

using namespace std;

int closeNo(int A[], int n , int diff)
{
	int i, m=0, index=0;
	for(i=0;i<n;i++)
	{
		if(abs(diff-A[i])<m)
		{
			m=abs(diff-A[i]);
			index= i;
		}
	}
	return index;
}
int sum(int A[], int n)
{
	int i,  s1=0;
	for(i=0;i<n;i++)
	{
		s1 =s1+A[i];
		
	}
	return s1;
}
int main()
{
	char ch[100], s1[5];
	int i=0, a=0, c=0 , x[20], h1,h2;
	int arr1[10], arr2[10], index=0;

	int diff, sum1, sum2, sumx, avg;
	//int x[]={16,5,21,6,10,12};
	printf(" Enter the inputs  : ");
	cin.get(ch, 100);
	int len = strlen(ch);
	ch[len]=' ';
	ch[++len]='\0';
	//cout<<len;
	for(i=0;i<len;i++)
	{
		if(ch[i]==' ')
		{
			x[c++]=a;
			a=0;
		}
		else
		{
			a=(a*10 + ((int)(ch[i]) -48));
		}
		
	}
	
	for(i=0;i<c;i++)
	{
		cout<<"|"<<x[i]<<"|";
	}

	return 0;

	cout<< endl;
	sort(x , x+c);
	h1=0, h2=0;
	for(i=0;i<c;i++)
	{
		if(i%2==0)
			arr1[h1++]=x[i];
		else
			arr2[h2++]=x[i];
		
	}
	sum1= sum(arr1, h1);
	sum2= sum(arr2, h2);
	sumx= sum(x , c);
	if(sumx%2==0)
	avg=sumx/2;
	else
	avg=sumx/2+1;
	diff= abs(sum2-sum1);

	if( sum2> sum1)
	{
		index=closeNo(arr2, h2, diff);
		arr1[h1++]=arr2[index];
		arr2[index]=0;
	}
	else
	{
		index=closeNo(arr1, h1, diff);
		arr2[h2++]=arr1[index];
		arr1[index]=0;
	}
	cout<<endl;

	cout<<sum(arr1, h1);
	cout<<sum(arr2, h2);
	return 0;
	
}