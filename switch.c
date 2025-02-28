#include<stdio.h>
int main()
{
	int number=0;
	printf("Enter a number:");
	scanf("%d",&number);
	switch(number)
	{
		case 10:
		printf(" Number is equal to 10");
		break;
		case 50:
		printf("Number is equal to 50");
		break;
		case 100:
		printf("Number is equal to 100");
	    break;
	    default:
	    printf("Number is not equal to 100,10 and 50");
	}
return 0;
}
