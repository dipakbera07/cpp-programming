#include<iostream>
using namespace std;

int sum(int a,int b){  //here we define function with parameter which mKES THE code more easier
    int c=a+b;
    return c;
}
int sum(int a,int b) ;//we can use it when we use function prototyping.it helps to telll the compiler that the existance of this function in this program.

int main(){
    int num1,num2;
    cout<<"Enter the first value: "<<endl;
    cin>>num1;
    cout<<"Enter the second value: "<<endl;
    cin>>num2;
    cout<<"The sum is: "<<sum(num1,num2)<<endl;
    return 0;
}

int sum(int a,int b){  //when we declare the function after the main function . there we use the function prototyping . it tells the compiler about the existence of the function in the program.
    int c=a+b;
    return c;
}

