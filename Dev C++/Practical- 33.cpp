#include<stdio.h>
int main()
{
	int a[10],i;
	for(i=0;i<9;i++)
	{
		printf("\n Enter The Value in Array at position [%d] : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n %d is EVEN NUM.",a[i]);
		}
		else
		{
			printf("\n %d is ODD NUM.",a[i]);
		}
		
	}
	return 0;
}
