#include<stdio.h>
int main()
{
	int marks;
	printf("\n Enter your marks.");
	scanf("%d",&marks);
	if(marks>100 || marks<0)
	{
		printf("\n YOUR INPUT IS OUT OF RANGE");
	}
	else if(marks>=80)
	{
		printf("\n YOU GOT FIRST CLASS PASS...!");
	}
	else if(marks>=60)
	{
		printf("\n YOU GOT SECOND CLASS PASS...!");
	}
	else if(marks>=40)
	{
		printf("\n YOU GOT THIRD CLASS PASS...!");
	}
	else
	{
		printf("\n SORRY...! YOU ARE FAIL.");
	}
	return 0;
}
