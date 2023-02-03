#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,ar,rt1,rt2,real,img;
	printf("Enter the coefficients of the a,b,c");
	scanf("%lf%lf%lf",&a,&b,&c);
	ar=(b*b-4*a*c);
	if(ar>0)
	{
		rt1=(-b+sqrt(ar))/(2*a);
		rt2=(-b-sqrt(ar))/(2*a);
		printf("rt1=%.2lf and rt2=%.2lf",rt1,rt2);
	}
	else if(ar==0)
	{
		rt1=(-b+sqrt(ar))/(2*a);
		rt2=(-b-sqrt(ar))/(2*a);	
		printf("rt1=%.2lf and rt2=%.2lf",rt1,rt2);	
	}
	else
	{
		real=-b/(2*a);
		img=sqrt(-ar)/(2*a);
		printf("rt1=%.2lf+%.2lfi and rt2=%.2lf+%.2lfi",real,img,real,img);
	}
	return 0;
}
