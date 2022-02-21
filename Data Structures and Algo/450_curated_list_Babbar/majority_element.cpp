// Given an array A of N elements. Find the majority element in the array.
//  A majority element in an array A of size N is an element
//  that appears more than N/2 times in the array.

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class cl
{
public:
    int majority_element(int a[], int size)
    {

        map<int, int> count;
        for (int i = 0; i < size; i++)
        {
            count[a[i]]++;
        }

        for (auto it : count)
        {
            if (it.second > (size/2))
                
                return it.first;
        }
        return -1;
    }
};

int main()
{
    int a[] = {1,2,3};
    int size = sizeof(a) / sizeof(a[0]);
    cl obj;
    cout<<obj.majority_element(a, size);
    return 0;
}