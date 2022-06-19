//static variable initialise with 0 when an object is created
//it is a class variable share by all the object of the class


#include<iostream>
using namespace std;
class A{
  public:
  int a=10;
   static int b=0;
   void disp(){
    cout<<a<<endl;
    // cout<<b<<endl;
   }
};
// int A :: b=20;
int main(){
    A obj;
    obj.disp();
    cout<<obj.b;
    return 0;
}