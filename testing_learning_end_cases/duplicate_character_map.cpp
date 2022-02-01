#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include <string>
#include <map>

int main()
{

    string s = "hellaaaao";

    map<char, int> m;
    map<char, int>::iterator it;

    // map::iterator m_i;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }

    // for (auto i : m)
    // {
    //     if (i.second > 1)
    //     {
    //         cout << i.first << " " << i.second << endl;
    //     }
    // }

    // (*it).first or it-> can be used;

    for (it = m.begin(); it != m.end(); it++)
    {
        if (it->second > 1)
        {
            cout << "character  " << (*it).first << " repeated " << it->second << endl;
        }
    }

    return 0;
}