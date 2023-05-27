#include<stdio.h>
int main()
{
	int i;
	printf("\n Enter Any number : ");
	scanf("%d",&i);
	if((i%10)%2==0)
	{
		printf("\n Last digit of num is even.");
		
	}
	else
	{
		printf("\n Last digit of num is odd.");
	}
	return 0;
}
