#include <iostream>
using namespace std;

class serial{
private:
static int serial_count;
int number = 0;
public:

serial(){
    number = ++serial_count;
    }

void tell_number(){
    cout<<"I am serial number object"<<number<<endl;
}

};

int serial::serial_count = 0;



int main(){
    cout<<"hello"<<endl;
    serial s1,s2,s3;
    s1.tell_number();
    s2.tell_number();
    s3.tell_number();
     //  cout<<"the value of serial count"<<s3.serial_count<<endl;
    return 0;
}