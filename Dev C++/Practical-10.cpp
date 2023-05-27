#include<stdio.h>

int main()
{
	int Marks;
	printf("\n Enter Marks From 0 To 70 :");
	scanf("%d",&Marks);
	if(Marks<23)
	{
		printf("\n Sorry...! You are Fail.");
	}
	else
	{
		printf("\n Congratulation...! You are Pass.");
	}
	return 0;
}
