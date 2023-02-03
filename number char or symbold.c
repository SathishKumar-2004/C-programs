#include<stdio.h>
int main()
{
	char a;
	printf("Enter something:");
	scanf("%c",&a);
	if(a>='a'&&a<='z'||a>='A'&&a<='Z')
	printf("%c is a Character",a);
	else if(a>='0'&&a<='9')
	printf("%c is a Number",a);
	else
	printf("%c is a Special Character",a);
	return 0;
}
