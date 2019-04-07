#include<bits/stdc++.h>
using namespace std;

int a[100][100];

int trace=0;

int main()
{
	int i,j;
	int num;
	cin>>num;
	
	for(i=0;i<=num;i++)
	{
		for(j=0;j<=i;j++)
		{	
			int ans;
			if(j==0)
				ans=1;
			else if(i==j)
				ans=1;
			else
				ans=a[i-1][j-1]+a[i-1][j];
			a[i][j]=ans;
		}
	}

	for(i=0;i<=num;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
