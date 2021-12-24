#include<stdio.h>
main()
{
	float p,t,r,s;
	printf("enter p,t,r:");
	scanf("%f%f%f",&p,&t,&r);
	s=(p*t*r)/100;
	printf("\ns=%.2f",s);
}
