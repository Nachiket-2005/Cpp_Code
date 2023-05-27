#include<stdio.h>
int main()
{
	int marks;
	printf("\n Enter The No. Between 0 - 100 : ");
	scanf("%d",&marks);
	if(marks>100 || marks<0)
	{
		printf("\n YOUR INPUT IS OUT OF RANGE.");
	}
	else if(marks>=80)
	{
		printf("\n YOU GOT FIRST CLASS.");
	}
	else if(marks>=60)
	{
		printf("\n YOU GOT SECOND CLASS.");
	}
	else if(marks>=40)
	{
		printf("\n YOU GOT THIRD CLASS.");
	}
	else
	{
		printf("\n SORRY...! YOU'RE FAIL.");
	}
	return 0;
}
