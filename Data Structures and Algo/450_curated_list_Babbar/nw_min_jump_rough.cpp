//not working
//read the question wrongly

//Minimum number of jumps

//this pro

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

int main()
{

    // int arr[] = {1, 40, 30, 2, 6, 7};
    //  int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int arr[] = {2, 3, 1, 1, 2, 4, 2, 0, 1, 1}; //4 correct
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "n" << n << endl;

    vector<int> arr_v(begin(arr), end(arr));
    vector<int>::iterator ptr = arr_v.begin();

    int j_val = arr[0];
    int c_index = 0;

    int count = 0;

    // if <= given then looop will jump one more time if the end reaches
    while (c_index < n - 1)
    {
        if (j_val == 0)
        {
            return -1;
        }

        // if (0  <= c_index and c_index < n)
        // if (arr_v.begin() <= ptr and ptr < arr_v.end())
        // {
        advance(ptr, j_val);
        // order is important
        count++;

        cout<<"j_val"<<j_val<<endl;
        
        c_index = c_index + j_val;
        if (0 <= c_index and c_index < n)
        {
            j_val =  *ptr;
            cout << "inside" << endl;
        }

        cout << "c_index " << c_index << endl;
         cout << "value at ptr  " << *ptr << endl;
        cout << "count " << count << endl;
        // }

        cout << "" << endl;
    }

    return 0;
}