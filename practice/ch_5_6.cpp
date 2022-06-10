// using struct taking the time from user and adding them

#include <iostream>
using namespace std;

struct time_struct
{
    int sec;
    int mins;
    int hrs;
    int temp;
};

long time_to_secs(time_struct);
time_struct secs_to_time(long secs);

int main()
{
    time_struct t_f, t_ans;
    char temp;
    cout << "enter the FIRST time in HH:MM:SS format " << endl;

    //getting the time value in HH:MM:SS format from user converting to type struct
    cin >> t_f.hrs >> temp >> t_f.mins >> temp >> t_f.sec;
    time_to_secs(t_f);
    t_ans = secs_to_time(time_to_secs(t_f));

    cout<<"the return in struct form is stored in t_ans and it's values are" <<endl;
    cout<<t_ans.hrs<<":"<<t_ans.mins<<":"<<t_ans.sec<<endl;
}

//function to ttake time as struct and give return as long
long time_to_secs(time_struct t_f)
{

    long t_f_total = t_f.hrs * 60 * 60 + t_f.mins * 60 + t_f.sec;
    cout << "the  time is second is  " << t_f_total << endl;

    return t_f_total;
}


//function to take sec in long format as argument
//return type is time_struct
time_struct secs_to_time(long time_insec)
{
    struct time_struct time_struct_fun;
    time_struct_fun.hrs = time_insec / 3600;
    time_struct_fun.temp = time_insec - time_struct_fun.hrs * 3600;
    time_struct_fun.mins = time_struct_fun.temp / 60;
    time_struct_fun.sec = time_struct_fun.temp % 60;
    return time_struct_fun;
    
}
