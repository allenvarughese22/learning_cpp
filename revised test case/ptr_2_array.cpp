// explaining why passing element address to pointer to
// array doesn't work

#include <iostream>
using namespace std;

int main()
{

    int arr[3] = {1, 2, 3};

    // pointer to array of 5 elements(the array is  1d array) of type integers
    int(*ptr)[3];

    ptr = &arr;

    // ptr = arr; // will not work
    // calling arr will result in array decay
    // due to this the pointer will point to single element
    // we required pointer to point to entire array .. hence we need to use &arr

    cout << "ptr   :" << ptr << endl;
    cout << "*ptr   :" << *ptr << endl;
    cout << "**ptr   :" << **ptr << endl;
    // cout << "***ptr   :" << ***ptr << endl; // will not work

    // same logic below code will also run
    int b_array[3][3];
    int(*p)[3][3];
    p = &b_array;

    return 0;
}