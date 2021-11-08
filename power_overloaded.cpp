#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    double power(double,int = 2 );
    float power(float,int = 2 );

    
    double number_d;
    int pow;
    char yesorno;

    cout<<"enter the double to be raised"<<endl;
    cin>> number_d;
   
     power(number_d  );

     float number_f;
     cout<<"enter the float to be raised"<<endl;
     cin>> number_f;
     cout<<"the cin number is"<<number_f;    
     power( number_f  );  
       
    
}

double power(double n, int p ){
    double power_value = n;
    for ( int i = 0; i < p-1; i++)
    {
       power_value *= n;
                 
    }
    cout<<power_value;
    
}

float power(float n, int p ){
    float power_value = n;
    for ( int i = 0; i < p-1; i++)
    {
       power_value *= n;
                 
    }
    cout<<power_value;
    
}
