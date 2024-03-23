#include<iostream>
using namespace std;

class base1{
    protected:
        int data1;
    public:
        void setdata1(int v1){
            data1=v1;
        }
};

class base2{
    protected:
        int data2;
    public:
        void setdata2(int v1){
            data2=v1;
        }
};

class derived : public base1 , public base2{
    public:
        void display(){
            cout<<"The value of data1 is: "<<data1<<endl;
            cout<<"The value of data2 is: "<<data2<<endl;
            cout<<"The sum of data1 and data2 is: "<<data1+data2<<endl;
        }
};

int main(){
    derived c1;
    c1.setdata1(9);
    c1.setdata2(45);
    c1.display();
return 0;
}