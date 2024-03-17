#include<iostream>
using namespace std;

class y;
class x{
    int num1;
    public:
        void setData1(int v1){
            num1=v1;
        }
    friend int add(x,y);
}; 

class y{
    int num2;
    public:
        void setData2(int v2){
            num2=v2;
        }
    friend int add(x,y);
};

int add(x o1,y o2){
    cout<<"the sum of two classes is: "<<(o1.num1+o2.num2);
}

int main(){
    x c1;
    c1.setData1(3);
    y c2;
    c2.setData2(8);

    add(c1,c2);

    return 0;
}