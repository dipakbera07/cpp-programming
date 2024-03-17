#include<iostream>
using namespace std;
int volume(float r,int h){
    return 3.14*r*r*h;
}

int volume(int a){ //here we use function overloading where we can use 2 or more functions with the same name but different arguments.
    return a*a*a;
}
int main(){
    cout<<"The volume of cilinder is: "<<volume(3.12,7)<<endl;
    cout<<"The volume of qube is: "<<volume(5)<<endl;
}