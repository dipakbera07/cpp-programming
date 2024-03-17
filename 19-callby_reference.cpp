#include <iostream>
using namespace std;

void swap(int a, int b)   //this will not swap a & b.
{
    int temp = a;
    a = b;
    b = temp;
}
//call by referance using pointer referance
void swapPointer(int* a, int* b)   
{
    int temp =*a;
    *a = *b;
    *b = temp;
}

//call by reference using reference variables
void swapReferenceVar(int &a, int &b){
    int temp =a;
    a = b;
    b = temp;
}

int main()
{
    int x = 4, y = 5;
    cout << "The value of x is: " << x << " & The value of y is: " << y << endl;
    swap(x, y);  //this will not swap a & b.
    cout << "The value of x is: " << x << " & The value of y is: " << y << endl;
    swapPointer(&x, &y);  //this will  swap a & b | call by referance using pointer referance
    cout << "The value of x is: " << x << " & The value of y is: " << y << endl;
    swapReferenceVar(x, y);  //this will  swap a & b | call by referance using  referance variable
    cout << "The value of x is: " << x << " & The value of y is: " << y << endl;
    return 0;
}