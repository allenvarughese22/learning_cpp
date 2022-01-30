// find the number of duplicate character is a string

//consider small and caps as same 

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    void find_duplicate(string s);
    string string_dupl;
    cout << "enter the string: " << endl;
    cin >> string_dupl;

    find_duplicate(string_dupl);

    return 0;
}

void find_duplicate(string s)
{

    const int size = 26;
    char c;
    int len = s.length();
    int arr_hash[size] = {0};
    transform(s.begin(), s.end(), s.begin(), ::toupper);

    for (int i = 0; i < len; i++) //search tghrough the lenght of input string
    {
        arr_hash[int(s[i]) - 65] = arr_hash[int(s[i]) - 65] + 1;// increament the value of element as +1 if character present
    }
   

    for (int j = 0; j < size; j++)
    {
        if (arr_hash[j] > 1) //if a element has more than 1 value means duplicate character is present
        {
            cout << "\n the character  " << char(j+65)<<" is a duplicate"<<endl;
            cout<<"it is present "<< arr_hash[j] <<" times"<<endl;
        }
    }

}