#include <iostream>
using namespace std;

int main(){
    double power(double,int = 2 );
    
    double number;
    int pow;
    char yesorno;

    cout<<"enter the number to be raised"<<endl;
    cin>> number;
    cout<<" want to enter a power (y/n)?"<<endl;
    cin>> yesorno;
    if (yesorno == 'y')
    {
        cout<<"enter the exponent"<<endl;
        cin>> pow;
        power (number,pow);

        
    }
    else{
        power (number);
    }
       
    
}

double power(double n, int p ){
    double power_value = n;
    for ( int i = 0; i < p-1; i++)
    {
       power_value *= n;
                 
    }
    cout<<power_value;
    
}
