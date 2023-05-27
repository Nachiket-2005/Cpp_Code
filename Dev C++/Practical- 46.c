#include<stdio.h>

int fact(int);

int main(){
	int n;
	printf("\n Enter No : ");
	scanf("%d",&n);
	printf("\n Factorial = %d",fact(n));
	return 0;
}

int fact(int n){
	if(n==1){
		return 1;
	}
	return n * fact(n-1);
}
