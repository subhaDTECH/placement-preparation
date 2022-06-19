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

    Car(string clr, string brnd){
        color=clr;
        brand=brnd;
    }
    void disp(){
        cout<<color<<endl;
        cout<<brand<<endl;
    }

};
int main(){
    Car suv("pink","A");
    suv.disp();
   

    
   
    return 0;
}