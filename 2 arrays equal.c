#include<stdio.h>
int main()
{
	int a[10],b[10],n,m,i,j;
	printf("Enter the size of array 1:");
	scanf("%d",&n);
	printf("Enter the values of array1:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("Enter the size of array 2:");
	scanf("%d",&m);
	printf("Enter the values of the array 2:");
	for(j=0;j<m;j++){
	scanf("%d",&a[j]);
	}
	if(i==j){
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(a[i]=b[j])
				{
				printf("The array elements are equal\n");
			}
			else
			printf("The array elements are not equal\n");
		}
	}
}
	else
	printf("The array size not equal");
	return 0;
	
}
