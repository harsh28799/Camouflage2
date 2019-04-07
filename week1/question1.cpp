#include<bits/stdc++.h>
using namespace std;

int num;

int power()
{
	int pow=1;
	int ans=pow;
	while(pow<=num)
	{
		ans=pow;
		pow=pow*2;
	}
	num=num-ans;
	return ans;
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
