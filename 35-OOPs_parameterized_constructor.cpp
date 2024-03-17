#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        complex(int ,int );
        void printData(){
            cout<<"The number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};
/*
complex:: complex(void){  //here we use default constructor . which dont take any parameters |
    a=6;
    b=7;
}
*/

complex:: complex(int x,int y){  //here we parameterized constructor . it takes parameters |
    a=x;
    b=y;
}
int main(){
    //implicit call
    complex c1(4,7); //here we here we declare the parameter of constructior |
    c1.printData();

    //explicit call
    complex c2= complex(8,9);
    c2.printData();
    return 0;
}