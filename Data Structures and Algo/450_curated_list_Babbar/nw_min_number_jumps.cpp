//not working
 //Minimum number of jumps
// { Driver Code Starts
#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n)
    {
        
    

    // int arr[] = {1, 40, 30, 2, 6, 7};
    // //  int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    // // int arr[] = {2, 3, 1, 1, 2, 4, 2, 0, 1, 1};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // cout << "n" << n << endl;

    vector<int> arr_v(arr, arr+n);
    vector<int>::iterator ptr = arr_v.begin();

    int j_val = arr[0];
    int c_index = 0;

    int count = 0;

    // if <= given then looop will jump one more time if the end reaches
    while (c_index < n - 1)
    {
        if (j_val == 0)
        {
            return -1;
        }

        // if (0  <= c_index and c_index < n)
        // if (arr_v.begin() <= ptr and ptr < arr_v.end())
        // {
        advance(ptr, j_val);
        // order is important
        count++;
        c_index = c_index + j_val;
        if (0 <= c_index and c_index < n)
        {
            j_val = j_val + *ptr;
        }

       
      }

    return count;
    }

};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends