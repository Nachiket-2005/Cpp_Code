#include<stdio.h>

int main()
{
	int no;
	printf("\n Enter Any No :");
	scanf("%d",&no);
	if(no==0)
	{
		printf("\n Entered Num is Zero");
	}
	else if(no>0)
	{
		printf("\n Entered Num is Positive");
	}
	else if(no<0)
	{
		printf("\n Entered Num is Negative");
	}
}
