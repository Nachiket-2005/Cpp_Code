#include<stdio.h>

int main(){
	int no,fact = 1;
	
	printf("\n Enter No : ");
	scanf("%d",&no);
	
	while(no>1){
		fact = fact * no;
		no = no - 1;
	}
	printf("\n Factorial is %d.",fact);
	return 0;
}
