#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,k;
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int b[3][3]={{1,2,3},{2,3,4},{3,4,5}};
	int ans[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			for(k=0;k<3;k++)
				ans[i][j]+=a[i][k]*b[k][j];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
