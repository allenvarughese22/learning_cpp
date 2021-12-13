#include <iostream>
using namespace std;
// writing a program in which function counts the number of time the function is called using 
// static global variable
int g_count = 0;
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
// static int s_count = 0;
// int count = 0;
// using global variable g_count to count the numbe of times the function is called.
g_count++;
cout<<"I am function function_call_counter. I have been called "<< g_count<<" times"<<endl;

}