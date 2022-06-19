//static variable initialise with 0 when an object is created
//it is a class variable share by all the object of the class


#include<iostream>
using namespace std;
class A{
  public:
  int a=10;
   static int b;
   void disp(){
    cout<<a<<endl;
    // cout<<b<<endl;
   }
  static void disp2(){
    cout<<b<<endl;
   }
};
int A :: b=20;
int main(){
    A obj;
    obj.disp();
    //call using obj 
     obj.disp2();
     //call using class name
     A::disp2();
     //access using obj
    cout<<obj.b;
    //access using class name 
    cout<<A::b<<endl;
    return 0;
}