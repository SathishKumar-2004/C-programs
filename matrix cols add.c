#include<stdio.h>
int main()
{
	int a[10][10],sum,m,n,i,j;
	printf("Enter the rows and cols of 1st matrix");
	scanf("%d%d",&m,&n);
	printf("Enter the elements of matrix 1:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of the matrix are:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("the sum of the cols in the matrix is :\n");
	sum=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			sum=sum+a[j][i];
		}
		printf("\nThe sum of cols %d is %d",i+1,sum);
		sum=0;
		}
		return 0;
	}
