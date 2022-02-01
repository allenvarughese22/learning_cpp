#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int arr[10] = {0};
    std::fill_n(arr, 10, -1);

    for (auto i : arr)
    {
        cout<<i<<endl;
    }
    return 0;
}