#include "iostream"
using namespace std;
class A{
    public:
    int a;
    int b;
    A(){
   cout<<"Constructor is callled"<<endl;
    int a=20;
    int b=10;
    
    }

     ~A(){
        cout<<"destructor  is callled"<<endl;
    }

};
int main(){
    A obj;
    cout<<obj.a<<endl;
    cout<<obj.b<<endl;
    
    return 0;
}