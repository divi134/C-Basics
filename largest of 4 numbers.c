#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("4 distinct munbers");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b && a>c && a>d)
	{
		printf("\n%d",a);
	}
	else if(b>a && b>c && b>d)
	{
		printf("\n%d",b);
	}
	else if(c>a && c>b && c>d)
	{
		printf("\n%d",c);
	}
	else
	{
		printf("\n%d",d);
	}
}
