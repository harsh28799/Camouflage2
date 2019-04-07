main()
{
	pow_2(27,0);
}
int pow_2(int n,int a)
{
	if(n>0)
	{
		int r=n%2;
		n=n/2;
		pow_2(n,a+1);
		printf("%d ",r*power(a));
	}
}
int power(int a)
{
	int i,c=1;
	for(i=0;i<a;i++)
		c=2*c;
	return c;
}
