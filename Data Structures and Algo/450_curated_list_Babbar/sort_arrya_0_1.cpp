// Given an array of size N containing only
// 0s, 1s, and 2s; sort the array in ascending order.

// { Driver Code Starts
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void sort012(int* a, int n)
    {
        std::vector<int> arr_0;
        std::vector<int> arr_1;
        std::vector<int> arr_2;
        // std::vector<int> arr_merge(arr_0.size()+arr_1.size()+arr_2.size());
        std::vector<int> arr_merge;
        // arr_merge.reserve(n);

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                arr_0.push_back(0);
            }

            else if (a[i] == 1)
            {
                arr_1.push_back(1);
            }
            else
            {
                arr_2.push_back(2);
            }
        }

        arr_merge.insert(arr_merge.end(), arr_0.begin(), arr_0.end());
        arr_merge.insert(arr_merge.end(), arr_1.begin(), arr_1.end());
        arr_merge.insert(arr_merge.end(), arr_2.begin(), arr_2.end());
        
      

        for (int i = 0; i < arr_merge.size(); i++)
        {
            a[i] = arr_merge[i];
        }
            
        
        //  merge(arr_0.begin(),arr_0.end(), arr_1.begin(),arr_1.end(),arr_2.begin(),arr_2.end(),arr_merge.begin());
    }
};

// { Driver Code Starts.
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);
        cout<<"address outside"<<&a;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends