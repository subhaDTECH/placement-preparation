#include<iostream>
using namespace std;

class A{
    int a=10,b=20;
    public:
  friend  void disp(A);

};
void disp(A obj){
    cout<<obj.a<<endl;
    cout<<obj.b<<endl;
}
int main(){

    A obj;
    disp(obj);
    return 0;
}