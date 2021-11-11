
// Write a program that encourages the user to enter two fractions, and then displays their
// sum in fractional form.


#include <iostream>
using namespace std;

int main(){

    int a,b, c,d ;
    char op;
cout<< "enter the first fraction in the form (a/b)" <<endl;
cin>> a >>op>>b ;
cout<< "enter the second fraction in the form (a/b)" <<endl;
cin>> c >>op>>d ;
int sum_num =  a*d + b*c;
int sum_den= b*d;
cout << "Sum "<<sum_num <<"/"<<sum_den;
}