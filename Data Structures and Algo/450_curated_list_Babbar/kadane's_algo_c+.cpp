#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{

    int arr[] = {-4, -5, -6, 10, 20};

    // initializing the array
    vector<int> largest_array;
    vector<int> largest_sum{arr[0]};

    // finding size of given array
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        // long long acc = (accumulate(largest_array.begin(), largest_array.end(), 0));
        // cout<<"acc"<<acc<<endl;
        if ((accumulate(largest_array.begin(), largest_array.end(), 0)) < 0)
        {
            largest_array.clear();
            largest_array.push_back(arr[i]);

            if (accumulate(largest_array.begin(), largest_array.end(), 0) >= (accumulate(largest_sum.begin(), largest_sum.end(), 0)))
            {
                largest_sum.clear();
                largest_sum.push_back(accumulate(largest_array.begin(), largest_array.end(), 0));
            }
        }

        else
        {
            largest_array.push_back(arr[i]);
            if (accumulate(largest_array.begin(), largest_array.end(), 0) >= (accumulate(largest_sum.begin(), largest_sum.end(), 0)))
            {
                largest_sum.clear();
                largest_sum.push_back(accumulate(largest_array.begin(), largest_array.end(), 0));
            }
        }
    }
    cout << "largest sum" << endl;

    for (auto i : largest_sum)
    {
        std::cout << i << ' ';
    }

    return 0;
}