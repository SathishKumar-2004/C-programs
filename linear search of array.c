#include<stdio.h>
int main()
{
	int a[10],i,s,n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the elements to be searched:");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			printf("The element %d is found in the position %d",s,i+1);
			break;
		}
	}
	if(i==n)
	{
	printf("The element is not found in the array");
	}
	return 0;
}
