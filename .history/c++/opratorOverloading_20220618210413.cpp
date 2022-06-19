#include <iostream>
using namespace std;

class A{
   public:
   int x=20;
   int y=30;
   void add(){
    cout<<x+y<<endl;
   }
   int operator+ (A obj){
     int val1=obj.x;
     int val2=obj.y;
    return val2-val1;
   }
};
int main(){
    A obj,obj2;
    obj.add();
    cout<< obj + obj2;
    return 0;
}