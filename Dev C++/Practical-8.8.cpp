#include<stdio.h>

int main()
{
	float u,a,d;
	int t;
	printf("\n Enter value of a :");
	scanf("%f",&a);
	printf("\n Enter value of u :");
	scanf("%f",&u);
	printf("\n Enter value of t :");
	scanf("%d",&t);
	d = (u * t) + (a * t * t)/2;
	printf("\n The Distance : %f",d);
	return 0;
}
