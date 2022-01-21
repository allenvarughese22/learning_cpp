//union of array -gfg

// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
#include <vector>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution
{
public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)
    {
        std::vector<int> a_v(a, a + n);
        std::vector<int> b_v(b, b + m);

        cout<<"a_v"<<endl;
        for (int i = 0; i < n; i++)
        {

            cout << a_v[i] << endl;
        }

        cout<<"b_v"<<endl;
        for (int i = 0; i < m; i++)
        {

            cout << b_v[i] << endl;
        }

        vector<int> results;
        results.reserve(m + n);
        results.insert(results.end(), a_v.begin(), a_v.end());
        results.insert(results.end(), b_v.begin(), b_v.end());

        cout << "result values" << endl;
        cout << "//" << endl;
        for (int i = 0; i < (n + m); i++)
        {

            cout << results[i] << endl;
        }
        cout << "//" << endl;
        std::set<int> s1{std::begin(results), std::end(results)};

        int uni = s1.size();
        return uni;
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    cout << "enter t" << endl;
    cin >> t;

    while (t--)
    {

        int n, m;
        cout << "size n m" << endl;
        cin >> n >> m;
        int a[n], b[m];

        for (int i = 0; i < n; i++)
        {
            cout << "n value" << endl;
            cin >> a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cout << "m value" << endl;
            cin >> b[i];
        }

        Solution ob;
        cout << ob.doUnion(a, n, b, m) << endl;
    }

    return 0;
} // } Driver Code Ends