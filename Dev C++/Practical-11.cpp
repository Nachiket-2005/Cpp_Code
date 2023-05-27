#include<stdio.h>

int main()
{
	char ch;
	printf("Enter Any Number");
	scanf("%c",&ch);
	if(ch>='0' && ch<='9');
	{
		printf("This is Digit.");
	}
	else 
	{
		printf("This is not Digit.");
	}
	return 0;
}
