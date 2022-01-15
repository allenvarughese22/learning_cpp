#include <iostream>
using namespace std;

int main()
{
    int A[2][2] = {{1, 2},
                   {2, 3}};
    // pointer is pointing to int type
    // if we provide A then A's type will be (*)
    // int *ptr = A; will not work

    // ################**************###########
    // int *ptr = *A;  /wil work

    int(*ptr)[2] = A; // will work

    int(*p)[2][2] = &A;

    cout << " ptr  :" << ptr << endl;
    cout << " * ptr  :" << *ptr << endl;
    cout << " ** ptr  :" << **ptr << endl;
    cout << " & ptr  :" << &ptr << endl;
    cout << " p  :" << p << endl;
    cout << " *p  :" << *p << endl;
    cout << " **p  :" << **p << endl;
    cout << " ***p  :" << ***p << endl;

    cout << "& p  :" << &p << endl;

    /// here the p and & ptr are not same...
    //imp.. ptr is declare to int(*ptr)[2].
    //ptr does not know about the A[2][2] as ptr is pointing one layer 
    // inside the A array 

    return 0;
}