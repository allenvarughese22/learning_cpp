#include <iostream>

using namespace std;

void convert_int_deci(float ,float& , float& );
int main(){

float number;
float intpart;
float decipart;

cout<<"enter the number\n";

cin>>number;
convert_int_deci(number, intpart,decipart);
cout<<"the int part is "<<intpart<<"\nthe decimal part is "<<decipart<<endl;
return 0;

}

void convert_int_deci(float number, float& intpar, float& decipart){
long temp = static_cast<long>(number);

intpar = static_cast<float>(temp);
decipart = number - intpar;
}
