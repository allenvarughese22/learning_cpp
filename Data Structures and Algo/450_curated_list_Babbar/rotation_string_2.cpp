// program to find whether a strings are rotations of each other or not 

//workig and accepted



#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s1 = "hello";
    string s2 = "ohell";

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    string s_j = s2 + s2;
    if (s_j.find(s1) != std::string::npos and s1.length() == s2.length())
    {
         std::cout << "cyclic!" << '\n';
        return 1;
    }
    else
    {
         std::cout << "not a cyclic!" << '\n';
        return 0;
    }


return 0;
}