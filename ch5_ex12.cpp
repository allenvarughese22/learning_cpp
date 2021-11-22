// on process

// Revise the four-function fraction calculator from Exercise 12, Chapter 4, so that it uses
// functions for each of the four arithmetic operations. They can be called fadd(), fsub(),
// fmul(), and fdiv(). Each of these functions should take two arguments of type struct
// fraction, and return an argument of the same type.


#include <iostream>

using namespace std;

struct fraction{
    // numerator and denominator are taken as int. if wanted can be modified to double type
int num;
int den;
double f_ans;
};

// struct fraction{
// int ans;

// };

int main(){
// double a,b,c,d;
//double ans;
// char temp;
char op;
// fraction ans;
//defining the functions;
fraction f_mul(fraction f1, fraction f2);
fraction f_add(fraction f1, fraction f2);
fraction f_div(fraction f1, fraction f2);
fraction f_sub(fraction f1, fraction f2);

fraction f1,f2,f_struct_return_storage;   
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
    
    //f_struct_return_storage=  f_mul(f1 , f2);
    cout<< "the final answer is " <<f_mul(f1 , f2).f_ans<<endl;
    // ans = (f1.num*f2.num)/(f1.den*f2.den);
     
    break;

case '+':
    // cout<<"the value of operator is "<< op<< endl;
    // ans = (f1.num*f2.den + f1.den*f2.num)/(f1.den/f2.den);
    f_struct_return_storage=  f_add(f1 , f2);
    cout<< "the final answer is " <<f_struct_return_storage.f_ans<<endl;
    break;

case '-':
    // cout<<"the value of operator is "<< op<< endl;
    // ans = (f1.num*f2.den - f1.den*f2.num)/(f1.den/f2.den);
    f_struct_return_storage=  f_sub(f1 , f2);
    cout<< "the final answer is " <<f_struct_return_storage.f_ans<<endl;
    break;

case '/':
    //cout<<"the value of operator is "<< op<< endl;
    // cout<<a<<b<<c<<d;
    // ans = (f1.num*f2.den)/(f1.den*f2.den);
    f_struct_return_storage=  f_div(f1 , f2);
    cout<< "the final answer is " <<f_struct_return_storage.f_ans<<endl;
    break;

default:
    break;

    }
   
}

fraction f_mul(fraction f1 ,fraction f2)
{ fraction ans;
     ans.f_ans =  (f1.num*f2.num)/(f1.den*f2.den);
    

return ans;
}
fraction f_add(fraction f1 ,fraction f2)
{fraction ans;
    ans.f_ans = ((f1.num*f2.den + f1.den*f2.num)/(f1.den*f2.den));
   
return ans;}

fraction  f_sub(fraction f1 ,fraction f2)
{fraction ans;
    ans.f_ans = (f1.num*f2.den - f1.den*f2.num)/(f1.den*f2.den);
return ans;}

fraction  f_div(fraction f1 ,fraction f2)
{ fraction ans;
ans.f_ans = (f1.num*f2.den)/(f1.den*f2.den);
return ans;}








