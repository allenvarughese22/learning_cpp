#include <iostream>
using namespace std;

//this function explains even though the argument is passed by reference
//the address of pointer inside function is different than that sent

//hence when we sent a pointer to argument, it is copied and copied value is use

// the value remains same but there will be copies of pointer value stored at two different memory block

//this does makes difference till we pass pointer to array or normal int

//but while passing pointer value of array of pointer to function we have to use pointer to pointer

int main()
{
     void call_fun(int *);
    int a = 5;
    int *ptr_int = &a;
      cout << "the address of ptr_int in main  function is :" << &ptr_int << endl;
      cout << "the value of  ptr_int in main  function is :" << ptr_int << endl;

    call_fun(ptr_int);

    return 0;
}

void call_fun(int* ptr_int_inside)
{
    cout << "the address of ptr_int inside function is :" << &ptr_int_inside << endl;
}