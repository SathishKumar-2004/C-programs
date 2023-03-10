#include<stdio.h>
int main()
{
	int a[10][10],i,j,n,m;
	printf("Enter the array dimension:\n");
	scanf("%d%d",&n,&m);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The array elements are:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
