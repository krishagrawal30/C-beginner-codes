#include<stdio.h>
int main()
{
	int arr[10];
	int p[10]=&arr;
	printf("Address of 'arr' variable is: %x\n",arr);
	printf("Value p variable is %d\n", p);
	return 0;
}
