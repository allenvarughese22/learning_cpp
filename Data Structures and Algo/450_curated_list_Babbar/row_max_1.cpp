// Given a boolean 2D array of n x m dimensions where each row is sorted.
// Find the 0-based index of the first row that has the maximum number of 1's.

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class row_max
{
public:
    int r_max(vector<vector<int>> arr, int n, int m)
    {
        int h_r = -1;
        int r_sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (accumulate(arr[i].begin(), arr[i].end(), 0) > r_sum)
            {
                r_sum = accumulate(arr[i].begin(), arr[i].end(), 0);

                h_r = i;
            }
        }
        return h_r;
    }
};
int main()
{
    row_max r;
    vector<vector<int>> mat = {{0, 0}, {0, 0}};
    // vector<vector<int>> mat =
    //     {{0, 0, 0, 0, 1, 1, 1, 1},
    //      {0, 0, 0, 0, 0, 1, 1, 1},
    //      {0, 0, 0, 0, 1, 1, 1, 1},
    //      {0, 0, 1, 1, 1, 1, 1, 1},
    //      {0, 0, 1, 1, 1, 1, 1, 1},
    //      {0, 0, 0, 1, 1, 1, 1, 1},
    //      {1, 1, 1, 1, 1, 1, 1, 1},
    //      {0, 0, 0, 0, 1, 1, 1, 1},
    //      {0, 0, 1, 1, 1, 1, 1, 1}};

    // {{0, 1, 1,1},
    //                             {0, 0, 1,1},
    //                             {1, 1, 1,1},
    //                             {0, 0, 0,0}};

    int row = mat.size();
    int col = mat[0].size();
    cout << "row with highest value  " << r.r_max(mat, row, col);

    return 0;
}