// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

#include <iostream>
using namespace std;
#include <vector>
#include <map>

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        map<int, int> count;
        for (int i = 0; i < nums.size(); i++)
        {
            count[nums[i]]++;
        }

        for (auto it : count)
        {
            if (it.second > 1)
                return it.first;
        }
        return -1;
    }
};

int main()
{

    vector<int> ar = {1, 2, 3, 3, 5, 6};

    Solution a;

    cout << a.findDuplicate(ar);
}