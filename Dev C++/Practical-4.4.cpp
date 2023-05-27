#include<stdio.h>
int main()
{
	int n;
	float p,r,I;
	printf("\n Enter Amount :");
	scanf("%f",&p);
	printf("\n Enter Rate of Interest :");
	scanf("%f",&r);
	printf("\n Enter No of Year :");
	scanf("%d",&n);
	I = (p*r*n)/100.0;
	printf("\n Interest : %f",I);
	return 0;
}
