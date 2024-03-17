#include<iostream>
using namespace std;

class employee{
    public:
        int id;
        int salary;
        employee(int eId){
            id=eId;
            salary=4000;
        }
        employee(){} //it is a default constructor . cause when an derived class wants to access an data within a constructor first it wants an default constructor , if there is no default construcor it throws an error.
};

//************* basic syntax of inheritance **************
/*
class [derived class name] : [visibility mode] [base class name]{
    //body
};
*NOTE-
1. Default visibility mode is private.
2. Public Visibility mode: public members of the base class becomes the public member of the derived class.
2. Private Visibility mode: public members of the base class becomes the Private member of the derived class.
*/

class programmer : employee{
    public:
        programmer(int inpid){
            id=inpid;
        }
        int languageCode=9;
        void getData(){
            cout<<"your id is: "<<id<<endl;
        }
};

int main(){
    employee dipak(1);
    cout<<"The salary of the employee is: "<<dipak.salary<<endl;

    programmer dipak1(2);
    cout<<dipak1.languageCode<<endl;
    dipak1.getData();


return 0;
} 