#include <iostream>
using namespace std;

int main(){
float areacircle(float);
float radius;
 cout<<"eenter the radius"<<endl;
cin>>radius;
areacircle(radius);
return 0;
}

float area;
float areacircle(float r){
area = 3.14*r*r;
cout<<"the area of circle is "<< area<<endl;
}
