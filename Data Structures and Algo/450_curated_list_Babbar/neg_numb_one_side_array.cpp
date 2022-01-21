// Move all negative numbers to beginning and positive 
// to end with constant extra space

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    void seperat_pos_neg(int[], int);
    int arr[] = {20, 2, -3, 4, 5, 6, -7, -8, 9};

    // size of array
    int size_array = sizeof(arr) / sizeof(arr[0]);

    // before separation
    cout << "\n array before seperation" << endl;
    for (int i = 0; i < size_array; i++)
    {
        cout << arr[i] << "\t";
    }

    seperat_pos_neg(arr, size_array);

    cout << "\n array after seperation" << endl;
    for (int i = 0; i < size_array; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}

void seperat_pos_neg(int arr[], int n)
{

    // initializing 3 vectors to store the value of array
    vector<int> neg_array;
    vector<int> pos_array;
    vector<int> merge_array;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            neg_array.push_back(arr[i]);
        }
        else
        {
            pos_array.push_back(arr[i]);
        }
    }
    // merge_array.inser
    merge_array.insert(merge_array.end(), neg_array.begin(), neg_array.end());
    merge_array.insert(merge_array.end(), pos_array.begin(), pos_array.end());

    // assigning value of merge_array to orginal array
    for (int i = 0; i < n; i++)
    {
        arr[i] = merge_array[i];
    }
}