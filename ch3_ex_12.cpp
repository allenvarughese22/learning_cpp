#include <iostream>
using namespace std;

int main(){
double a,b,c,d;
double ans;
char temp;
char op;    
cout<<"enter the first fraction in the form a/b"<< endl;
cin>> a>>temp>>b;
cout<<"enter the operator"<< endl;
cin>> op;
cout<<"enter the secondfraction"<< endl;
cin>> c>>temp>>d;


switch (op)
{
case '*':
    // cout<<"the value of operator is "<< op<< endl;
    ans = (a*c)/(b*d);
    break;

case '+':
    // cout<<"the value of operator is "<< op<< endl;
    ans = (a*d + b*c)/(b/d);
    break;

case '-':
    // cout<<"the value of operator is "<< op<< endl;
    ans = (a*d - b*c)/(b/d);
    break;

case '/':
    //cout<<"the value of operator is "<< op<< endl;
    cout<<a<<b<<c<<d;
    ans = (a*d)/(b*d);
    break;

default:
    break;

    }

cout<<"the answer is "<< ans<<endl;
}


