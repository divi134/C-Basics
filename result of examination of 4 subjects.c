#include<stdio.h>
void main()
{
	int M,P,C,CS;
	printf("Enter marks:");
	scanf("%d%d%d%d",&M,&P,&C,&CS);
	if(M>35 && P>35 && C>35 && CS>35)
	{
		printf("Pass");
	}
	else
	{
		printf("Fail");
	}
}
