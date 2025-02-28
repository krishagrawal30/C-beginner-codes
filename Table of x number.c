#include<stdio.h>
void main()
{
	int i, number;
	printf("Enter a number : ");
	scanf("%d",&number);
	for(i=number;i--;)
	{
	
		printf("%d\n",(number*i--));
		if(i=0)
		{
			break;
		}
	}

	
	getch();
}
