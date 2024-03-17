#include<iostream>
using namespace std;

class data2;
class data1{
    int num1;
    public:
        void intData1(int v1){
            num1=v1;
        }
        friend int exchange(data1 &o1,data2 &o2);
        void displaydata1(){
            cout<<"the value of num 1 is: "<<num1<<endl;;
        }

};
class data2{
    int num2;
    public:
        void intData2(int v2){
            num2=v2;
        }
        friend int exchange(data1 &o1,data2 &o2);
        void displaydata2(){
            cout<<"the value of num 2 is: "<<num2;
        }

};

int exchange(data1 &o1,data2 &o2){
    int temp=o1.num1;
    o1.num1=o2.num2;
    o2.num2=temp;
}

int main(){
    data1 c1;
    c1.intData1(2);
    data2 c2;
    c2.intData2(7);
    int res=exchange(c1,c2);
    c1.displaydata1();
    c2.displaydata2();
    
    
    return 0;
}