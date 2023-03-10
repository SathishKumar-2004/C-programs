#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],m,n,p,q,i,j;
	printf("Enter the rows and cols of 1st matrix");
	scanf("%d%d",&m,&n);
	printf("Enter the rows and cols of 2nd matrix");
	scanf("%d%d",&p,&q);
	if(m==p&&n==q)
	{
		printf("Enter the elements of matrix 1:");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter the elements of the matrix 2:");
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
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		printf("The sum of 2 matrices is :\n");	
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
			printf("%d\t",c[i][j]);	
			}
			printf("\n");
		}	
	}
	else
	printf("the matrices cannot be added");
	return 0;
}
