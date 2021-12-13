#include <iostream>
using namespace std;

class safearray
{
    
    static const int LIMIT = 20;
    
    int arr[LIMIT];

public:
    putel(int index, int value)
    {
        if ((0 <= index) and (index <= (LIMIT - 1)))
        {
            arr[index] = value;
        }
        else
        {
            cout << "out of bound" << endl;
        }
    }
    get(int index)
    {
        if (0 <= index and index <= LIMIT -1 )
        {
            int temp = arr[index];
            cout << temp << endl;
        }
        else
        {
            cout << "out of bound" << endl;
        }
    }
};

// int safearray::LIMIT = 10;

int main()
{
    safearray sa1;
    int temp = 12345;
    sa1.putel(12,temp);
    sa1.get(12);

     const int t = 5;
    cout<<t<<endl;
    return 0;
}