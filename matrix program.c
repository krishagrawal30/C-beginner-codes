#include<stdio.h>
void main()
{
	int arr[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter arr[%d][%d]:",i,j);
			scanf("\n%d",&arr[i][j]);
		}
	}
	printf("\n Printing the elements....\n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
	}
}
