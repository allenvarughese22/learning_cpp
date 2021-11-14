// finished
//ans can alos be transfored to structure

// Revise the four-function fraction calculator program of Exercise 12 in Chapter 3 so that
// each fraction is stored internally as a variable of type struct fraction, as discussed in
// Exercise 8 in this chapter.

#include <iostream>

using namespace std;

struct fraction{
int num;
int den;
};

int main(){
// double a,b,c,d;
double ans;
// char temp;
char op;

fraction f1,f2;   
cout<<"enter the first fraction numberator"<< endl;
cin>> f1.num ;
cout<<"enter the first fraction denominator"<< endl;
cin>> f1.den ;
cout<<"enter the operator"<< endl;
cin>> op ;
cout<<"enter the second fraction numerator"<< endl;
cin>> f2.num ;
cout<<"enter the second fraction denominator"<< endl;
cin>> f2.den ;


switch (op)
{
case '*':
    // cout<<"the value of operator is "<< op<< endl;
    ans = (f1.num*f2.num)/(f1.den*f2.den);
    break;

case '+':
    // cout<<"the value of operator is "<< op<< endl;
    ans = (f1.num*f2.den + f1.den*f2.num)/(f1.den/f2.den);
    break;

case '-':
    // cout<<"the value of operator is "<< op<< endl;
    ans = (f1.num*f2.den - f1.den*f2.num)/(f1.den/f2.den);
    break;

case '/':
    //cout<<"the value of operator is "<< op<< endl;
    // cout<<a<<b<<c<<d;
    ans = (f1.num*f2.den)/(f1.den*f2.den);
    break;

default:
    break;

    }

cout<<"the answer is "<< ans<<endl;
}


