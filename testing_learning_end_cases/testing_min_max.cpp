#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
 
int main()
{

vector<int> test = {2};

int max_test = *max_element(test.begin(), test.end());
int min_test = *min_element(test.begin(), test.end());

cout<<"max  "<<max_test<<endl;
cout<<"min  "<<min_test<<endl;


return 0;
}