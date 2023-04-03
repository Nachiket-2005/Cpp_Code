#include<iostream>

// Call by value

int sum(int x, int y);
int main(){
int a = 5, b = 6;
int S = sum(a,b);
std :: cout<<" Sum is "<<S;
return 0;
}

int sum(int a, int b){
    return(a+b);
}