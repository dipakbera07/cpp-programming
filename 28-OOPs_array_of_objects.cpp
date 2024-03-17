#include <iostream>
using namespace std;

class employee
{
    int id;

public:
    void setId(void)
    {
        cout << "Enter the id of the employee: " << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of the employee is: " << id << endl;
    }
};

int main()
{
    employee dipak[5];
    for (int i = 0; i < 4; i++)
    {
        dipak[i].setId();
        dipak[i].getId();
    }
    return 0;
}