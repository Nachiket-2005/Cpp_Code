#include<stdio.h>

int main(){
	int n,i;
	float sum = 0;
	
	printf("\n Enter The No. : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum = sum + (1.0/i);
	}
	printf("\n sum of series = %f",sum);
	return 0;
}
