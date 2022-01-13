#include <iostream>
using namespace std;

int main()
{
void p(int**i);
    int i;
    int a[2] = {10,20};
    int *ptr[2] ;
    *(ptr) = &a[0];
    *(ptr +1) = &a[1];
    
    p(ptr);
    return 0;
}
void p(int**i)
    {
        cout <<"h";
    }