#include<iostream>
using namespace std;
//not a memeber function 
//use like friend of that function
//can access the private data of the class outside the class
//take obj as arguments 
//call like normal function 
//declare like normal function 
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