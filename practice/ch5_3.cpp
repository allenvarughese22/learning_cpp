#include <iostream>
using namespace std;

void zeroSmall(int &, int &);

int main()
{
    int first, second;
    cout << " enter the first number"<< endl;
    cin >> first;

    cout << " enter the second number"<< endl;
    cin >> second;
    zeroSmall(first, second);

    cout << " the numbers after function  are " << endl;
    cout << first << " and " << second;
}

void zeroSmall(int &first, int &second)
{
    if (first < second)
    {
        first = 0;
    }

    else if (first > second)
    {
        second = 0;
    }

    else if (first == second)
    {
        cout << "both the nummbers are same";
    }
}