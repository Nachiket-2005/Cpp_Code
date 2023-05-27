#include<stdio.h>
#include<dos.h>
int main()
{
	char i[20];
	
	printf("Enter name in capital letter");
	scanf("%s",&i);
	for(int j=1;j<=20;j++)
	{
		printf("HAPPY BIRTHDAY %s \2 \n",i);
		
	}
	return 0;
}
