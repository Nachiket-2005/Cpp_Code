#include<stdio.h>

int main(){
	int no = 10,i = 0,j = 1;
	
	printf("%d\t %d\t",i,j);
	while(no>0){
		printf("%d\t",i + j);
		j = i + j;
		i = j - i;
		no--;
	}
	return 0;
}
