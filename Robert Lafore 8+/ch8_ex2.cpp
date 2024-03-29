#include <iostream>
using namespace std;
#include<string>
#include <cstring> //for strcpy(), strcat()
#include <stdlib.h> //for exit()
////////////////////////////////////////////////////////////////
class String //user-defined string type
{
private:
enum { SZ=80 }; //size of String objects
 char str[SZ]; //holds a string

public:
String() //constructor, no args
{ strcpy(str, " "); }
String( char s[] ) //constructor, one arg
{ strcpy(str, s); }
void display() const //display the String
{ cout << str; }

String operator += (String ss) const //add Strings
{
String temp; //make a temporary String
if( strlen(str) + strlen(ss.str) < SZ )
{
strcpy(temp.str, str); //copy this string to temp
strcat(temp.str, ss.str); //add the argument string
}
else
{ cout << "\nString overflow" ; exit(1); }
return temp; //return temp String
}
};

int main()
{
String  s1,s2,s3;
 s1 = "\nMerry Christmas! "; //uses constructor 2
 s2 = "Happy new year!"; //uses constructor 2
//uses constructor 1
s1.display(); //display strings
s2.display();
s3.display();
s3 = s1 += s2; //add s2 to s1,
//assign to s3
s3.display();

cout << endl;
return 0;
}


//getting the required output but getting warning:
// warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]