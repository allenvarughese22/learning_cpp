// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

//     Integers in each row are sorted from left to right.
//     The first integer of each row is greater than the last integer of the previous row.

#include <iostream>

#include <vector>

using namespace std;

class find_e
{
public:
    bool f_e_mat(vector<vector<int>> m, int t)
    {
        int r = m.size();
        int c = m[0].size();

        cout << "rows :" << m.size() << endl;
        cout << "col :" << c << endl;

        for (int i = 0; i < r; i++)
        {
            if (t <= m[i][c - 1])
            {
                for (int j = 0; j < c; j++)
                {
                    if (m[i][j] == t)
                    {
                        return true;
                    }
                }
            }
        }

        return false;
    }
};

int main()
{
    int t = 2;
    vector<vector<int>> m = {{1, 3, 5, 7},
                             {10, 11, 16, 20},
                             {23, 30, 34, 60}};

    find_e a_obj;

    cout << a_obj.f_e_mat(m, t) << endl;
    return 0;
}