#include<bits/stdc++.h>
using namespace std;

//int trace=0;

int fill(int i,int j)
{
	//cout<<trace++<<"F("<<i<<","<<j<<")"<<endl;
	if(j==0)
		return 1;
	else if(i==j)
		return 1;
	else
		return (fill(i-1,j-1)+fill(i-1,j));
}

int main()
{
	int i,j;
	int num;
	cin>>num;
	
	for(i=0;i<=num;i++)
	{	
		for(j=0;j<=i;j++)
		{
			cout<<fill(i,j)<<" ";
		}
		cout<<endl;
	}
}
