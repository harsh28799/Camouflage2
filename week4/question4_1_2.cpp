#include<bits/stdc++.h>
int arr[1000];
using namespace std;
int constraint;

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

int divide(int a[],int start,int end)
{
		if(end-start+1<=constraint)
		{		
			int i,j,temp;
			int n=end-start+1;
			for(i=1;i<n;i++)
			{
				temp=a[i];
				j=i-1;
				while(j>=0&&a[j]>temp)
				{
					a[j+1]=a[j];
					j=j-1;
				}
				a[j+1]=temp;
			}
		}
		else
		{
			int mid=(start+end)/2;
			divide(a,start,mid);
			divide(a,mid+1,end);
			merge(a,start,end,mid);
		}
}

int main()
{
	int l;
	int num=10;
	int i;
	for(l=10;l<=1000;l*=10)
	{
		constraint=log(l);
		for(i=0;i<l;i++)
			arr[i]=rand()%1000+1;
		divide(arr,0,l-1);
		cout<<endl<<"The final array is"<<endl;
		for(i=0;i<l;i++)
			cout<<arr[i]<<"	";		
	}
}
