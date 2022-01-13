#include <iostream>
using namespace std;


int main()
{
    void test(int*[2]);
    void testb(int(*b)[2]);
    // array of pointer
    int *a[2];
    cout<<"a[0]  is "<<a[0]<<endl;
    cout<<"*a  is "<<*a<<endl;
    cout<<"a out side function"<<a<<endl;
    cout<<"&a[0] out side function"<<&a[0]<<endl;

    test(a);

    // int* d ={1,2};
    char* e = {"hellp"};


    // pointer to array
    int(*b)[2];
    testb(b);

    // cout << "a-:\t" << a << endl;
    // cout << "&a-:\t" << &a << endl;

    // cout << "b-:\t" << b << endl;
    // cout << "&b-:\t" << &b << endl;

    return 0;
}

void test(int*a[2])
{
    cout <<"a - :"<< (a) << endl;
}

void testb(int(*b)[2])
{
    cout << "b  :"<<b << endl;
}