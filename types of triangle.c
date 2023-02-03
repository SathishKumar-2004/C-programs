#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the sides of the triangle :");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c)
	printf("It is an Equilateral Triangle");
	else if(a==b&&b!=c||a==c&&c!=b||b==c&&c!=a)
	printf("It is an Isoceles Triangle");
	else
	printf("It is a Scalane Triangle");
	return 0;
}
