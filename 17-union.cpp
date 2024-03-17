#include<iostream>
using namespace std;

union money  //here we define union . which is similar to structure but it has some differences.
{
    int food;
    char car;
};

int main(){
    union money m1;
    m1.food=100;  //here we assign value to variale .
    m1.car='r'; //but in union we can use one variavle at time .if we specify two or more veriables is will disrupt the old variables value .
    cout<<m1.food<<endl;
    cout<<m1.car<<endl; //it will only takes the one variable at a time which is newest.
    return 0;
}