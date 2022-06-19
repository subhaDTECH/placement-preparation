#include<iostream>
using namespace std;

class A{
    public:
    void disp(){
        cout<<"constructor a call"<<endl;
    }
};
class B{
    public:
    void disp(){
        cout<<"constructor b call"<<endl;
    }
};
class C:public A, public B{
    public:
    
};
int main(){
    C obj;
    obj.A::disp();
    obj.B::disp();
    return 0;
}