#include <iostream>
using namespace std;

struct Distance{

    int feet;
    float inches;
};

float compare_distance(Distance,Distance);
int main( ){
Distance d1,d2;
cout<<"enter the first distnace in feet"<<endl;
cin>> d1.feet;
cout<<"enter the first distnace in inches"<<endl;
cin>> d1.inches;
cout<<"enter the second distnace in feet"<<endl;
cin>> d2.feet;
cout<<"enter the second distnace in inches"<<endl;
cin>> d2.inches;
//4
//cout<< "ther greater distance is";
float larger_distance = compare_distance(d1,d2);
cout<<larger_distance;

}

float compare_distance(Distance  d1_f,Distance d2_f){
    float total_l1 = d1_f.feet + (d1_f.inches/12);
    float total_l2 = d2_f.feet + (d2_f.inches/12);
    // cout<<"total_l1 in feet "<< total_l1<<endl;
    // cout<<"total_l2 in feet "<<total_l2<<endl;
    if (total_l1>total_l2)
    {
        cout<< "distance l1 is greater than distance l2. the lenght \
        of l1 is";
        return total_l1;
    }
    else if (total_l2>total_l1)
    {
        cout<< "distance l2 is greater than distance l1. the lenght \
        of l2 is";
        return total_l2;
    }
    else{
        cout<<"either both are same or have some error"<<endl;
        return 0.0;

    }
    

}