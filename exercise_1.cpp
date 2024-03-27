#include<iostream>
#include<cmath>
using namespace std;

class simpleCalculator{
    protected:
        int num1,num2;
        char op,choise;
    public:
        void setData();
        void displayData();
};

void simpleCalculator :: setData(){
    cout<<"Enter the first value: "<<endl;
    cin>>num1;
    cout<<"Enter the operator which you want to perform: "<<endl;
    cin>>op;
    cout<<"Enter the second value: "<<endl;
    cin>>num2;
}

void simpleCalculator :: displayData(){
    switch(op){
        case '+':
            cout<<"Answer: "<<num1+num2<<endl;
            break;
        case '-':
            cout<<"Answer: "<<num1-num2<<endl;
        case '*':
            cout<<"Answer: "<<num1*num2<<endl;
        case '/':
            cout<<"Answer: "<<num1/num2<<endl;
    }
}

class scientificCalculator{
    protected:
        int data3,data4,choise2;
    public:
        void setData2();
        void displayData2();

};

void scientificCalculator :: setData2(){
    cout<<"enter the value whoes scientific calculation you want: "<<endl;
    cin>>data3;
    cout<<"Enter the second value: "<<endl;
    cin>>data4;

    cout<<"select an operator that you want to perform:"<<endl;
    cout<<"1. Square root of"<<endl;
    cout<<"2. raised to the power "<<endl;
    cout<<"3. Natural logarithm of"<<endl;
    cin>>choise2;
}

void scientificCalculator :: displayData2(){
    switch(choise2){
        case 1:
            cout<<"Square root of "<<data3<<" : "<<sqrt(data3)<<endl;
            break;
        case 2:
            cout<<"raised to the power of "<<data3<<" : "<<pow(data3,data4)<<endl;
            break;
        case 3:
            cout<<"Natural logarithm of "<<data3<<" : "<<log(data3)<<endl;
            break;
    }
}

class hybridCalculator : public simpleCalculator, public scientificCalculator{
    public:
        void display(){
            setData();
            displayData();
            setData2();
            displayData2();
        }

};

int main(){
    hybridCalculator c1;
    c1.display();
return 0;
}