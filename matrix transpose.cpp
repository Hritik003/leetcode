#include<stdio.h>
int main()
{
	int i,j,r,c,a[10][10];
	printf("\n enter the no of rows and columns?");
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	
	printf("the elements of transposed matric are: \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("% d",a[j][i]);
			
		}
		printf("\n");
	}
	return 0;
}
