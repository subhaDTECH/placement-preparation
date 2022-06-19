//polymormhism => it is process where we can performs a single action
//in diffrent ways 

//run time polymorphism 

// function overriding 


#include <iostream>
using namespace std;
class A{
    public:
    void disp(){
        cout<<"class A"<<endl;
    }
};

class B:public A{
    public:
    void disp(){
        cout<<"class B"<<endl;
    }
};

int main(){
    B obj;
    obj.disp();
    return 0;
}
