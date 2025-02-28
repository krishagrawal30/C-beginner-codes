#include<stdio.h>
void main()
{
	int number=10;
	int *p;
    int **pp;
	p=&number;
	pp=&p;
	printf("Address of number is %x\n",p);
	printf("Address of p is %x\n",pp);
	printf("Value stored at p  is %d\n",*p);
	printf("Value stored at  pp is %d\n",**pp);
	getch();
	
}
