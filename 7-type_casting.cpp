#include<iostream>
using namespace std;
int main(){
    int a=68;                                    //here we use type conversion to convert data types
    float b=50.9;
    a=float(a);  //in this way we can also change the data types;
    cout<<"the value of a is: "<<a<<endl; //here we convert int to float
    cout<<"the value of b is: "<<int(b)<<endl; //here we convert float to int
    return 0;
}