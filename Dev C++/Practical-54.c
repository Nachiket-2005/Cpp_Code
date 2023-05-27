#include<stdio.h>

int main(){
	int i=15;
	int *p;
	p=&i;
	printf("\n Address of i = %u",p);
	return 0;
}
