#include<iostream>
using namespace std;


class A{
    A(){
        cout<<"A is called"<<endl;
    }
};
int main(){
    A.obj;
    return 0;
}