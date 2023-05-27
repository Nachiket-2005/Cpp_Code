#include<stdio.h>
int main()
{
	int no,fact = 1;
	printf("\n Enter no to find factorial : ");
	scanf("%d",&no);
	while(no>1)
	{
		fact = fact * no;
		no = no - 1;
	}
	printf("\n Entered no of factorial is : %d",fact);
	return 0;
}
