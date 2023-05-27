#include<stdio.h>
#include<math.h>
int main()
{
	int no1,no2;
	char ch;
	float c;
	printf("\n Enter No.1 : ");
	scanf("%d",&no1);
    printf("\n Enter No.2 : ");
	scanf("%d",&no2);
	fflush(stdin);
	printf("\n Enter Your Operation such as + for Add, - for Sub, * for Multi, / for Div. : ");
	scanf("%s",&ch);
	fflush(stdin);

	switch(ch)
	{
		case '+' : c = no1+no2;
		           printf("\n Sum = %f",c); break;
		case '-' : c = no1-no2;
					printf("\n Sub = %f",c); break;
		case '*' : c = no1*no2;
					printf("\n Mul = %f",c); break;
		case '/' : c = no1/no2;
					printf("\n Div = %f",c); break;							    
	}
	return 0;
}
