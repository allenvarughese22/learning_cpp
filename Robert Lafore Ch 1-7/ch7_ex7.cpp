#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <cmath>
#include <cstring>
#include <math.h>
#include <stdlib.h>

using namespace std;
const int size = 100;

int main()
{
    void mstold(char[]);
    char array[size];
    cout << "enter the amount" << endl;
    cin >> array;
    // cout<<strlen(array)<<endl;
    mstold(array);
}

void mstold(char array[])
{
    int count = 0;
    // char pure[strlen(array)];
    int index_pure = 0;
    for (int i = 0; i < strlen(array); i++)
        // if ((int(array[i]) < 58 and int(array[i]) > 48) or (array[i] == ','))
        if ((int(array[i]) < 58 and int(array[i]) > 48) or (array[i] == '.'))
        {
            count++;
        }
    cout << "count" << endl;

    cout << count << endl;
    char pure[count + 1];
    for (int i = 0; i < strlen(array); i++)
        // if ((int(array[i]) < 58 and int(array[i]) > 48) or (array[i] == ','))
        if ((int(array[i]) < 58 and int(array[i]) > 48) or (array[i] == '.'))
        {

            pure[index_pure] = array[i];
            cout << int(array[i]) << endl;
            ++index_pure;
        }
    pure[index_pure] = '\0';
    cout << "pure" << endl;
    cout << pure << endl;
    long double money = atof(pure);
    long double money2 = strtold(pure,NULL);
    cout << "money" << endl;
    cout << money << endl;
    cout << "money_2" << endl;
    cout << money2 << endl;



    // furhter improvement
    // atoi is working and converting the string array to int
    // however the array to double is not working
    // require more expertice on this

    // return money and change the return type of function
}
