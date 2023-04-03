#include<iostream>
class complex
{
    private:
        int a,b;
    public:
        void setdata(int x,int y)
     {a=x;b=y;}
     void showdata(){
        std :: cout<<"\ta="<<a<<"\tb="<<b;
     }
     complex operator -(complex c){
        complex temp;
        temp.a =a-c.a;
        temp.b =b-c.b;
        return temp;
     }};
     int main(){
        complex c1,c2,c3;
        c1.setdata(3,4);
        c2.setdata(6,7);
        c3 = c1 - c2;
        c3.showdata();
         return 0;
     }