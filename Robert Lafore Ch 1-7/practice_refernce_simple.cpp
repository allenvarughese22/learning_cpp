#include <iostream>
using namespace std;


int main(){
    void inch_cm(float& );
    float distance;
    cout<< "enter the distance value in inches "<<endl;
    cin>> distance;
    cout<< "distance in cm : "<<endl;
    inch_cm(distance);
    cout<<distance;


}
void inch_cm(float& distance){
    distance = distance * 2.54;


}