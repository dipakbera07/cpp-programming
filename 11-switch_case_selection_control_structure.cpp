#include<iostream>
using namespace std;
int  main(){
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age; //The expression is what you're testing against each case label. For example, if expression evaluates to 5, the switch statement will look for a case label with the value 5 to execute the corresponding code block.
    switch (age)
    {
    case 18:
        cout<<"your age is 18."<<endl;
        break;
    case 22:
        cout<<"your age is 22."<<endl;
        break;
    case 77:
        cout<<"your age is 77."<<endl;
        break;
    
    default:
    cout<<"No special cases"<<endl;
        break;
    }
    cout<<"We are done with switch case."<<endl;
    return 0;
}