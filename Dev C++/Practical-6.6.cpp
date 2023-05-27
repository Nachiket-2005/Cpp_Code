#include<stdio.h>

int main()
{
	float KM;
	printf("Enter length in KM :");
	scanf("%f",&KM);
	printf("\n %.2f KM = %.2f Meters",KM,KM*1000);
	printf("\n %.2f KM = %.2f Feets",KM,KM*3280.84);
	printf("\n %.2f KM = %.2f Inches",KM,KM*39370.08);
	printf("\n %.2f KM = %.2f Centimeters",KM,KM*1000*100);
	return 0;
	
}
