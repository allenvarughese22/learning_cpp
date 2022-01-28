// { Driver Code Starts
// Initial template for C++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int getMinDiff(int arr[], int n, int k)
    {

        // int arr[] = {3, 9, 12, 16, 20};
        // int k = 3;
        // vector<int> tower_v(std::begin(arr), std::end(arr));
        vector<int> tower_v;
        for (int i = 0; i < n; i++)
        {
            tower_v.push_back(arr[i]);
        }

        //         // small tower -> sm_tower
        //         // largest tower - >la_tower
        int sm_tower = *min_element(tower_v.begin(), tower_v.end());
        int la_tower = *max_element(tower_v.begin(), tower_v.end());
        // cout << "s_tower : " << sm_tower << endl;
        // cout << "la_tower : " << la_tower << endl;
        for (int i = 0; i < tower_v.size(); i++)
        {
            if (tower_v[i] < sm_tower + k)
            {
                //     cout << "smaller than converted small " << tower_v[i] << endl;
                tower_v[i] = tower_v[i] + k;
            }

            else if (tower_v[i] > sm_tower - k)
            {
                // cout << "larger than converted small " << tower_v[i] << endl;
                tower_v[i] = tower_v[i] - k;
            }
        }

        int n_small_tower = *min_element(tower_v.begin(), tower_v.end());
        int n_larg_tower = *max_element(tower_v.begin(), tower_v.end());

        int tower_differnce = n_larg_tower - n_small_tower;
        // cout << "\n tower_differnce:  "<<tower_differnce<<endl;
        return tower_differnce;
        // return 0;
    } // code here
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends