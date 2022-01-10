#include <iostream>
#include <cctype>
#include <cstring>


using namespace std;

class String // user-defined string type
{
private:
    char *str; // pointer to string
public:
    String(char *s) // constructor, one arg
    {
        int length = strlen(s);     // length of string argument
        str = new char[length + 1]; // get memory
        strcpy(str, s);             // copy argument to it
    }
    ~String() // destructor
    {
        cout << "Deleting str.\n";
        delete[] str; // release memory
    }
    void display() // display the String
    {
        cout << str << endl;
    }

     void upit(){
        int i = 0;
        while (*(str+i))
        {
            *(str+i) = toupper(*(str+i));
            cout<<"in"<<endl;
            cout<<*(str+i);
            i++;
        }
        

    }
};

int main(){
    String s1 = "HeLo";
    // char* arr= "HeLo";
    cout<<"the char values before converting to upper case: "<<endl;
    s1.display();
    s1.upit();
    cout<<"the char values after converting to upper case: "<<endl;
    s1.display();
    return 0 ;


}