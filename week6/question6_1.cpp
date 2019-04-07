#include<bits/stdc++.h>
using namespace std;

int main()
{
	int coins[]={1,2,5,10,20,50,100,500,1000};
	int size=3;
	int coins2[]={1,5,6,9};
	vector <int> change;
	int amount=11;
	while(amount>0)
	{
		int i=size;
		for(;i>=0;i--)
		{
			if(coins2[i]<=amount)
				break;
			else
				continue;
		}
		change.push_back(coins2[i]);
		amount=amount-coins2[i];
	}
	cout<<endl;
	int i;
	for(i=0;i<change.size();i++)
		cout<<change[i]<<" ";
	cout<<"The minimum no of coins required is : "<<change.size()<<" ";
	return 0;
} 
