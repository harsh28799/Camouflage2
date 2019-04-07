#include<bits/stdc++.h>
using namespace std;

vector <int> arr[10];

int main()
{
	int i;
	int num;
	cin>>num;
	int total=0;
	for(i=0;i<100;i++)
	{
		int a=rand()%100+1;
		cout<<a<<endl;
		arr[a%10].push_back(a);
	}
	cout<<"Directory	Size	Collision"<<endl;
	for(i=0;i<10;i++)
	{
		int len=arr[i].size();
		cout<<i<<"	    	"<<len<<"	"<<len-1<<endl;
		if(len>1)
			total=total+(len-1);
	}
	cout<<"The number of collisions were\t"<<total;
	return 0;
}
