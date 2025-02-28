#include<stdio.h>
void main()
{
	int age;
	printf("Enter the age:");
	scanf("%d",&age);
	(age>=18)?(printf("Eligible for voting")):(printf("Not eligible for voting"));
	getch();
}
