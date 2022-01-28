// solution and logic wrong need to do it again after watching tutorial

// problem statement
// Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer. 
// Find out the minimum possible difference of the height of shortest and longest towers after you have modified each tower.

// You can find a slight modification of the problem here.
// Note: It is compulsory to increase or decrease (if possible) by K to each tower.



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

// K 4
int arr[] = {6,1,9,1,1,7,9,5,2,10};
int k = 4;
// 6 1 9 1 1 7 9 5 2 10
// correct = 5
    

    // 6 10 3 8 3 9 7 8 5 8
    // k 5
    // my code = 9;
    // correct 7

    // int arr[] = {6, 10, 3, 8, 3, 9, 7, 8, 5, 8};
    // // int arr[] = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};
    // // int arr[] = {1, 5, 8, 10};
    // // int arr[] = {3, 9, 12, 16, 20};
    // // 6 , 5, 8
    // // change this value with every question
    
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

    int max_tower_v = *max_element(tower_v.begin(), tower_v.end());
    int min_tower_v = *min_element(tower_v.begin(), tower_v.end());
    if (conv_tower.empty())

    {
        conv_tower.push_back(max_tower_v - k);
        conv_tower.push_back(min_tower_v + k);
        non_c_tower.erase(std::remove(non_c_tower.begin(), non_c_tower.end(), max_tower_v), non_c_tower.end());
        non_c_tower.erase(std::remove(non_c_tower.begin(), non_c_tower.end(), min_tower_v), non_c_tower.end());
    }

    // cout << "global diff  " << global_diff << endl;
    cout << "c - tower" << endl;
    for (auto i : conv_tower)
    {
        cout << i << " ";
    }

    cout << "\n non_c_tower" << endl;
    for (auto i : non_c_tower)
    {
        cout << i << " ";
    }

    sort(non_c_tower.begin(), non_c_tower.end());
    // std::sort(v.begin(), v.end()); 
    auto last = std::unique(non_c_tower.begin(), non_c_tower.end());
    non_c_tower.erase(last, non_c_tower.end());

    //reversing  just seeing whether will work or not
    reverse(non_c_tower.begin(), non_c_tower.end());


    cout << "\n non_c_tower SORTED AND DUPLICATED deleted" << endl;
    for (auto i : non_c_tower)
    {
        cout << i << " ";
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

        if (diff_v_minus <= diff_v_plus)
        {
            conv_tower.push_back(v_minus);
        }
        else
        {
            conv_tower.push_back(v_plus);
        }
    }

    cout << "\n c - tower after major operations" << endl;
    for (auto i : conv_tower)
    {
        cout << i << " ";
    }
    int global_diff = *max_element(conv_tower.begin(), conv_tower.end()) - *min_element(conv_tower.begin(), conv_tower.end());

    cout << "\n \nglobal_diff  " << global_diff << endl;
}