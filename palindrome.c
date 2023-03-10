#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10],str2[10],i;
	printf("Enter the str1:\n");
	scanf("%s",&str1);
	strcpy(str2,str1);
	strrev(str2);
	i=strcmp(str2,str1);
	if(i==0)
	printf("%s is palindrome",str1);
	else
	printf("%s is  not palindrome",str1);
	return 0;	
}
