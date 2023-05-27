#include<stdio.h>
int main()
{
	int a[50],i,no,max;
	printf("\n How many number you want to Enter max[50] : ");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		printf("\n Enter The Value in Array at position [%d] : ",i+1);
		scanf("%d",&a[i]);
	if(i==0){
		max = a[i];
	} else
	{
		if(max<a[i])
		{
			max = a[i];
		}
	}
}
	{
		printf("\n Max Value in Array : %d",max);
	}
	return 0;
}
