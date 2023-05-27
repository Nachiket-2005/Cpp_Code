#include<stdio.h>

int main()
{
	int num1,num2,add,sub,multi;
	float div;
	printf("Enter Number1 :\n");
	scanf("%d",&num1);
	printf("Enter Number2 :\n");
	scanf("%d",&num2);
	add = num1 + num2;
	sub = num1 - num2;
	multi = num1 * num2;
	div = num1/num2;
	printf("Addition = %d\n",add);
	printf("Substraction = %d\n",sub);
	printf("Multipication = %d\n",multi);
	printf("division = %f\n",div);
	return 0;
}

