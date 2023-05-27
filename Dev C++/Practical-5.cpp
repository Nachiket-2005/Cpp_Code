#include<stdio.h>

int main()
{
	int a,b;
	printf("\n Enter value of a & b :");
	scanf("%d%d",&a,&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n After Interchange Values A = %d & B = %d",a,b);
	return 0;
}
