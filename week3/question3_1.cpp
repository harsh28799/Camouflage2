#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=0,j=0;
	int z;

	
	int m=rand()%10+1;
	int n=rand()%10+1;

	int a1[m];
	int a2[n];	

	for(z=0;z<m;z++)
	{
		int w=rand()%100+1;
		cout<<w<<" ";
		a1[z]=w;
	}cout<<endl;

	for(z=0;z<n;z++)
	{
		int w=rand()%100+1;
		cout<<w<<" ";
		a2[z]=w;
	}cout<<endl;

	sort(a1,a1+m);
	sort(a2,a2+n);

	for(z=0;z<m;z++)
	{
		cout<<" "<<a1[z];
	}cout<<endl;

	for(z=0;z<n;z++)
	{
		cout<<" "<<a2[z];
	}cout<<endl;

	//int a1[]={1,4,6,8};
	//int a2[]={1,4,6,7,8,9};

	int add[100],common[100],diff[100],prod[100][2],comp[100],sdiff[100],sub,super,disjoint;
	int a=0,c=0,d=0,p=0,l=0,s=0;
	
	//int m=sizeof(a1)/sizeof(int);
	//int n=sizeof(a2)/sizeof(int);

	while(i<m&&j<n)
	{
		if(a1[i]<a2[j])
		{	
			int ele1=a1[i++];
			add[a++]=ele1;	//union
			diff[d++]=ele1;	//difference
			sdiff[s++]=ele1; //symmetric difference 	
		}
		else if(a1[i]>a2[j])
		{
			int ele2=a2[j++];
			add[a++]=ele2;	//union
			sdiff[s++]=ele2; //symmetric difference
		}
		else
		{
			common[c++]=a1[i]; //intersection
			add[a++]=a1[i];	//union
			i++;
			j++;
		}
	}
	if(i<m)
	{
		while(i<m)
		{
			int ele=a1[i++];
			add[a++]=ele;
			diff[d++]=ele;
			sdiff[s++]=ele;
		}
	}
	if(j<n)
	{
		while(j<n)
		{
			int ele=a2[j++];
			add[a++]=ele;
			sdiff[s++]=ele;
		}
	}
	
	
	
	int k=0;




	cout<<endl<<"1--------------------UNION--------------------"<<endl;
	for(k=0;k<a;k++)
		cout<<add[k]<<"	";
	cout<<endl<<"CARDINALITY"<<a;




	cout<<endl<<"2-------------------INTERSECTION--------------------"<<endl;
	for(k=0;k<c;k++)
		cout<<common[k]<<"	";



	cout<<endl<<"3-------------------DIFFERENCE--------------------"<<endl;
	for(k=0;k<d;k++)
		cout<<diff[k]<<"	";




	cout<<endl<<"4-------------------CARTESIAN PRODUCT--------------------"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			prod[p++][0]=a1[i];
			prod[p++][0]=a2[j];
			cout<<"("<<a1[i]<<","<<a2[j]<<")";
		}
		cout<<endl;
	}




	cout<<endl<<"5-------------------CARDINALITY OF A COMPLEMENT-----------------------"<<endl;
	for(i=1;i<99;i++)
	{
		if(binary_search(a1,a1+m,i))
			continue;
		else 
		{
			l++;
		}			
	}
	cout<<l+1;





	cout<<endl<<"6-------------------SYMMETRIC DIFFERENCE--------------------"<<endl;
	for(k=0;k<s;k++)
		cout<<sdiff[k]<<"	";




	cout<<endl<<"7-------------------CARDINALITY OF A--------------------"<<endl;
	cout<<m<<"	";




	int flag=0;
	cout<<endl<<"8-------------------A subset B?-----------------------"<<endl;
	for(i=0;i<m;i++)
	{
		if(binary_search(a2,a2+n,a1[i]))
			continue;
		else 
		{
			flag=1;
			cout<<"NO"<<endl;
			break;
		}			
	}
	if(flag==0)
		cout<<"YES"<<endl;




	flag=0;
	cout<<endl<<"9-------------------B subset A?-----------------------"<<endl;
	for(i=0;i<n;i++)
	{
		if(binary_search(a1,a1+n,a2[i]))
			continue;
		else 
		{
			flag=1;
			cout<<"NO"<<endl;
			break;
		}			
	}
	if(flag==0)
		cout<<"YES"<<endl;




	cout<<endl<<"11------------------DISJOINT SETS?--------------------"<<endl;
	if(sizeof(common)/sizeof(int)==0)
		cout<<endl<<"YES"<<endl;
	else
		cout<<endl<<"NO"<<endl;




	cout<<endl<<"10------------------POWER SET-------------------------"<<endl;
	int f,g;	
	int set[]={1,2,3};
	cout<<"{}"<<endl;
	for(i=0;i<3;i++)
		cout<<"{"<<set[i]<<"}";
	cout<<endl;	
	for(f=0;f<3;f++)
	{
		for(g=f+1;g<3;g++)
		{
			cout<<"{"<<set[f]<<","<<set[g]<<"}";
		}
	}
	cout<<endl;
	cout<<"{"<<set[0]<<","<<set[1]<<","<<set[2]<<"}";




	
	return 0;
}
