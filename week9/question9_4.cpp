#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int a=s1.length();
	int b=s2.length();
	int arr[a+1][b+1];
	int i,j;	
	for(i=0;i<=a;i++)
	{
		for(j=0;j<=b;j++)
		{
			if(i==0||j==0)
				arr[i][j]=0;
			else if(s1[i-1]==s2[j-1])
				arr[i][j]=arr[i-1][j-1]+1;
			else
				arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
		}
	}
	cout<<endl;
	for(i=0;i<=a;i++)
	{
		for(j=0;j<=b;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	i=a;
	j=b;
	string ans="";
	while(i!=0&&b!=0)
	{
		if(arr[i][j]==arr[i-1][j-1]+1)
		{
			ans=s1[i-1]+ans;
			i--;
			j--;
		}
		else if(arr[i][j]==arr[i-1][j])
			i--;
		else 
			j--;
	}
	cout<<"The longest common subsequence is: "<<ans<<endl;
	cout<<"The length is: "<<arr[a][b]<<endl;
	return 0;
}
