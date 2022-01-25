#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
#include <bits/stdc++.h>

int main()
{
    int arr[] = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};
    // 6 , 5, 8
    // change this value with every question
    int k = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    vector<int> tower_v;
    vector<int> conv_tower;
    vector<int> non_c_tower;

    for (int i = 0; i < n; i++)
    {
        tower_v.push_back(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if ((tower_v[i] - k) < 0)
        {
            conv_tower.push_back(tower_v[i] + k);
        }

        else
        {
            non_c_tower.push_back(tower_v[i]);
        }
    }

    int global_diff = *max_element(conv_tower.begin(), conv_tower.end()) - *min_element(conv_tower.begin(), conv_tower.end());

    cout << "global diff  " << global_diff << endl;
    cout << "c - tower" << endl;
    for (auto i : conv_tower)
    {
        cout << i <<" ";
    }

    cout << "\n non_c_tower" << endl;
    for (auto i : non_c_tower)
    {
        cout << i <<" " ;
    }

    for (auto i : non_c_tower)
    {
        int v_plus = i + k;
        int v_minus = i - k;

        conv_tower.push_back(v_plus);
        int max_conv_tower = *max_element(conv_tower.begin(), conv_tower.end());
        int min_conv_tower = *min_element(conv_tower.begin(), conv_tower.end());
        int diff_v_plus = max_conv_tower - min_conv_tower;
        conv_tower.pop_back();

        conv_tower.push_back(v_minus);
        max_conv_tower = *max_element(conv_tower.begin(), conv_tower.end());
        min_conv_tower = *min_element(conv_tower.begin(), conv_tower.end());
        int diff_v_minus = max_conv_tower - min_conv_tower;
        conv_tower.pop_back();
    }
}