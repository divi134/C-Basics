#include<stdio.h>
main()
{
	int l,b,a,p;
	printf("enter length and breadth:");
	scanf("%d%d",&l,&b);
	a=l*b;
	p=2*(l+b);
	printf("\na=%d",a);
	printf("\np=%d",p);
}
