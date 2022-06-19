#include<iostream>
using namespace std;

class A{
    int a=10,b=20;
    public:
  friend  class B;

};
class B{
    public:
   void dip(A obj){
     cout<<obj.a<<endl;
     cout<<obj.b<<endl;
   }
};
int main(){
    A obj1;
    B obj;

    obj.dip(obj1);
    return 0;
}