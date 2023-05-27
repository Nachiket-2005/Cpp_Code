#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n Enter Three No. : ");
	scanf("%d%d%d",&a,&b,&c);
	(a>b && a>c)?printf("\n %d is max.",a):(b>c)?printf("\n %d is max.",b):printf("\n %d is max.",c);
	return 0;
}
