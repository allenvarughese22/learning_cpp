#include <iostream>
using namespace std;

int main()
{
    void swap(int &, int &);
    int a = 5, b = 10;
    cout << "the value of a is" << a << endl;
    cout << "the value of b is" << b << endl;

    swap(a, b);

    cout << "______after swapping_______" << endl;
    cout << "the value of a is  " << a << endl;
    cout << "the value of b is  " << b << endl;
}

void swap(int &f, int &g)
{
    int temp = f;
    f = g;
    g = temp;
}