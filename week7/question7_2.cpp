#include<bits/stdc++.h> 
using namespace std; 

int arr[100][100];

int cost=0;  

int min(int x, int y, int z) 
{ 
   return min(min(x, y), z); 
} 
  
int editDist(string str1 , string str2 , int m ,int n) 
{ 
	cout<<"E("<<m<<","<<n<<")"<<endl;
	arr[m][n]++;
	
    	if (m == 0 && n==0) return 0;
	else if(m==0)
	{
		cost=editDist(str1,str2,0,n-1)+1;
		cout<<"Insert "<<str2[n]<<endl;
		return cost;	
	} 
	else if(n==0)
	{
		cost=editDist(str1,str2,m-1,0)+1;
		cout<<"Delete "<<str1[m]<<endl;
		return cost;	
	} 
	else if(str1[m]==str2[n])
	{
		cost=editDist(str1,str2,m-1,n-1);
		cout<<"Aligned "<<str1[m]<<"-->"<<str2[n]<<endl;
		return cost;	
	} 
	else
	{
		return min( editDist(str1,  str2, m, n-1)+1,    
   		            editDist(str1,  str2, m-1, n)+1, 
                     	    editDist(str1,  str2, m-1, n-1)+1); 
	} 
	return cost;    
} 
  
int main() 
{     
	string str1; 
    	string str2;
	cin>>str1>>str2;
	int m=str1.length();
	int n=str2.length();
	int i,j;
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			arr[i][j]=0;
		}
	} 
    	cout << editDist( str1 , str2 , str1.length(), str2.length()); 
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			cout<<arr[i][j]<<"	";
		}
		cout<<endl;
	}
	cout<<endl<<"cost"<<cost<<endl; 
	return 0; 
} 

