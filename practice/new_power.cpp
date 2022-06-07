#include <iostream>
using namespace std;
double power_f (int, int=5 );


int main()
{
int number =4;
double value = power_f(number);

// int value = power_f(number)

cout<< "the power is "<< value <<endl;

}

double power_f(int n, int p)
{
    double power_value = 1;
    for (int i = 0; i < p; i++)
    {
        power_value *= n;
    }
    return power_value;
}

