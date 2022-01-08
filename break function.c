//break function breaks the loop even if single number satisfies the given condition
#include<stdio.h>
main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
		break;
	}
}
