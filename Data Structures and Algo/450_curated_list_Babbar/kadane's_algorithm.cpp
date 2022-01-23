// Given an array Arr[] of N integers.
// Find the contiguous sub-array(containing at least one number)
// which has the maximum sum and return its sum.

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {

        vector<int> summation_array;
        int start = 0, end = 0;
        int sum_loop_array = 0;

        for (int j = 0; j < n; j++)
        {
            int sum_loop_array = 0;
            for (int i = j; i < n; i++)
            {
                sum_loop_array += arr[i];
                if (!summation_array.empty())
                {
                    int max_ele = *max_element(summation_array.begin(), summation_array.end());
                    if (sum_loop_array > max_ele)
                    {
                        start = j;
                        end = i;
                    }
                }
                summation_array.push_back(sum_loop_array);
            }
        }

        cout << "//" << endl;
        cout << "start" << start << endl;
        cout << "end" << end << endl;

        cout << "//" << endl;
        long long final_ans = 0;
        for (int z = start; z <= end; z++)
        {
            final_ans += arr[z];
        }
        summation_array.clear();
        return final_ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t, n;

    cin >> t;   // input testcases
    while (t--) // while testcases exist
    {

        cin >> n; // input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i]; // inputting elements of array

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
// } Driver Code Ends