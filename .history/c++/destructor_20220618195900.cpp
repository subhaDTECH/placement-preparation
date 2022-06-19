#include "iostream"
using namespace std;
class A{
    public:
    int a;
    int b;
    A(int a,int b){
   cout<<"Constructor is callled"<<endl;
    this->a=a;
    this->b=b;
    
    }

     ~A(){
        cout<<"destructor  is callled"<<endl;
    }

};
int main(){
    A obj(10,20);
    cout<<obj.a<<endl;
    cout<<obj.b<<endl;
    
    return 0;
}