#include<stdio.h>
int main()
{
	char ch;
	printf("\n Enter Any Charecter :");
	scanf("%[^\n]",&ch);
	if(ch>='0' && ch<='9')
	{
		printf("\n Entered Charater is Digit.");
	}
	else if(ch>='A' && ch<='Z')
	{
		printf("\n Entered Charater is Capital Letter.");
	}
	else if(ch>='a' && ch<='z')
	{
		printf("\n Entered charater is small latter.");
	}
	else
	{
		printf("\n Entered charater is Special Charater.");
	}
	return 0;
}
