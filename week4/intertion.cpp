#include<bits/stdc++.h>
using namespace std;

int intertion(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0&&a[j]>temp)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	return 0;
}

int main()
{	
	int i;
	int a[]={34,26,987,74,92,98,2,627,23};	
	intertion(a,9);
	for(i=0;i<9;i++)
		cout<<a[i]<<" ";
	return 0;
}
