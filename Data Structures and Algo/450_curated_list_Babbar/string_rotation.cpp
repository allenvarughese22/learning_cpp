// check a string is cyclic of another string

// solution works

// exceeds time limt

//..need to optimize

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include <string>

int main()
{

    string s = "geeksforgeeks";
    string ro = "forgeeksgeeks";

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(ro.begin(), ro.end(), ro.begin(), ::tolower);

    string dup_s = s;
    // reverse(dup_s.begin(),dup_s.end());

    vector<string> v;

    for (int i = 0; i < s.length(); i++)
    {
        string temp, temp2, f_string;
        temp = dup_s.substr(dup_s.size() - i);
        temp2 = s.substr(0, dup_s.size() - i);
        f_string = temp + temp2;
        v.push_back(f_string);
        // cout << "temp  " << temp << endl;
        // cout << "temp2 " << temp2 << endl;
        // cout << "f_string " << f_string << endl;
        // cout << " " << endl;
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == ro)
        {
            cout << "_ true__";
        }
    }

    return 0;
}