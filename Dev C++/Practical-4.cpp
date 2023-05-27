#include<stdio.h>

int main()
{
	int n;
	float p,r,I;
	printf("\n Enter Amount :");
	scanf("%f",&p);
	printf("\n Enter No of Year :");
	scanf("%d",&n);
	printf("\n Enter Rate :");
	scanf("%f",&r);
	I= (p*r*n)/100.0;
	printf("\n Interest = %.2f",I);
	return 0;
}
