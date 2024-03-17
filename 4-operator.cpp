 #include<iostream>
 using namespace std;
 int main(){
    int a=5,b=7;
    //arithmetic operator
    cout<<"sum of two numbers are:"<<a+b;
    cout<<"\nsum of two numbers are:"<<a-b;
    cout<<"\nsum of two numbers are:"<<a*b;
    cout<<"\nsum of two numbers are:"<<a/b;
    cout<<"\nsum of two numbers are:"<<a%b;


    //retional operator or comparison operator
    cout<<"\nreation between two numbers are:"<<(a==b);
    cout<<"\nreation between two numbers are:"<<(a>b);
    cout<<"\nreation between two numbers are:"<<(a<b);
    cout<<"\nreation between two numbers are:"<<(a>=b);
    cout<<"\nreation between two numbers are:"<<(a<=b);
    cout<<"\nreation between two numbers are:"<<(a!=b);


    //logical operator
    cout<<"\nlogic :"<<((a==b)&&(a>b))<<endl;
    cout<<"logic :"<<((a==b)||(a<b))<<endl;
    cout<<"logic :"<<(!(a==b))<<endl;
    return 0;

 }