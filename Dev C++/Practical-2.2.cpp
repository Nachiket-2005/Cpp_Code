#include<stdio.h>

int main()
{
	int num1,num2,add,sub,multi;
	float div;
	printf("Enter num1 : \n");
	scanf("%d",&num1);
	printf("Enter num2 : \n");
	scanf("%d",&num2);
	add = num1 + num2;
	sub = num1 - num2;
	multi = num1 * num2;
	div = num1/num2;
	printf("\n Addition = %d",add);
	printf("\n Substraction = %d",sub);
	printf("\n Multiplication = %d",multi);
	printf("\n Division = %f",div);
	return 0;
	
}
