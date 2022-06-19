#include<iostream>
using namespace std;
//example of run time polymorphism 
// virtual function allow us dynamic linking of funbction at run time 
// parent class can access the child class's properties or method
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
    //run time linking 
    obj=&obj2;
    obj->disp();
    obj->disp2();
   
    return 0;
}

