#include <iostream>
#include <process.h>
using namespace std;

class Int
{
    int i;

public:
    Int() : i{0} {}
    Int(int i) : i{i} {}

    void display()
    {
        cout << "the value of i is " << i << endl;
    }

    void checkit(long double i)
    {
        if (i < (-2147483647) or i > 2147483648)
        {
            cout << "overflow  value.\n exiting the program" << endl;
            exit(1);
        }
    }

    Int operator+(Int val2)
    {
        long double temp = static_cast<double long>(i) + static_cast<double long>(val2.i);
        checkit(temp);
        return Int(temp);
    }

    Int operator-(Int val2)
    {
        long double temp = static_cast<double long>(i) - static_cast<double long>(val2.i);
        checkit(temp);
        return Int(temp);
    }

    Int operator*(Int val2)
    {
        long double temp = static_cast<double long>(i) * static_cast<double long>(val2.i);
        checkit(temp);
        return Int(temp);
    }

    Int operator/(Int val2)
    {
        long double temp = static_cast<double long>(i) / static_cast<double long>(val2.i);
        checkit(temp);
        return Int(temp);
    }
};

int main()
{

    Int a(98989898);
    Int b(49898989);
    Int c;

    cout << "overloaded addition" << endl;
    c = a + b;

    c.display();

    cout << "\n overloaded substraction" << endl;
    c = a - b;
    c.display();

    cout << "\n overloaded multiplication" << endl;
    c = a * b;
    c.display();

    cout << "\n overloaded division" << endl;
    c = a / b;
    c.display();

    return 0;
}