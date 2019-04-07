#include<stdio.h>

main()
{
	int n;
	printf("Enter limit : ");
	scanf("%d",&n);
	powers_2(1,n);
}
int powers_2(int a,int n)
{
	if(a<n)
	{
		powers_2(a*2,n);
		printf("%d ",a);
	}

	
}
