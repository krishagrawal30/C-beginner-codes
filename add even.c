#include<stdio.h>
int main()
{
	int i,sum=0;
	printf("The even numbers are:\t",i);
	for(i=0;i<=101;i++)
	{
		
		if(i%2==0)
		{
			printf("  %d",i);
			sum=sum+i;
		}
	}
	printf("\n THE ADDITION OF EVEN NUMBERS:%d",sum);
	return 0;
}
