#include<stdio.h>

int main(){
	int no,i=0,sum=0,val;
	
	printf("\n How many number you want to Enter : ");
	scanf("%d",&no);
	while(i<no){
		printf("\n Enter No [%d] : ",i+1);
		scanf("%d",&val);
		sum = sum + val;
		i++;
	}
	printf("\n Sum is = %d",sum);
	printf("\n Average is = %f",((float)sum)/no);
	return 0;
}

