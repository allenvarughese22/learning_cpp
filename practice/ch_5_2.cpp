// prrogramme to find the power of a number

#include <iostream>
using namespace std;
double power_function(double, int = 3);

int main()
{
    int power;
    double number;

    cout << "enter the number" << endl;
    cin >> number;
    cout << "do you want to enter power. enter 'y' for yes" << endl
         << "enter 'n' for no" << endl;

    char ans;
    cin >> ans;
    if (ans == 'y')
    {
        cout << "enter the power to be raised" << endl;
        cin >> power;
        double value = power_function(number, power);
         cout << "the final value is " << value << endl;
    }

    // providing power_function(number, power) without providing the 
    //value for power will run the code but the
    //value will be wrongs
    
    else
    {
        cout << "else" << endl;
        double value = power_function(number);
         cout << "the final value is " << value << endl;
    }

   
}

double power_function(double n, int p)
{
    double power_value = 1;

    cout << "the value of p is " << p << endl;
    for (int i = 0; i < p; i++)
    {
        power_value *= n;
    }
    return power_value;
}