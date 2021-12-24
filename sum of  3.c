#include<stdio.h>
main()
{
	int a,c,n1,l1,sum1;
	printf("enter two integers:");
	scanf("%d%d",&a,&c);
	n1=c/a;
	l1=a*n1;
	sum1=n1*(a+l1)/2;
	printf("\nsum1=%d",sum1);
}

