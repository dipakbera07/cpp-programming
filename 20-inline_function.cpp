#include<iostream>
using namespace std;

inline int sum(int a,int b){  //here we use inline function.
    return a+b;        
}
float moneyReceived(int money,float factor=1.04){  //here  we specify the factors value as default value 
    return money*factor;
}

//*****************static variable*****************(dont use it in inline function)
// int sum(int a,int b){   //dont use static variable in inline function.
//     static int c=0; //static variavle used only one time 
//     c=c+1; //next this function is run . the value of c is retained |
//     return a*b+c;        
// }



int main(){
    int a,b;
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;
    cout<<"The sum of two numbers are: "<<sum(a,b)<<endl; //we use inline function when the function perform small tasks, and it has smalll codes| basically when we use it , it doe's'not copy the arguments to the function it perform it in this line of code.
    cout<<"The sum of two numbers are: "<<sum(a,b)<<endl;
    cout<<"The sum of two numbers are: "<<sum(a,b)<<endl;
    int money=100000;
    cout<<"If you have "<<money<<" Rs in your bank account ,then you will get: "<<moneyReceived(money)<<endl;//here we dont declare factor value but it still run . cause it already declared as a default value.
     cout<<"Ror VIP - If you have "<<money<<" Rs in your bank account ,then you will get: "<<moneyReceived(money,1.1)<<endl; //here we change the value of default argument.

    return 0;
} 