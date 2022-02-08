// leetcode problem statement is different

// not matching with the leetcode problem statement


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int  main()
{
    string s = "3322251";
    string ar;
    int count = 1;

    // if (n==1)
    // {
    //     ar = ar + to_string(1);
    //     return ar;
    // }

    for (int i = 1; i <= s.length(); i++)
    {

        if (s[i] == s[i - 1])
        {
            count++;
        }

        else if (s[i] != s[i - 1])
        {
            ar = ar + to_string(count);
            ar = ar + s[i - 1];
            // cout << "////////" << endl;
            // for (auto i : ar)
            // {
            //     cout << i << endl;
            // }
            // cout << "////////" << endl;
            // count = 1;
        }
    }

    // cout << "??" << endl;
    // for (auto i : ar)
    // {
    //     cout << i ;
    // }

    return 0;
}