#include <iostream>
using namespace std;
// writing a program in which function counts the number of time the function is called using 
// static global variable
int main(){

    void function_call_counter(void);
    char ans;
    do
    {function_call_counter();
    cout<<"do you want to call the function again? (y/n)"<<endl;
    
    cin >> ans;
    }
    while (ans == 'y');
    
    
    
}

void function_call_counter(void){

static int s_count = 0;
// int count = 0;
s_count++;
cout<<"I am function function_call_counter. I have been called "<< s_count<<" times"<<endl;

}