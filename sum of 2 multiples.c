#include<stdio.h>
main()
{
	int a,b,c,d,n1,l1,n2,l2,n3,l3,sum1,sum2,sum3,sum;
	printf("enter three integers:");
	scanf("%d%d%d",&a,&b,&c);
	n1=c/a;
	l1=a*n1;
	sum1=n1*(a+l1)/2;
	n2=c/b-1;
	l2=b*n2;
	sum2=n2*(b+l2)/2;
	d=a*b;
	n3=c/d;
	l3=d*n3;
	sum3=n3*(d+l3)/2;
	sum=(sum1+sum2)-sum3;
	printf("\nsum=%d",sum);
}
