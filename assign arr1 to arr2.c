#include<stdio.h>
int main()
{
	int a[10],b[10],i,n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	printf("The values of array 2:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}
	return 0;
}
