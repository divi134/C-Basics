#include<stdio.h>
main()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if(age>18)
	{
		printf("You can vote");
	}
	else
	{
		printf("You cannot vote");
	}
	
}
