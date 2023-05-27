#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	float c;
	char op;
	printf("\n Enter The No. : ");
	scanf("%d%d",&a,&b);
	fflush(stdin);
	printf("\n Enter your operations such as '+' for Addiotion, '-' for substraction, '*' for Multiplication, '/' for Divison. : ");
	scanf("%c",&op);
	
	switch(op)
	{
		case '+': c = a+b;
		          printf("\n Sum is = %f",c); 
				  break;
		case '-': c = a-b;
		          printf("\n Substraction is = %f",c); 
				  break;
		case '*': c = a*b;
					printf("\n Multiplication is = %f",c); 
					break;
		case '/': c = a/b;
					printf("\n Division is = %f",c); 
					break;
		 default:
		 			 printf("\n Sorry...! Invalid Your Choice.");          
	}
	return 0;
}
