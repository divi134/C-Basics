#include<stdio.h>
main()
{
	int i=1, n, sum=0;
	scanf("%d",&n);
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("%d",sum);
}
