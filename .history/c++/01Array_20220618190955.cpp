//array
// => collection of similar kind of data elements


//declaring the array
// int arr[]={10,10,20,30,40}
//2d array 
// int arr[][]={

//     {10,20,30},
//      {10,20,30}, 
//      {10,20,30}
// }

#include<iostream>
using namespace std;
int main(){
    // int arr[]={1,2,3,4,5,6};
    int arr[3][3]={

     {10,20,30},
     {10,20,30}, 
     {10,20,30}
};
    int l=sizeof(arr)/sizeof(arr[0]);
     cout<<l<<endl;
    for(auto x:arr){
       cout<<x<<" ";
    }
    return 0;

}