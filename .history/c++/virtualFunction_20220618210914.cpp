#include<iostream>
using namespace std;

class A{
    public:
    void disp(){
        cout<<"class a disp1"<<endl;
    }
   virtual void disp2(){
        cout<<"virtual function of class A"<<endl;
    }

};
class B:public A{
    public:
    void disp2(){
        cout<<"class a disp1"<<endl;
    }
   

};
int main(){
    B obj;
    obj.disp2();
    obj.disp();
    return 0;
}