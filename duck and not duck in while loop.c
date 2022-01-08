//Duck number is a number which contains '0' in it irrespective to any number of digits.
#include<stdio.h>
main()
{
	int n,r,is_duck=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r==0)
		{
			is_duck=1;
			break;
		}
		n=n/10;
	}
	if(is_duck==1)
	{
		printf("Duck number");
	}
	else
	{
		printf("Not a duck number");
	}
}
