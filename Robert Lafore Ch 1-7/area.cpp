#include <iostream>
using namespace std;

int main(){
float areacircle(float);
float radius;
cout<<"enter the radius"<<endl;
cin>>radius;
areacircle(radius);
return 0;
}

float areacircle(float r){
float area;
area = 3.14*r*r;
cout<<"the area of circle is "<< area<<endl;
}
