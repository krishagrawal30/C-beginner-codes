#include<stdio.h>
void change(int *num)
{
	printf("Before adding value inside function num = %d\n",*num);
	(*num)+=100;
	printf("After adding value inside function num = %d\n",*num);
}
int main()
{
	int x=100;
	printf("Before funcion call x=%d\n",x);
	change(&x);
	printf("After funcion call x=%d\n",x);
	return 0;
}
