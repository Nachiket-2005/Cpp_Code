#include<stdio.h>

int main()
{
	int A,B,C,D;
	float f;
	printf("\n Enter Value of A,B,C & D");
	scanf("%d%d%d%d",&A,&B,&C,&D);
	if(C!=D)
	{
		f= (A+B)/(C+D);
		printf("\n The ans. is f = %f ",f);
	}
	else
	{
		printf("\n C & D Both are same value so you can again input your value of C & D");
	}
}
