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


    //operator overloading to add time

    time operator + ( time b){

        // providing temp integers m,h,s to do calculation 
        int m=0,h=0;
        int s = sec + b.sec;        
      
        if (s>59){ s -=60; m++;}
        m += min + b.min;
        if (m>59){ m -=60; h++;}
        h += hr + b.hr;
        

        return time(h,m,s);


    }

};


int main(){
time t1(1,2,42);
time t2 (5,20, 30);
time t3;

// adding two time with the '+' operator.

t3 = t2 + t1;
t3.display();

return 0;

    }