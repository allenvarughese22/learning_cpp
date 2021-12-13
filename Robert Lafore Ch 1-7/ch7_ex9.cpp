#include <iostream>
using namespace std;

class que
{
    
    static const int size = 10;
    int head, tail;
    int ar[size];

public:
    que() {head = -1, tail = -1}
    put(int v)
    {
        // ++head;
        ar[tail] = v;
        tail--;0.
    }
    get()
    {
        cout << ar[head] << endl;
        head--;
    }
};

int main()
{
    que q;
    q.put(5);
    q.get();
    return 0;
}