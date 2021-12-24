#include<stdio.h>
main()
{
	int x,y,l,n,sum;
	printf("enter two integers:");
	scanf("%d%d",&x,&y);
	n=y/x;
	l=x*n;
	sum=n*(x+l)/2;
	printf("\nsum=%d",sum);
}
