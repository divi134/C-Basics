#include<stdio.h>
main()
{
	int s,area,perimeter;
	printf("enter side length of square:");
	scanf("%d",&s);
	area=s*s;
	perimeter=4*s;
	printf("\narea=%d",area);
	printf("\nperimeter=%d",perimeter);
}
