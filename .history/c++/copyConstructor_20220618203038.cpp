#include<iostream>
using namespace std;

// copy constructor is used to initialise an object from another 
//object
//takes a reference object as arguments 
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
    //copy constructor 
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