// explaining why passing element address to pointer to
// array doesn't work

#include <iostream>
using namespace std;

int main()
{
    void ptr_fun (int(*ptr) [3]);
    int arr[3] = {1, 2, 3};

    // pointer to array of 5 elements(the array is  1d array) of type integers
    int(*ptr)[3];
    ptr = &arr;

    ptr_fun(ptr);
    return 0;
}

void ptr_fun (int(*ptr) [3])
{
   cout << "ptr   :" << ptr << endl;
    cout << "*ptr   :" << *ptr << endl;
    cout << "**ptr   :" << **ptr << endl;
}