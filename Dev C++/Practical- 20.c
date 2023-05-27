#include<stdio.h>

int main(){
	int sum = 0,no;
	
	printf("\n Enter Any No. : ");
	scanf("%d",&no);
	if(no<10){
		sum = sum + (no * 2);
	}
	else{
		sum = sum + (no % 10);
	}
	while(no>9){
		no =  no/10;
	}
	sum = sum + no;
	printf("\n Sum is = %d",sum);
	return 0;
}
