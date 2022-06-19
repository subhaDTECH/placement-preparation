#include<iostream>
using namespace std;


class A{
    public:
    int x=40,y=30;
    A(){
        cout<<"A is called"<<endl;
    }
    A(int a,int b){
        cout<<a<<endl;
        cout<<b<<endl;
    }
    A(A &obj){
       x=obj.x;
       y=obj.y;
       cout<<x<<endl;
       cout<<y<<endl;
    }
};
int main(){
    A obj(10,20);
    A obj2(obj);

    return 0;
}