#include<stdio.h>
void main()
{
	int number=0;
	printf("Enter the number:");
	scanf("%d",&number);
	if(number%2==0)
	{
		printf("%d is an even number",number);
	}
	else
	{
		printf("%d is an odd number",number);
	}
	getch();
}
