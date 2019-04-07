#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j;
	int a[5][5]={{4,8,3,6,1},{9,7,2,5,11},{5,9,2,4,1},{7,1,3,6,5},{4,1,2,4,5}};
	int min[6][6];
	for(i=0;i<6;i++)
		for(j=0;j<6;j++)
			min[i][j]=0;
	
	min[0][0]=a[0][0];
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			if(min[i][j+1]<min[i][j]+a[i][j+1])
				min[i][j+1]=min[i][j]+a[i][j+1];
			if(min[i+1][j]<min[i][j]+a[i+1][j])
				min[i+1][j]=min[i][j]+a[i+1][j];
		}
	}
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<min[i][j]<<" ";
		}
		cout<<endl;
	}
	i=4,j=4;
	cout<<endl;
	while(i!=0||j!=0)
	{
		if(min[i][j]==(min[i][j-1]+a[i][j]))
		{
			cout<<"("<<i<<","<<j<<","<<a[i][j]<<")"<<"<--";
			i=i;
			j=j-1;
		}
		else
		{
			cout<<"("<<i<<","<<j<<","<<a[i][j]<<")"<<"<--";
			i=i-1;
			j=j;
		}
	}
	cout<<"("<<i<<","<<j<<","<<a[i][j]<<")"<<"<--"<<endl;
}
