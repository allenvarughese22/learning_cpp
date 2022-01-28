#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include <string>
using std::cin;
using std::endl;

int main()
{
    int pallindrome(string , int );
    string a = "Malayalam";
    int string_len = a.length();
    // int ans = pallindrome(a,string_len);
    cout <<  pallindrome(a,string_len) << endl;
    // cout <<  ans << endl;
    return 0;
}

int pallindrome(string a, int string_len)
{
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

    return 1;
}
