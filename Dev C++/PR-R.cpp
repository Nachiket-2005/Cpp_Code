#include<stdio.h>
int main()
{
	int no;
	printf("\n Enter The no. : ");
	scanf("%d",&no);
	(no>0)?printf("\n ENtered No. is Positive."):(no<0)?printf("\n Entered No. is Negative."):printf("\n Entered No. is zero.");
	return 0;
}

