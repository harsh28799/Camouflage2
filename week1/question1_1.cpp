#include<bits/stdc++.h>
using namespace std;

int num;

int power(int ans)
{
	if(ans<=num)
	{
		power(ans*2);
		if(ans<=num)
		{
			cout<<ans<<"	";
			num=num-ans;
		}
	}
	else
		return 0;
}

int main()
{
	cin>>num;
	power(1);
	return 0;
}

