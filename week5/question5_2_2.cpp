#include<bits/stdc++.h>
using namespace std;

int a[100][100];

int trace=0;

int fill(int m,int n)
{
	cout<<trace++<<"F("<<m<<","<<n<<")"<<endl;
	if(a[m][n]==1)
		return a[m][n];
	else
	{
		a[m][n]=fill(m-1,n-1)+fill(m-1,n);
		return a[m][n];
	}
}

int main()
{
	int i,j;
	int num;
	cin>>num;
	for(i=0;i<num+1;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j==0)
				a[i][j]=1;
			else if(i==j)
				a[i][j]=1;
			else
				a[i][j]=0;
		}
	}

	for(i=1;i<num;i++)
	{
		fill(num,i);
	}	

	for(i=0;i<num+1;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
