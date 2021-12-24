#include<stdio.h>
main()
{
	int a=10,b=4,c=2;
	a+=b;
	b*=c;
	c*=a;
	b*=a;
	b-=c;
	a/=c;
	printf("%d %d %d",b,c,a);
}
