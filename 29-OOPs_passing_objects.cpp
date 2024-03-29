#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDataBySum(complex o1,complex o2){ // o1 and o2 are objects of the complex class, the setDataBySum function can access their private members a and b directly.
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void displayNumber(){
        cout<<"THe complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.setData(1,2);
    c1.displayNumber();

    c2.setData(3,4);
    c2.displayNumber();

    c3.setDataBySum(c1,c2);
    c3.displayNumber();


    return 0;
}