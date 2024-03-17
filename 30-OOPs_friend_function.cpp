#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        void setData(int v1,int v2){
            a=v1;
            b=v2;
        }
        friend complex setDataBySum(complex o1,complex o2); //here we declare this  as friend function . that allows the function olny to access the private data.remember it is not declared as a member function. 

        void displayNumber(){
            cout<<"The number is "<<a<<"+ "<<b<<"i"<<endl;
        }
};

complex setDataBySum(complex o1, complex o2){  //here we declare a function which wants to access complex class private data. so we use friend function here
    complex o3;
    o3.setData((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main(){
    complex num1,num2 ,sum;
    num1.setData(1,4);
    num1.displayNumber();

    num2.setData(3,2);
    num2.displayNumber();

    sum=setDataBySum(num1,num2); //here we dont use '.' to call the function as we used previously .cause it is not a member function . so we have to use '='operator to call the function . 

    sum.displayNumber();
    return 0;
}