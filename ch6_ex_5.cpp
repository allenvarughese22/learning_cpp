#include <iostream>
using namespace std;

class date{
private:
int month, date,year;
char temp;
public:
void getdate(){
    cout << "enter the date in dd/mm/yyyy format"<<endl;
    cin>>date>>temp>>month>>temp>>year;
}

void showdate(){
    cout <<"the entered date is "<<endl;
    cout<<date<<"/"<<month<<"/"<<year<<endl;
    }
};

int main(){
    date d1;
    d1.getdate();
    d1.showdate();

  
    return 0;
}