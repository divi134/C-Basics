//finding whether the given number is prime or composite by finding the factors upto number/2
#include<stdio.h>
main()
{
	int n,i,fc=0;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			fc++;
			break;
		}
	}
	if(fc==0)
	{
		printf("Prime");
	}
	else
	{
		printf("Composite");
	}
}
