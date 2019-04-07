#include<bits/stdc++.h>
using namespace std;

int arr[100];

int fibonacci(int n)
{	
	if(n==0||n==1)
		return n;
	else
	{
		if(arr[n]==0)
		{
			arr[n-2]=fibonacci(n-2);
			arr[n-1]=fibonacci(n-1);
			arr[n]=arr[n-2]+arr[n-1];
			return arr[n];
		}
		else
			return arr[n];
	}
}

int main()
{
	int i;
	int num;
	cin>>num;
	for(i=0;i<=num;i++)
		arr[i]=0;
	cout<<fibonacci(num);
	return 0;
}
