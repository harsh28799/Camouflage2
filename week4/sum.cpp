#include<bits/stdc++.h>
using namespace std;

int num;

int power()
{
	int pow=1;
	int ans=pow;
	for(;;)
	{
		pow=pow*2;
		if(pow<=num)
		{	
			ans=pow;
			continue;
		}
		else
		{
			num=num-ans;
			return ans;
		}
	}
}

int main()
{
	std::cin>>num;
	while(num>0)
	{
		int p=power();
		cout<<p<<"	";
	}
	return 0;
}
