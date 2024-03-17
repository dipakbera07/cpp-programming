#include<iostream>
using namespace std;

int main(){
    int a=5;    // (*)-vate at | (&)-address of |
    int* b=&a;  //here we use dereference operator(*)  and address operator(&) 
    cout<<"the address of a is: "<<b<<endl; //here it specifies the address where the data stores
    cout<<"the address of a is: "<<&a<<endl;
    cout<<"the value of address a is: "<<*b<<endl; //when we use star before an pointer variable it specifies the value of the actual variable.
   
    int** c=&b; //basically it is a ponter which stores another pointers address,
    cout<<"the address of b is: "<<c<<endl;
    cout<<"the address of b is: "<<&b<<endl;
    cout<<"the value of address b is: "<<**c<<endl; //here we have to use * 2 times cause it is a pointer to pointer.
    return 0;
}