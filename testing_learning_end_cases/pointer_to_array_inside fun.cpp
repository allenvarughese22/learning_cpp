#include <iostream>
using namespace std;

int main()
{

       int *p;
     
    // Pointer to an array of 5 integers
    int (*ptr)[5];
    int arr[5];
     
    // Points to 0th element of the arr.
    p = arr;
 
 cout<<"value of arr is "<<arr<<endl;
 cout<<"value of &arr is "<<&arr<<endl;
    // Points to the whole array arr.
     
     ///
   //   important 
     ////
     ptr = &arr; // will work
     ptr = arr;  // will not work
   
     
    cout << "p =" << p <<", ptr = "<< ptr<< endl;
    p++;
    ptr++;
    cout << "p =" << p <<", ptr = "<< ptr<< endl;
     
    return 0;
}

// void fun(int** ptr_o)
// {
// }