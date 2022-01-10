#include <iostream>
using namespace std;

int main()
{
    int size_array;
    int value;

    cout << "enter the number of digits you want to insert in a array" << endl;
    cin >> size_array;
    float *ptr_array = new float[size_array];
    for (int i = 0; i < size_array; i++)
    {
        cout << "enter the value" << endl;
        cin >> *(ptr_array + (i));
    }

    cout << "the entered values are" << endl;
    for (int i = 0; i < size_array; i++)
    {
        cout << *(ptr_array + i) << endl;
    }
    delete[] ptr_array;
    return 0;
}