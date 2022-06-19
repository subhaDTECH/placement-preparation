//constructor 
// => its name is same is class 
// ==> it is automatically called by the compiler when an object is created
// ==> it is used to initialise the object 
//never return any value 

//types - default , paramertarised, copy 
#include<iostream>
using namespace std;
class A{
    public:

    int a,b;
    A(int a,int b){
        this->a=a;
        this->b=b;
    }
    void disp(){
        cout<<"value of a"<<this->a<<endl;
        cout<<"value of b"<<(*this).b<<endl;
        
    }


};

int main(){
     A obj(10,20);
     disp.disp();
    return 0;
}