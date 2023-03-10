#include<stdio.h>
#include<string.h>
int main()
{
	char s[10]="Dinesh";
	char *ip;
	ip=&s;
	printf("Enter the address:%u",&s);
	printf("Enter the address:%u",ip);
	printf("Value:%s",*ip);
	printf("Value:%s",s);
	return 0;
}
