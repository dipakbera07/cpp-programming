#include<iostream>
using namespace std;

int main(){
    int marks[4]={50,29,76,55};  //it is an array which contain 4 data.
    marks[3]=88; //in this way we can change the value using specific index number.
    cout<<"The value of index 0 is: "<<marks[0]<<endl;
    cout<<"The value of index 1 is: "<<marks[1]<<endl;
    cout<<"The value of index 2 is: "<<marks[2]<<endl;
    cout<<"The value of index 3 is: "<<marks[3]<<endl;

    int mathmarks[4];
    mathmarks[0]=278;
    mathmarks[1]=378;
    mathmarks[2]=478;
    mathmarks[3]=578;
    cout<<"The value of index 0 is: "<<mathmarks[0]<<endl;
    cout<<"The value of index 1 is: "<<mathmarks[1]<<endl;
    cout<<"The value of index 2 is: "<<mathmarks[2]<<endl;
    cout<<"The value of index 3 is: "<<mathmarks[3]<<endl;

    //array using for loop.
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of "<<i<<" is: "<<marks[i]<<endl;
    }
    //array using while loop.
    cout<<"array using while loop."<<endl;
    int i=0;
    while (i<4)
    {
        cout<<"The value of "<<i<<" is: "<<marks[i]<<endl;
        i++;
    }
    
    //array using do while loop
    cout<<"array using do while loop"<<endl;
    i=0;
    do
    {
        cout<<"The value of "<<i<<" is: "<<mathmarks[i]<<endl;
        i++;
    } while (i<4);


    //array using loops
    cout<<"Array using for loop"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of "<<i<<" is: "<<marks[i]<<endl;
    }
    
    
    //pointers and array in cpp
    int* p=marks; //here we use p pointer to store the marks array
    cout<<"The value of mark[0] is: "<<*p<<endl; //here use use dereferance operator to indicate the value of the pointer in
    cout<<"The value of mark[1] is: "<<*(p+1)<<endl;
    cout<<"The value of mark[2] is: "<<*(p+2)<<endl;
    cout<<"The value of mark[3] is: "<<*(p+3)<<endl;
    return 0;
}