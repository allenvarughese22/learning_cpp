#include <iostream>
using namespace std;

int main()
{
    // int* a={1};// will not work as righ side is int

    char*a="hello";// wrong but will work(with error) as right side is string literal
    // string literal type is char const *

    // correct way to initialize string literal is :
    char const *b = "this will print without error";

    // char const * b = ; //will not work as const is at wrong place

    cout<<a<<endl;
    cout << b << endl;

    return 0;
}