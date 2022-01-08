//the continue function skips the digits which satisfies the given condition
#include<stdio.h>
main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			continue;
		}
		printf("%d ",i);
	}
}
