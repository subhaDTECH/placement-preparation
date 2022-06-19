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
    //paramerasied constructor

    A(int a,int b){
        this->a=a;
        this->b=b;
    }
    void disp(){
        cout<<"value of a "<<this->a<<endl;
        cout<<"value of b "<<(*this).b<<endl;
        
    }


};

int main(){
    //static object creation and can be delete or destory by destrouctor 
     A obj(10,20);
     //dynamic memory allocation  
     //if u want to delete this object we need to use delete ope
     A *obj2=new A(10,20);
    obj.disp();
    obj2->disp();
     delete obj2;
     cout<<obj2<<endl;
    return 0;
}