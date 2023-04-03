#include<iostream>
// Pattern
int main(){
   int i,j,no=7;
   for(i=0;i<no;i++){
    for(j=0;j<no;j++){
        if((i==j)||((i+j)==(no-1)))
        std :: cout<<"*";
        else
        std :: cout<<" ";
    }
        std :: cout<<"\n";
   }
      return 0;
}
