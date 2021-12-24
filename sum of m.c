#include<stdio.h>
main()
{
	int a,b,l,n,sum;
	printf("enter two integers:");
	scanf("%d%d",&a,&b);
	n=b/a;
	l=a*n;
	sum=n*(a+l)/2;
	printf("\nsum=%d",sum);
}
