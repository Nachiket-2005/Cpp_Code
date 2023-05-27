#include<stdio.h>
int main(){
    int i,no;
    printf("\n Enter The No. : ");
    scanf("%d",&no);
    for(i=2;i<no;i++){
        if(no == i){
            printf("\n %d is PRIME NO.",no);
        }
        else{
            printf("\n %d is not PRIME NO.",no);
        }
    }
    return 0;
}
