#include<stdio.h>
int main()
{
	int a[5],n,i,large,small;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	large=a[0];
	small=a[0];
	for(i=1;i<n;i++)
	{
		if(large<a[i])
		large=a[i];
		if(small>a[i])
		small=a[i];
	}
	printf("The largest value is %d\n",large);
	printf("The smallest value is %d\n",small);
	return 0;
}
