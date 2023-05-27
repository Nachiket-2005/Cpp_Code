#include<stdio.h>

int main(){
	int rollno[20],marks[20],i;
	
	for(i=0;i<20;i++){
	printf("\n Enter rollno [%d] : ",i+1);
	scanf("%d",&rollno[i]);
	printf("\n Enter Marks [%d] : ",i+1);
	scanf("%d",&marks[i]);
}
	for(i=0;i<20;i++){
		printf("\n Rollno = %d\t Marks = %d",rollno[i],marks[i]);
	}
	return 0;

}
