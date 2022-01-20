#include <iostream>
using namespace std;

int main()
{
    void c_array(int []);
    int size = 4;
    int a[] {1, 2, 3, 4};

    cout << "before" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    c_array(a);
    cout << "after" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

void c_array(int a[])
{

    int b[] = {10, 20, 30, 40};
a = &b[0];
//      /// will work for calling a inside function
// //outside this function this does not make sense as b[] is local
// a = &b[0]; address is copied
// but while calling from outside address of b is garbage

     
     cout<<"//"<<endl;
     cout<<a[1]<<endl;
     cout<<"//"<<endl;
}