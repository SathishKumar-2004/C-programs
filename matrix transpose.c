#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],trans[10][10],m,n,i,j;
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
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
			trans[j][i]=a[i][j];	
			}
		}
		printf("The transpose of the matrix is \n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",trans[i][j]);
			}
			printf("\n");
		}
	return 0;
}
