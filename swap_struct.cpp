#include <iostream>
using namespace std;

struct time
{
    int hrs;
    int mins;
    int sec;
};



int main(){
    
    time t1,t2;
    t1 = {5,4,3};
    t2 = {9,8,7};

    void swap_struct(time&,time&);

    cout<<"before swap"<<endl;
    cout<<"the t1 time is"<<t1.hrs<<":"<<t1.mins<<":"<<t1.sec<<endl;
    cout<<"the t2 time is"<< t2.hrs <<":"<<t2.mins<<":"<<t2.sec<<endl;
    swap_struct(t1,t2);
    cout<<"______after swap______"<<endl;
    cout<<"the t1 time is"<<t1.hrs<<":"<<t1.mins<<":"<<t1.sec<<endl;
    cout<<"the t2 time is"<< t2.hrs <<":"<<t2.mins<<":"<<t2.sec<<endl;


}

void swap_struct(time& time_1,time& time_2){
time temp = time_1;
time_1 = time_2;
time_2 = temp;


}

