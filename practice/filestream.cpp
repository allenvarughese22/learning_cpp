#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    std::ofstream file;
    file.open("file_std.txt", std::ios::app);
    vector <string> name;
    name.push_back("allen");
    name.push_back("aswin");
    name.push_back("arun");
    name.push_back("anto");


    for ( auto a:name)
    {
        file<<a<<endl;
    }

    return 0;
}