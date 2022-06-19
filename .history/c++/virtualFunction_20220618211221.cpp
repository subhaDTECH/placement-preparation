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
        cout<<"class B"<<endl;
    }
   

};
int main(){
    A  *obj;
    B obj2;
    obj=&obj2;
    // obj->disp();
    obj->disp2();
   
    return 0;
}