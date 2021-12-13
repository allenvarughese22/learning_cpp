#include <iostream>

using namespace std;

int main(){

float number;
long intpart;
float decipart;

void convert_int_deci(float);
cout<<"enter the number";

cin>>number;
convert_int_deci(number);
cout<<"the int part is "<<intpart<<"the decimal part is "<<decipart;
return 0

}
