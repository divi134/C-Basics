#include<stdio.h>
main()
{
	int a,b,c,d,e,f,g,h,i,j,k;
	printf("enter the value:");
	scanf("%d",&a);
	b=a/2000;
	a=a%2000;
	c=a/500;
	a=a%500;
	d=a/200;
	a=a%200;
	e=a/100;
	a=a%100;
	f=a/50;
	a=a%50;
	g=a/20;
	a=a%20;
	h=a/10;
	a=a%10;
	i=a/5;
	a=a%5;
	j=a/2;
	a=a%2;
	k=a/1;
	a=a%1;
	printf("\n%d Two thousand note",b);
	printf("\n%d Five hundred note",c);
	printf("\n%d Two hundred note",d);
	printf("\n%d One hundred note",e);
	printf("\n%d Fifty note",f);
	printf("\n%d Twenty note",g);
	printf("\n%d Ten note",h);
	printf("\n%d Five coin",i);
	printf("\n%d Two coin",j);
	printf("\n%d One coin",k);
	
}
