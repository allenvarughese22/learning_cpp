#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> m{1, 2};
    vector<int>::iterator it;

    // for (auto i : a)
    // {
    //     cout << i << endl;
    // }

    for (it = m.begin(); it != m.end(); it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}