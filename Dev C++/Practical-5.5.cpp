#include<stdio.h>
int main()
{
	int a,b;
	printf("\n Enter value of A :");
	scanf("%d",&a);
	printf("\n Enter value of B :");
	scanf("%d",&b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("\n After Intechange values of A = %d B = %d",a,b);
	return 0;
	
}
