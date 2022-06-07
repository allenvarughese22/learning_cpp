// program to find the area of the area_circle

#include <iostream>
using namespace std;

float area_circle(float r)
{
    float pi = 3.14F;
    float area = r*r*pi;
    return area;
}
int main()
{
    float radius;
    cout <<"enter the radius of circle in mm"<<endl;
    cin>> radius;
    float area = area_circle(radius);
    cout<< "the area of the circle is "<<area<<" mm2 "<<endl;
    return 0;
}