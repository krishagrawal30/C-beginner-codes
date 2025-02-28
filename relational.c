#include<stdio.h>
int main ()
{
	int a,b,c;
	printf("The value of a & b & c is:");
	scanf("%d%d%d\n",&a,&b,&c);
	printf("%d==%d is %d\n",a,b,a==b);
	printf("%d==%d is %d\n",a,c,a==c);
	printf("%d<%d is %d\n",a,b,a<b);
	printf("%d<%d is %d\n",a,c,a<c);
	printf("%d>%d is %d\n",a,b,a>b);
	printf("%d>%d is %d\n",a,c,a>c);
	printf("%d!=%d is %d\n",a,b,a!=b);
	printf("%d!=%d is %d\n",a,c,a!=c);
	printf("%d<=%d is %d\n",a,b,a<=b);
	printf("%d<=%d is %d\n",a,c,a<=c);
	printf("%d>=%d is %d\n",a,b,a>=b);
	printf("%d>=%d is %d\n", a,c,a>=c);
	return 0;
}

