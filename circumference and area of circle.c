#include<stdio.h>
main()
{
	float r,area,c,pi;
	pi=3.14;
	printf("Enter radius of circle:");
	scanf("%f",&r);
	area=pi*r*r;
	c=2*pi*r;
	printf("\narea=%.2f",area);
	printf("\nc=%.2f",c);
}
