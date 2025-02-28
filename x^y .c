#include<stdio.h>
int main()
{
	int x,y,c;
	printf("The value of x = ");
	scanf(x);
	printf("The value of y = ");
	scanf(y);
	if(y>0)
	{
	if(y>1)
	{
		c=x*x;
		for(int i=2;i<y;i++)
		{
			c=c*x;
		}
	}
	else if(y=1)
	{
		c=x;
	}
	printf("The value of x^y = %d",&c);
}
else
{
	printf("The value of x^y = 1");
}
	getch();
	return 0;
}
