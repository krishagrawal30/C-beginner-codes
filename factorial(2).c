#include<stdio.h>
void main()
{
	int i, number,f=1;
	printf("Enter a number : ");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		f=f*i;
		
	}
       printf("\n factorial=%d",f);
	
	getch();
}





