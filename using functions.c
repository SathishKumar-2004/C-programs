#include<stdio.h>
int sk(int a,int b);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	sk(a,b);
	return 0;
}
int sk(int a,int b)
{
	int c;
	c=a+b;
	printf("the sum is %d",c);
}
