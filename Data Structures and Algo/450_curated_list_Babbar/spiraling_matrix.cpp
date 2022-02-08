#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int r = 3, c = 3;
    vector<int> sp;
    vector<vector<int>> matrix = {{1, 2, 3},
                                  {4, 5, 6},
                                  {7, 8, 9}};



// matrix[row last][c-1,c-2]

    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {

    //         cout << matrix[0][j] << endl;
    //     }
    // }

    //   matrix[row 1,2][c-1]
    for (int j = 0; j < c; j++)
    {

        // cout << matrix[0][j] << endl;
        sp.push_back(matrix[0][j]);
    }

    for (int i = 1; i < r; i++)
    {
        sp.push_back(matrix[i][c - 1]);
    }
// matrix[r-1][c[1],c[0]]

    for (int i = c-2; i >= 0; i--)
    {
        sp.push_back(matrix[r-1][i]);
    }

    for (auto i : sp)
    {
        cout << i;
    }

    return 0;
}