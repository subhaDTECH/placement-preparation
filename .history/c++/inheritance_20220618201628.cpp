//inheritance ==> its a process where a child class can
//acess all the properties of its parent clas

//types
//single 
//multiple 
//multilevel 
//heriarical
//hybrid (combination of any two inheritance)

//single inheritance 
// #include "iostream"
// using namespace std;
// class A{
//   public:
//   int a=10;
//   int b=20;
//   void disp(){
//     cout<<a<<endl;
//     cout<<b<<endl;
//   }
// };
// class B:public A{
//     public:
//     int c=30;
//     void disp2(){
//         cout<<c<<endl;
//     }
   
// };
// int main(){
//     A obj1;
//     B obj2;
//     obj1.disp();
//     obj2.disp();
//     obj2.disp2();

//     return 0;
// }


//



//multilevel 
// #include "iostream"
// using namespace std;
// class A{
//   public:
//   int a=10;
//   int b=20;
//   void disp(){
//     cout<<a<<endl;
//     cout<<b<<endl;
//   }
// };
// class B:public A{
//     public:
//     int c=30;
//     void disp2(){
//         cout<<c<<endl;
//     }
   
// };
// class C:public B{
//     public:
    
   
// };
// int main(){
//     C obj;
//     obj.disp();
//     obj.disp2();
//     return 0;
// }


//multiple inheritance 

#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"A class constructor "<<endl;
    }
    void disp1(){
        cout<<"A class method "<<endl;
    }
};
class B{
    public:
    B(){
        cout<<"B class constructor "<<endl;
    }
    void disp2(){
        cout<<"B class method "<<endl;
    }
};
class C:public A, public B{
    public:
   
    void disp3(){
        cout<<"c class method "<<endl;
    }
};

int main(){
    C obj;
    obj.disp1();
    obj.disp2();
    obj.disp3();

    return 0;
}