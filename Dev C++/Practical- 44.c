#include<stdio.h>
void swap(int *,int *);	

int main(){
	int a=5,b=6;
	
	printf("\n Values before Exachange :");
	printf("\n a = %d\t b = %d",a,b);
	swap(&a,&b);
	printf("\n Values after Exachange :");
	printf("\n a = %d\t b = %d",a,b);
	return 0;	
	
}

void swap(int *a,int *b){
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
