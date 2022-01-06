#include<stdio.h>
main()
{
	int n, i=1, product;
	scanf("%d",&n);
	while(i<=n)
	{
		product*=i;
		i++;
	}
	printf("%d",product);
}
