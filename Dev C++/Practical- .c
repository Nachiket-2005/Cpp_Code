#include<stdio.h>

int prime(int);
int main(){
	int no;
	
	printf("\n Enter any No. : ");
	scanf("%d",&no);
	if(prime(no)==1){
		printf("\n %d is Prime no.",no);
	}
	else{
		printf("\n %d is not Prime No.",no);
	}
	return 0;
}

int prime(int n){
	int i=2;
	while(i<n){
		if(n%i==0){
			break;
		}
		i++;
	}
	if(n==i){
		return 1;
	}
	else{
		return 0;
	}
}
