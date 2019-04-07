#include<bits/stdc++.h>
int arr[1000];
using namespace std;

void merge(int a[],int start,int mid, int end)
{
	int n;
	int b[end-start+1];
	int i=start,j=mid+1;
	int k=0;
	while(i<=mid&&j<=end)
	{
		if(a[i]<a[j])
		{
			b[k++]=a[i++];						
		}
		else if(a[i]>a[j])
		{
			b[k++]=a[j++];
		}
		else
		{
			b[k++]=a[j++];
		}
	}
	if(i<=mid)
	{
		while(i<=mid)
		{
			b[k++]=a[i++];
		}
	}
	if(j<=end)
	{
		while(j<=end)
		{
			b[k++]=a[j++];
		}
	}
	int l=0;
	for(n=start;n<=end;n++)
	{
		arr[n]=b[l++];
	}
}

void divide(int a[],int start,int end)
{
	if(start<end)
	{
		int mid=(start+end)/2;
		divide(a,start,mid);
		divide(a,mid+1,end);
		merge(a,start,mid,end);
	}
}

int main()
{
	int num;
	int i;
	cout<<"enter the number of elements"<<endl;
	cin>>num;
	cout<<"enter the elements"<<endl;
	for(i=0;i<num;i++)
		cin>>arr[i];
	divide(arr,0,num-1);
	cout<<"THe final array is"<<endl;
	for(i=0;i<num;i++)
		cout<<arr[i]<<"	";
	return 0;
}
