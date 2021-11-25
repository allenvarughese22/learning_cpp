#include <iostream>
using namespace std;

class fraction{

    private:
        int den;
        int num;
        char temp;
        
    public:

    void get(){
    cin >> num >>temp>>den;}

    void display(){
        cout<<"the entered fraction is  " << num<<"/"<<den<<endl;
        }


void sum(fraction f1, fraction f2){

num = (f1.num * f2.den) + (f2.num * f1.den);
den = f1.den * f2.den;
cout<<"the sum of the fraction is "<< num <<"/"<<den<<endl;
}


};

int main(){
fraction f1,f2,f3;
 char cont;
//  void sum(fraction, fraction);


do
{
cout<<"enter the first fraction in the form a/b"<<endl;
f1.get();    
// f1.display();

cout<<"enter the second fraction in the form a/b"<<endl;
f2.get();

// void sum(fraction, fraction);


f3.sum(f1,f2);

cout<<"do you want to coninue? Type \"n\" if you want to quit!!"<<endl;
cin>> cont;
} while (cont !='n');

return 0;

}

