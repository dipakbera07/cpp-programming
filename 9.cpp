#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a=4,b=77,c=6666;
    cout<<"the value of a without setw is: "<<a<<endl;
    cout<<"the value of b without setw is: "<<b<<endl;
    cout<<"the value of c without setw is: "<<c<<endl;

    cout<<"the value of a with setw is: "<<setw(6)<<a<<endl;
   cout<<"the value of b with setw is: "<<setw(4)<<b<<endl;
    cout<<"the value of c with setw is: "<<setw(4)<<c<<endl;
    return 0;
}