// Given a string S, check if it is palindrome or not.

// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int isPalindrome(string a)
    {
        int string_len = a.length();
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        for (int i = 0; i < (string_len / 2); i++)
        {
            if (a[i] == a[string_len - 1 - i])
                
                {
                    continue;
                }
            else
            {
                return 0;
            }
        }
        return 1;
    }
};

// { Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        Solution ob;

        cout << ob.isPalindrome(s) << "\n";
    }

    return 0;
} // } Driver Code Ends