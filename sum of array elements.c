#include<stdio.h>
int main()
{
	int a[10],n,i,sum=0;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the values of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("The sum of the elements is %d",sum);
	return 0;
}
