#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        complex(void);

        void printData(){
            cout<<"The number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex :: complex(void){
    a=6;
    b=8;
}
int main(){
    complex c1;
    c1.printData();
    return 0;
}