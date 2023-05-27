#include<stdio.h>

int main(){
	int no,rev = 0;
	
	printf("\n Enter No : ");
	scanf("%d",&no);
	
	while(no>0){
		rev = (rev * 10) + (no % 10);
		no = no/10;
	}
	printf("\n Reverse No is = %d",rev);
	return 0;
}
