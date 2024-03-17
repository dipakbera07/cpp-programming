#include<iostream>
using namespace std;
 int main(){
    int a=50;
    int & b=a; //here we use referance variable to store the same value of an existing variable;
    cout<<"the value of a is: "<<a<<endl;
    cout<<"the value of b is: "<<b<<endl;
    return 0; 
 }