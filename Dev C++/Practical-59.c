#include<stdio.h>
#include<stdlib.h>

int main(){
	char str[50],ch[50];
	FILE *fp;
	
	printf("\n Enter String : ");
	scanf("%[^\n]s",str);
	
	fp=fopen("Test.txt","W");
	fputs(str,fp);
	fclose(fp);
	
	fp=fopen("Test.txt","R");
	fgets(ch,50,fp);
	fclose(fp);
	
	printf("\n From String File : %s",ch);
	return 0;
}
