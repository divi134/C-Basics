#include<stdio.h>
main()
{
	int a,b,c;
	printf("\nRead two values a,b");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("/n%d %d",a,b);
}
