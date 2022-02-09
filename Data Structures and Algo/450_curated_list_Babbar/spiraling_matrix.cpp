// Given a matrix of size r*c. Traverse the matrix in spiral form.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int r = 5, c = 4;
    vector<int> sp;
    
    vector<vector<int>> matrix = 
    {{22, 20, 29, 17},
     {6, 21,  13, 19},
     {17, 11, 3,  5},
     {29, 27, 16, 21},
     {10, 11, 21, 7}};

    //  22 20 29 17
    //  6 21  13 19
 


    int f_m_s = r * c;
    int z = 0;
    while (sp.size() < f_m_s)
    {
        for (int i = c - c + z; i <= c - 1 - z; i++) // first row({1, 2, 3, 4})(6,7)
        {

            // cout << matrix[0][j] << endl;
            sp.push_back(matrix[z][i]);
        }
        if (sp.size() >= f_m_s)
        {
            break;
        }

        for (int i = 1 + z; i < r - z; i++) // first outer right(8,12,16) (11)
        {
            sp.push_back(matrix[i][c - 1 - z]);
        }
        if (sp.size() >= f_m_s)
        {
            break;
        }
        // matrix[r-1][c[1],c[0]]

        for (int i = c - 2 - z; i >= 0 + z; i--) // first down (15,14,13)
        {
            sp.push_back(matrix[r - 1 - z][i]);
        }
        // matrix [ r-1 , r>0,i--]
        if (sp.size() >= f_m_s)
        {
            break;
        }
        for (int i = r - 2 - z; i > 0+z; i--) // first outer left(9,5)
        {
            cout << "z" <<  z << endl;
            sp.push_back(matrix[i][c - c + z]);
        }

        z++;
    }
    cout << " " << endl;
    for (auto i : sp)
    {

        cout << i << " ";
    }

    return 0;
}