#include <iterator>
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int x[] = {1, 2, 3, 4, 5};
    vector<int> v(begin(x), end(x));
    vector<int> secondary;

    for (auto i : v)
    {
        secondary.push_back(i+2);
        cout << i;
    }

    cout << "\n secondary" << endl;
    for (auto i : secondary)
    {

        cout << i;
    }

    return 0;
}
