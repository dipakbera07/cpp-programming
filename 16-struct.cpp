#include<iostream>
using namespace std;

typedef struct employee   //here we can also use typedef key word .when we have to call this struct we dont have to put the struct employee , just write ep ,that we specify in the end of the curlibreses|
{
    int eId;
    char favchar;
    float salary;
}ep;

int main(){
    struct employee dipak;  //here we use ep instead of struct employeee . it makes the code easier to write. |
    //here we can also make similar employee names - like,rohan , subham etc...
    dipak.eId=7;
    dipak.favchar='l';
    dipak.salary=50009.7;
    cout<<"The value is: "<<dipak.eId<<endl;
    cout<<"The value is: "<<dipak.favchar<<endl;
    cout<<"The value is: "<<dipak.salary<<endl;
    return 0;
}