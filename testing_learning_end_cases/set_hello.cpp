#include <iostream>
#include <set>
using namespace std;
//
// variable length array in stl
// const int
// no matching function for call to ‘begin(int [n])’


int main()
{
    // int a[] = {1,2,3,4,5,5,5};
    // std::set<int> s1{std::begin(a), std::end(a)};
    // cout<<s1.size();
      int c = 3, d = 2;
     const int m = c, n = d;
    int a[m] = {1, 2, 3};

    int b[n] = {1, 2};

    int result[m + n];
    std::copy(a, a + 3, result);
    std::copy(b, b + 2, result + 3);
    for (int i = 0; i < (5); i++)
    {

        cout << result[i] << endl;
    }
    //  std::set<int> s1{std::begin(result), std::end(result)};

    std::set<int> s1{std::begin(result), std::end(result)};
    cout << s1.size();
    return 0;
}