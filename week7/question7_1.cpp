#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,t;
	cin>>s;
	cin>>t;
	int m = s.length();
	int n = t.length();
	
	int arr[n+1][m+1];
	
	int i,j;

	for(i=0;i<=m;i++)
		arr[0][i]=i;

	for(i=0;i<=n;i++)
		arr[i][0]=i;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(t[i-1]==s[j-1])
			{
				arr[i][j]=arr[i-1][j-1];
			}
			else 
			{
				arr[i][j]=1+min(arr[i-1][j-1],min(arr[i-1][j],arr[i][j-1]));
			}
		}
	}

	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	i=n,j=m;
	while(i!=0&&j!=0)
	{
		if(t[i-1]==s[j-1])
		{
			cout<<s[j-1]<<" aligned"<<endl;
			i--;
			j--;
		}
		else
		{
			if(arr[i][j]==arr[i-1][j-1]+1)
			{
				cout<<s[j-1]<<" exchanged "<<t[i-1]<<endl;
				i--;
				j--;
			}
			else if(arr[i][j]==arr[i-1][j]+1)
			{
				cout<<t[i-1]<<" inserted"<<endl;
				i--;
			}
			else
			{
				cout<<s[j-1]<<" deleted"<<endl;
				j--;
			}
		}
	}

	return 0;
}
