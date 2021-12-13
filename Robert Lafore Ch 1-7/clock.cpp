#include <iostream>
using namespace std;

int main(){
void hms_to_scs(int , int , int );
int hours,minutes, second;
char temp, repeat;
do{cout<<"enter the time's in format (HH:MM:sec) format"<<endl;
cin>> hours>> temp>> minutes>> temp>> second;
hms_to_scs(hours, minutes,second);
cout<<"do you want to enter time again (y/n)"<<endl;
cin>> repeat;
}
while (repeat == 'y');
}



void hms_to_scs(int h, int m, int s)
{
    long hours_in_secs = h*3600;
    long minutes_in_secs = h*60;
    // long hours_in_secs = h*3600;
    long total_time_secs = hours_in_secs + minutes_in_secs + s;
    
    cout <<total_time_secs<<endl;
}