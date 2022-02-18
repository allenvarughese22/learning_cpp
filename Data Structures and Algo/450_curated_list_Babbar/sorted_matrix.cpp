// Given an NxN matrix Mat. Sort all elements of the matrix.


#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

class sort_m
{
public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat)
    {
        deque<int> raw_m;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                // cout << Mat[i][j] << endl;
                raw_m.push_back(Mat[i][j]);
            }
        }

        sort(raw_m.begin(), raw_m.end());

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                Mat[i][j] = raw_m[0];
                
                raw_m.pop_front();
            }
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << Mat[i][j] << endl;
            }
        }
    }
};

int main()
{
    sort_m obj;
    vector<vector<int>> Mat =
        {{100, 20, 30, 40},
         {15, 250, 35, 45},
         {27, 29, 37, 48},
         {320, 33, 39, 50}};

    int N = Mat.size();

    obj.sortedMatrix(N, Mat);
    return 0;
}