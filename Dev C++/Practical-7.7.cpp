#include<stdio.h>

int main()
{
	float C,F;
	printf("\n Enter The Temperature in Celsius :");
	scanf("%f",&C);
	F = (1.8*C) + 32;
	printf("\n %.2f Celsius = %.2f Fahrenheit",C,F);
	return 0;
}
