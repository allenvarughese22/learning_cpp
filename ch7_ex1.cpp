#include <iostream>
#include <cstring>
#include <iterator>

using namespace std;
const int SIZE = 50;
int main()
{
    char sent[SIZE];
    void reversit(char[]);
    cout << "enter the sentence that you want to reverse" << endl;
    cin.getline(sent, SIZE);

    reversit(sent);
}

void reversit(char sent[])
{

    int len = strlen(sent);
    char rev[len];
    for (int i = 0; i < strlen(sent); i++)
    {

        rev[len] = sent[i];
        len--;
    }
    cout << rev << endl;
}
