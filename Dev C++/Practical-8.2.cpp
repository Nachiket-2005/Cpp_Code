#include<stdio.h>

int main()
{
	int Addition,Substraction, Multipication, Num1,Num2;
	float Division;
	printf("\n Enter Num1 :");
	scanf("%d",&Num1);
	printf("\n Enter Num2 :");
	scanf("%d",&Num2);
	Addition = Num1 + Num2;
	Substraction = Num1 - Num2;
	Multipication = Num1 * Num2;
	Division = Num1/Num2;
	printf("\n Addition = %d",Addition);
	printf("\n Substraction = %d",Substraction);
	printf("\n Multipication = %d",Multipication);
	printf("\n Division = %.2f",Division);
	return 0;
}


