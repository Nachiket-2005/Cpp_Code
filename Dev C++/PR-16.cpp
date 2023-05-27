#include<stdio.h>

int main(){
	int i;
	
	printf("\n Enter Any No. : ");
	scanf("%d",&i);
	if((i%10)%2 == 0){
		printf("\n Last Digit of No is Even.");
	}
	else{
		printf("\n Last Digit of No is Odd.");
	}
	return 0;
}
