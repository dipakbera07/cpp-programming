#include<iostream>
using namespace std;

int factorial(int num){ //here we use recursive function , which calls itself in the function
    if(num<=1){
        return 1;
    }
    return num*factorial(num-1); //here the function calls itself
}

int fibonacci(int a){
    if(a<=1){
        return 1;
    }
    return a+fibonacci(a-1);
}
int main(){
    int a;
    cout<<"Enter a value whose factorial you want: "<<endl;
    cin>>a;
    cout<<"The facorial of "<<a<<" is: "<<factorial(a)<<endl;

    int b;
    cout<<"Enter a value: "<<endl;
    cin>>b;
    cout<<"The fibonacci sequence of "<<b<<" is: "<<fibonacci(b)<<endl;

    return 0;
}