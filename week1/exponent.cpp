#include<bits/stdc++.h>
using namespace std;

int power(int b,int e)
{
	if(e>0)
	{
		int n=e/2;
		int p=power(b,n);
		if(e==2*n)
			return p*p;
		else
			return p*p*b;
	}
	else return 1;
}

int main()
{
	int base,exponent;
	cout<<"enter the base and exponent"<<endl;
	cin>>base>>exponent;
	cout<<"THe result is "<<power(base,exponent);
	return 0;
}
