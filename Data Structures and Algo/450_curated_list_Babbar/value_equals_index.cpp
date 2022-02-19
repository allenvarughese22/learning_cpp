// Given an array Arr of N positive integers. Your task is to find the
// elements whose value is equal to that of its index value
//  ( Consider 1-based indexing ).

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class cl
{
public:
    vector<int> valueEqualToIndex(int arr[], int n)
    {
        vector<int> num;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == (j + 1))
            {
                num.push_back(j + 1);
            }
        }

        for (auto i : num)
        {
            cout << i << " " << endl;
        }
    }
};

int main()
{
    cl obj;
    int arr[] = {1, 2, 3, 4, 5, 45, 12, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    obj.valueEqualToIndex(arr, n);

    return 0;
}
