#include<stdio.h>
int main()
{
	int a,b,c,result;
	printf("Enter the value of a,b,c:");
	scanf("%d%d%d\n",&a,&b,&c);
	result=(a==b)&&(c>b);
	printf("(a==b)&&(c>b)is %d\n",result);
	result=(a==b)&&(c<b);
	printf("(a==b)&&(c<b)is %d\n",result);
	result=(a==b)||(c>b);
	printf("(a==b)||(c>b)is %d\n",result);
	result=(a==b)||(c<b);
	printf("(a==b)||(c<b)is %d\n",result);
	result=(a!=b)&&(c>b);
	printf("(a!=b)&&(c>b)is %d\n",result);
	result=!(a!=b)&&(c>b);
	printf("!(a!=b)&&(c>b)is %d\n",result);
	result=!(a==b)&&(c>b);
	printf("!(a==b)&&(c>b)is %d\n",result);
	return 0;
}
