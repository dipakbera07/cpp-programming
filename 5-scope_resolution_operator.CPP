#include<iostream>
using namespace std;
int c=66;
int main(){
    int a,b,c;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    c=a+b;
    cout<<"The sum of two numbers are: "<<c<<endl;
    cout<<"The value of c is: "<<::c<<endl; // here i use scoope resolution operator(::) that is is used to access global variable when there is a local variable with the same name
    return 0;
}