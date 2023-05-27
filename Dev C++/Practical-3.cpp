#include<stdio.h>

int main()
{
	int h,b;
	float a;
	printf("\n Enter Height :");
	scanf("%d",&h);
	printf("\n Enter Base :");
	scanf("%d",&b);
	a=h*b*0.5;
	printf("\nThe Area Of Triangle : %.10f",a);
	return 0;
}
