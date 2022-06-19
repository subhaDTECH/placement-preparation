// **************************
// class and object 

// class=> class is a blueprint of an object it holds all the the data 
// member and member function
//object => run time entity or instance of class 
#include<iostream>
using namespace std;

class Car{
    public:
    string  color;
    string  brand;

};
int main(){
    Car suv,a,b,c;
    suv.color="red";
    suv.brand="suva";
    a.color="blue";
    a.brand="ram";

    cout<<suv.color<<endl;
    cout<<suv.brand<<endl;
    cout<<a.color<<endl;
    cout<<a.brand<<endl;
    return 0;
}