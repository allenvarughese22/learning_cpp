#include <iostream>
using namespace std;

int main(){
    void  zerosmaller(int& a, int& b);
    int first_number, second_number;
    cout<<"enter the first number"<<endl;
    cin>>first_number;
    cout<<"enter the second number"<<endl;
    cin>>second_number;
    zerosmaller(first_number, second_number);


    cout<<"first number"<<first_number<<endl;
    cout<<"second number"<<second_number<<endl;
}

void  zerosmaller(int& a, int& b){
if (a>b)
{
    b = 0;
}
else if (b>a){
    a = 0;
}
else {
    cout<<"both are same"<<endl;
}

}