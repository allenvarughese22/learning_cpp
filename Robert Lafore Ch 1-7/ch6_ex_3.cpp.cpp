#include <iostream>
using namespace std;

class time{
    private:
    int hr,min,sec;


    public:
    time():hr{0},min{0},sec{0}{}
    time(int hr,int min, int sec):hr{hr},min{min},sec{sec}{}

    void display(){
        cout<< "the time is "<<hr<<":"<<min<<":"<<sec<<endl;
    }
    void add_time(time a, time b){
        sec = a.sec + b.sec;
        if (sec>59){ sec -=60; min++;}
        min += a.min + b.min;
        if (min>59){ min -=60; hr++;}
        hr += a.hr + b.hr;


    }

};


int main(){
time t1(1,2,42);
time t2 (5,20, 30);
time t3;

t3.add_time(t1,t2);
t3.display();
return 0;

    }



