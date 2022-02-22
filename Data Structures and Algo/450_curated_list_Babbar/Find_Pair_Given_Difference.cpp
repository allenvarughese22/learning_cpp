// Given an array Arr[] of size L and a number N, you need to write a 
// program to find if there exists a pair of elements 
// in the array whose difference is N.

#include <iostream>
#include <vector>
using namespace std;

class cl
{
public:
    int findPair(int arr[], int size, int n)
    {
        vector<int> m_arr;
        if (n==0)
        {
            return false;
        }

        for (int i = 0; i < size; i++)
        {
            m_arr.push_back(arr[i] + n);
        }

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (m_arr[i] == arr[j])
                {
                    cout<<"hello"<<endl;
                    // return 1;
                }
            }
        }

        // for (auto i : m_arr)
        // {
        //     cout << i << endl;
        // }
        // cout << "next" << endl;

        // for (int i = 0; i < size; i++)
        // {
        //     cout << arr[i] << endl;
        // }

        return -1;
    }
};
int main()
{

    int arr[] = {5, 20, 3, 2, 5, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 78;
    cl obj;
    cout << obj.findPair(arr, size, n);
    return 0;
}