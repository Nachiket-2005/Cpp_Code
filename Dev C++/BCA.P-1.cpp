#include<stdio.h>
int main()
{
	int a,b;
	printf("\nEnter side of square: ");
	scanf("%d",&a);
	printf("Area = %d",a*a);
	printf("\n Perimeter = %d",4*a);
	printf("\nEnter length of Rectangle: ");
	scanf("%d",&a);
	printf("\nEnter Breath of rectangle:");
	scanf("%d",&b);
	printf("\n Area = %d",a*b);
	printf("\nperimeter = %d",2*(a+b));
	return 0;
}
