#include<stdio.h>
int main()
{
	int no;
	printf("\n Enter The 1 to 7 no. : ");
	scanf("%d",&no);
	if(no==1)
	{
		printf("\n MONDAY");
	}
	else if(no==2)
	{
		printf("\n TUESDAY");
	}
	else if(no==3)
	{
		printf("\n Wedenesday");
	}
	else if(no==4)
	{
		printf("\n THURSDAY");
	}
	else if(no==5)
	{
		printf("\n FRIDAY");
	}
	else if(no==6)
	{
		printf("\n SATURDAY");
	}
	else if(no==7)
	{
		printf("\n SUNDAY");
	}
	else
	{
		printf("\n Invalid Your Choice");
	}
	return 0;
}
