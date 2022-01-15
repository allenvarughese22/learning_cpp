#include <iostream>
using namespace std;

int main()
{
    void fun(int(*ptr_o)[5]);
    // void fun(int** ptr_o);

       int *p;
     
    // Pointer to an array of 5 integers
    int (*ptr)[5];
    int arr[5];
     
    // Points to 0th element of the arr.
    p = arr;
     
     ptr = &arr; // will work  
     fun(ptr);
  
     
    return 0;
}

 void fun(int(*ptr_o)[5])
// void fun(int** ptr_o)
// void fun(int** ptr_o)


{
    cout<<"this is working"<<endl;
}