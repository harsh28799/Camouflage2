#include<bits/stdc++.h>
using namespace std;

int main()
{
	int amount=11;
	int coins[]={1,5,6,9};
	int min[amount+1];
	min[0]=0;
	int i,j;
	for(i=1;i<=amount;i++)
	{
		min[i]=1000000;
		for(j=0;j<=3;j++)
		{
			if(i>=coins[j])
			{
				int numcoins=min[i-coins[j]]+1;
				if(numcoins<min[i])
				{
					min[i]=numcoins;
				}
			}
		}
	}
	cout<<endl<<"Minimum no of coins required : "<<min[amount];
	return 0;
}
