#include<iostream>

int add(int, int = 0, int = 0);
int main(){
    int a,b;
    
    std :: cout<<"Enter Two Num \n";
    std :: cin>>a>>b;
    
    std :: cout<<" Sum is "<<add(a,b);
    
    int c;
    
    std :: cout<<"\n Enter Three Num \n";
    std :: cin>>a>>b>>c;
    
    std :: cout<<" Sum is "<<add(a,b,c);
    
    return 0;
}

int add(int x, int y, int z){
   
    return(x+y+z);
}