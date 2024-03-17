#include <iostream>
#include<string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void check_bin(void);
    void ones_complement(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "Enter the binary value: " << endl;
    cin >> s;
}

void binary ::check_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "You entered a incorrect value" << endl;
            break;
        }
    }
}

void binary::ones_complement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Here we displaying ones complement" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary num;
    num.read();
    num.check_bin();
    num.ones_complement();
    num.display();
    return 0;
}