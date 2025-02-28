#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter value of a & b:");
	scanf("%d%d\n",&a,&b);
	c=a&b;
	printf("Line 1 - Value of c is %d\n",c);
	c=a|b;
	printf("Line 2 - Value of c is %d\n",c);
	c=a^b;
	printf("Line 3 - Value of c is %d\n",c);
	c=~a;
	printf("Line 4 - Value of c is %d\n",c);
	c=~b;
	printf("Line 5 - Value of c is %d\n",c);
	getch();
}
