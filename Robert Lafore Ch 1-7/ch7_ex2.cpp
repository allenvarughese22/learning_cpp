#include <iostream>
#include <string>
using namespace std;

class employee
{
    string name;
    long empl_numb;

public:
    getdata()
    {
        cout << "enter the name of the employee" << endl;
        cin >> name;
        cout << "enter the employee id number" << endl;
        cin >> empl_numb;
    }

    void putdata()
    {
        cout << "the employee name: " << name << endl;
        cout << "the employee id: " << empl_numb << endl;
    }
};

int main()
{
    employee ar[5];

    for (int i = 0; i < 5; i++)
    {
        ar[i].getdata();
    }

    for (int i = 0; i < 5; i++)
    {
        ar[i].putdata();
    }
}