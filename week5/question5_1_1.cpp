#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
	if(n==0||n==1)
		return n;
	else
	{
		int fibo=fibonacci(n-2)+fibonacci(n-1);
		return fibo;
	}
}

int main()
{
	int num;
	cin>>num;
	cout<<fibonacci(num);
	return 0;
}
