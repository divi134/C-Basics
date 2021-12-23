#include<stdio.h>
main()
{
	int a,h,m;
	printf("input:");
	scanf("%d",&a);
	h=a/60;
	m=a%60;
	printf("\n%d h and %d m",h,m);
}
