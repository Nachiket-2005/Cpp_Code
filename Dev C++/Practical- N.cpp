#include<stdio.h>

int main()
{
	int a,b,c;
	printf("\n Enter First Num. : ");
	scanf("%d",&a);
	printf("\n Enter Second Num. : ");
	scanf("%d",&b);
	printf("\n Enter Third Num. : ");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
	{
		printf("\n First Num. %d is maximum.",a);
	}
	else
	{
		printf("\n Third Num. %d is maximum.",c);
	}
	}
	else
	{
	if(b>c)
	{
		printf("\n second Num. %d is maximum.",b);
	}
	else
	{
		printf("\n Third Num. %d is maximum.",c);
	}
	}
	return 0;
}

