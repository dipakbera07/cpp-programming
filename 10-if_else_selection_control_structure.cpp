#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    if ((age<18) && (age>1))   //here we use logical and operator (&&) to make sure this condition execute when the ager is betwen 1 to 18 | if the age is 0 then it does't execute this condition. 
    {
        cout<<"You are a kid .";
    }
    else if (age==18)
    {
        cout<<"you are not eligible ,within 1 year you you are eligible.";
    }
    else if (age<1)
    {
        cout<<"You are not yet born";
    }
    
    else{
        cout<<"you are eligible";
    }

    return 0;
}