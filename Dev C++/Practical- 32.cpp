#include<stdio.h>
int main(){
	int rollno[20],mark[20],i;
	for(i=0;i<20;i++)
	{
		printf("\n Enter Roll no of Student : ",i+1);
		scanf("%d",&rollno[i]);
		printf("\n Enter Mark of Student : ",i+1);
		scanf("%d",&mark[i]);
	}
	for(i=0;i<20;i++)
	{
		printf("\n Roll No = %d  Marks = %d",rollno[i],mark[i]);
	}
	return 0;
}
