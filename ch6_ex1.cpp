#include <iostream>
using namespace std;

//program to show the basic structure and use of class including construction 

class Int {
private:
    int i;
public:
Int():i(0){}
Int (int given_value):i(given_value) {}
void disp(){    cout<<i;}

void add_int(Int val1,Int val2){
    i = val1.i + val2.i;
}

};
// void Int::add_int(Int val1,Int val2){
// Int temp = val1.i + val2.i;
// cout<<"added value is"<<temp.i<<endl;

// }

int main(){
Int a;
Int b(4), c{10};

cout<<"hello"<<endl;
c.disp();
return 0 ;
} 
