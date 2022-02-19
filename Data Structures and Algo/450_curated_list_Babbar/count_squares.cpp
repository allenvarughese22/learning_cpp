// Consider a sample space S consisting of all perfect squares
//  starting from 1, 4, 9 and so on. You are given a number N, 
// you have to output the number of integers less than N in the sample space S.

#include <iostream>
#include <vector>

using namespace std;

class cl
{
public:
    int count_square(int n)
    {
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
          int t =  i*i;
          if (t<n)
          {
              cout<<"i*i "<<t<<endl;;
              count = count +1;
          }
          else if (t>=n)
          {
              return count;
          }
        }
        return count;
    }
};

int main()
{
    int n = 10;
    cl obj;
    cout<<" "<<endl;
    cout << obj.count_square(n);
    return 0;
}
