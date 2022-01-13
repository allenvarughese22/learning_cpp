#include <iostream>

using namespace std;

int main()
{
    void addarrays(float *, float *, float *, int);
    float array1[] = {1.2, 2.2, 3.3};
    float array2[] = {10.1, 20.2, 30.3};
    int size = sizeof(array1) / sizeof(array1[0]);
    float array3[size];

    addarrays(array1, array2, array3, size);

    cout << "elements of first array" << endl;
    for (size_t i = 0; i < size; i++)
    {
        cout << *(array1 + i) << "\t";
    }
    cout << endl;

    cout << "elements of second array" << endl;
    for (size_t i = 0; i < size; i++)
    {
        cout << *(array2 + i) << "\t";
    }
    cout << endl;

    cout << "elements of the third  array consisting the sum of first two array" << endl;
    for (size_t i = 0; i < size; i++)
    {
        cout << *(array3 + i) << "\t";
    }
    cout << endl;

    return 0;
}
void addarrays(float *a1, float *a2, float *a3, int s)
{
    for (int i = 0; i < s; i++)
    {
        *(a3 + i) = *(a1 + i) + *(a2 + i);
    }
}
