#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],m,n,p,q,i,j,k;
	printf("Enter the rows and cols of matrix 1:\n");
	scanf("%d%d",&m,&n);
	printf("Enter the rows and cols of matrix 2:\n");
	scanf("%d%d",&p,&q);
	if(m==q)
	{
	printf("Enter the values of matrix 1:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		}
	printf("Enter the values of matrix 2:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<p;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
		printf("the product of the matrices is :\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
}
	else
	printf("the matrices cannot be multiplied");
	return 0;
}
