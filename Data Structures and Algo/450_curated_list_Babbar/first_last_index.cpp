// Given a sorted array arr containing n elements with possibly
// duplicate elements, the task is to find indexes of first and last occurrences of
// an element x in the given array.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class f_index
{
public:
    vector<int> find_i(int arr[], int n, int x)
    {
        vector<int> index_ans;
        vector<int> index_ans_final;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == x)
            {
                index_ans.push_back(j);
            }
        }

        if (index_ans.size() == 0)
        {
            index_ans.push_back(-1);
            index_ans.push_back(-1);
        }

        if (index_ans.size() == 1)
        {
            index_ans.push_back(index_ans[0]);
        }

        for (auto i : index_ans)
        {
            cout << i << " ";
        }
        cout << "\n @@";
        index_ans_final.push_back(index_ans[0]);
        index_ans_final.push_back(index_ans.back());

        for (auto i : index_ans_final)
        {
            cout << i << " ";
        }

        return index_ans_final;
    }
};

int main()
{
    int arr[] = {1, 3, 5, 67, 123, 125};
    int n = 6;
    int x = 5;

    f_index obj;
    obj.find_i(arr, n, x);
    return 0;
}
