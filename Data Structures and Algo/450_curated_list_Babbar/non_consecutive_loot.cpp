#include <iostream>
#include <vector>
using namespace std;

class cl
{
public:
    int FindMaxSum(int arr[], int n)
    {
        int sum_e=0;
        for (int i = 0; i < n; i +=2)
        {
            sum_e = sum_e +arr[i];
        }

        int sum_o =0;
        for (int i = 1; i < n; i +=2)
        {
            sum_o = sum_o +arr[i];
        }

        // cout<<"sum_o  "<<sum_o<<endl;

        // cout<<"sum_e  "<<sum_e<<endl;

        return max(sum_e,sum_o);

    }
};
int main()
{
    int arr[] = {1,5000,200,50,9000,5};
    500 90000

    int n = sizeof(arr) / sizeof(arr[0]);
    cl obj;
    cout << "answer" << endl;
    cout << obj.FindMaxSum(arr, n) << endl;
    return 0;
}