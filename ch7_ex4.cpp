#include <iostream>
using namespace std;

int main()
{
    int size_list;
    cout << "enter the number of elements you want to store in array" << endl;
    cin >> size_list;

    // i think this type of getting array lenght from user during compilation is 
    // not supported in standard c++
    
    int list[size_list];
    int maxint(int[], int);

    int index = 0;
    int largest_index;

    // getting the values for the array
    for (int i = 0; i < size_list; i++)
    {
        cout << "enter the number" << endl;
        cin >> list[index];

        index++;
    }
    // printing the array
    for (int j = 0; j < size_list; j++)
    {
        cout << list[j] <<"  " <<ends;
    }

    largest_index = maxint(list, size_list);
    cout << "the largest value: " << list[largest_index];
    cout << "the largest value index: " << largest_index;
}

// function to calculate the index of largest value in an array
int maxint(int list[], int size_array)
{
    int largest_value = list[0];
    int largest_index = 0;
    for (int k = 0; k < (size_array); k++)
    {

        if (list[k] > largest_value)
        {
            largest_value = list[k + 1];
            largest_index = k;
        }
    }

    // cout << "the largest value: " << largest_value;
    // cout << "the largest value index: " << largest_index;
    return largest_index;
}