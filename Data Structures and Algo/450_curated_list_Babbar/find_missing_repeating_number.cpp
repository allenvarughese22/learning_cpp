// Given an unsorted array Arr of size N of positive integers.
//  One number 'A' from set {1, 2, …N} is missing
// and one number 'B' occurs twice in array. Find these two numbers.

#include <iostream>
#include <vector>
using namespace std;

class cl
{
public:
    vector<int> findTwoElement(int *arr, int n)
    {
        vector<int> temp(n + 1);
        vector<int> final = {0, 0};

        // no n+1 as
        for (int i = 0; i < n; i++)
        {
            temp[arr[i]] = temp[arr[i]] + 1;
        }

        // important : see the n+1
        for (int j = 1; j < n + 1; j++)
        {
            if (temp[j] == 2)
            {
                //  cout<<"dup"<<j<<endl;
                final[0] = j;
            }

            if (temp[j] == 0)
            {
                //  cout<<"missing"<<j<<endl;
                final[1] = j;
            }
        }

        for (auto i : temp)
        {
            cout << "t " << i << endl;
        }

        for (auto i : final)
        {
            cout << "final " << i << endl;
        }
        return final;
    }
};
int main()
{

    cl obj;

    int arr[] = {2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    obj.findTwoElement(arr, n);
    return 0;
}