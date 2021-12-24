#include<stdio.h>
main()
{
	int cp,sp;
	printf("Enter cp,sp:");
	scanf("%d%d",&cp,&sp);
	if(sp>cp)
	{
		printf("Profit");	
	}
	else
	{
		printf("Loss");
	}
}
