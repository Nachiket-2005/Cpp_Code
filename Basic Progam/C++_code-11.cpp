#include<iostream>

float area(int);
int area(int, int);

int main(){
    int r;
    std :: cout<<" Enter The Radius of a circle \n";
    std :: cin>>r;
    float A = area(r);
    std :: cout<<"\n Area of a circle is "<<A;

    int l,b,a;
    std :: cout<<"\n Enter Length and Breath of rectangle \n";
    std :: cin>>l>>b;
    a = area(l,b);
    std :: cout<<"\n Area of a rectangle is "<<a;
    
    return 0;
}

float area(int R){
    return(3.14*R*R);
}

int area(int L, int B){
    return(L * B);
}