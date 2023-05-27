#include<stdio.h>

struct person{
	char name[20];
	char doj[10];
	float salary;
}p[3];

int main(){
	int i;
	for(i=0;i<=2;i++){
		printf("\n Enter Person Name : ");
		scanf("%s",&p[i].name);
		printf("\n Enter Date Of Joining(dd-mm-yyyy) : ");
		scanf("%s",&p[i].doj);
		printf("\n Enter Salary : ");
		scanf("%f",&p[i].salary);
	}
	
	for(i=0;i<=2;i++){
		printf("\n Person Details %d : ",i+1);
		printf("\n Name = %s",p[i].name);
		printf("\n Doj = %s",p[i].doj);
		printf("\n Salary =  %f",p[i].salary);
	}
	return 0;
}
