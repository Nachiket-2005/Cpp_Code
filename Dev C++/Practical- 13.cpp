/*Write a c program to prepare pay slip using following data.
Da = 10% of basic, Hra = 7.50% of basic, Ma = 300,
Pf = 12.50% of basic, Gross = basic + Da + Hra + Ma, Nt = Gross – Pf.*/
#include<stdio.h>
int main()
{
	float basic;
	printf("\n ENTER BASIC SALARY : ");
	scanf("%.2f",&basic);
	printf("\n           SALARY SLIP ");
	printf("\n ===========================");
	printf("\n Basic = %.2f",basic);
	printf("\n Da = %.2f",basic*0.10);
	printf("\n Hra = %.2f",basic*0.075);
	printf("\n Ma = %.2f",300.00);
	printf("\n ===========================");
	printf("\n Gross = %.2f",basic+(basic*0.10)+(basic*0.075)+300.00);
	printf("\n ===========================");
	printf("\n Pf = %.2f",basic*0.125);
	printf("\n ===========================");
	printf("\n NET = %.2f",(basic+(basic*0.10)+(basic*0.075)+300.00)-(basic*0.125));
	return 0;
}
