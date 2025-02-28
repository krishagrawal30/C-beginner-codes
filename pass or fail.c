#include<stdio.h>
void main()
{
	int marks;
	printf("Enter your marks:");
	scanf("%d",marks);
	if(marks>85&&marks<=100)
	{
		printf("Congratulations! you scored grade A... ");
	}
	else if(marks>60&&marks<=85)
	{
		printf("You have scored grade B...");
	}
	else if(marks>40&&marks<=60)
	{
		printf("You got grade C...");
	}
	else if(marks>30&&marks<=40)
	{
		printf("You got grade D...");
	}
	else
	{
		printf("Sorry! you are fail...");
	}
	getch();
}
