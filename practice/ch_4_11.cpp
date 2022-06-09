// using struct taking the time from user and adding them 

#include <iostream>
using namespace std;

struct  time_struct
{
    int sec;
    int mins;
    int hrs;
};

int main ()
{
    time_struct t_f, t_s;
    char temp;
    cout<<"enter the FIRST time in HH:MM:SS format "<<endl;
    cin>>t_f.hrs>>temp>>t_f.mins>>temp>>t_f.sec;
    cout<<"enter the SECOND time in HH:MM:SS format "<<endl;
    cin>>t_s.hrs>>temp>>t_s.mins>>temp>>t_s.sec;

    
    int t_f_total = t_f.hrs*60*60 + t_f.mins *60 + t_f.sec;
    cout<< "the first time is second is  " << t_f_total<< endl;

    int t_s_total = t_s.hrs*60*60 + t_s.mins *60 + t_s.sec;
    cout<< "the second time is second is" <<t_s_total << endl;

    int time = t_f_total + t_s_total;

    int hrs = time/3600;
    time = time - hrs*3600;
    int mins = time/60;
    int secs = time%60;
    
    cout<<" the resultant addition of time in HH:MM:SS format is "<< hrs<<":"<<mins<<":"<<secs<<endl;
  
    
    }