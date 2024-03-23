#include <iostream>
using namespace std;

class base
{
private:
    int data1;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
    base(){
        setData();
    }
};

void base ::setData()
{
    data1 = 10;
    data2 = 40;
}

int base ::getData1()
{
    return data1;
}

int base ::getData2()
{
    return data2;
}

class derived : public base
{
public:
    int data3;
    int process();
    void display();
};

int derived ::process()
{
    data3 = getData1() * data2;
    return data3;
}

void derived ::display()
{
    cout << "The sum is: " << data3 << endl;
}

int main()
{
    base c1;
    
    cout << "The value of data1 is: " << c1.getData1() << endl;
    cout << "The value of data2 is: " << c1.getData2() << endl;

    derived c2;
    
    c2.process();
    c2.display();
    return 0;
}