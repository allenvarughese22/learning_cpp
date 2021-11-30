//using two objects instead of one to perform the same arithmatic operations

#include <iostream>

using namespace std;

class fraction{
    // numerator and denominator are taken as int. if wanted can be modified to double type
private:
double num,den, f_ans;

char temp;

public:

void f_add(fraction f1, fraction f2);
void f_div(fraction f1, fraction f2);
void f_sub(fraction f1, fraction f2);
void f_mul(fraction f1, fraction f2);

get_data(){

cin>> num>>temp >> den ;


}


get_solution(fraction f1,fraction f2, char op){
switch (op)

 {
case '*':
    f_mul(f1 ,f2); 
    break;

case '+':
    f_add(f1,f2);
    break;

case '-':

    f_sub(f1, f2);
    break;

case '/':
    f_div(f1, f2);    
    break;

default:
    break;

    }

}
};



int main(){

fraction f1,f2,f3;   
char op;
cout<<"enter the first fraction in the form a/b"<< endl;
f1.get_data();
cout<<"enter the operator"<< endl;
cin>> op ;
cout<<"enter the first fraction in the form a/b"<< endl;
f2.get_data();
f3.get_solution(f1, f2,op);

return 0;  
}



void fraction::f_add(fraction f1, fraction f2)
{f_ans = ((f1.num*f2.den + f1.den*f2.num)/(f1.den*f2.den));
cout<<"final answer" << f_ans<<endl;
   }

void fraction::f_div(fraction f1, fraction f2)
{ 
f_ans = (f1.num*f2.den)/(f1.den*f2.den);

cout<<"final answer" << f_ans<<endl;
}

void fraction::f_mul(fraction f1, fraction f2)
{ f_ans =  (f1.num*f2.num)/(f1.den*f2.den);
cout<<"final answer" << f_ans<<endl;

    
}


void fraction::f_sub(fraction f1, fraction f2)
{f_ans = (f1.num*f2.den - f1.den*f2.num)/(f1.den*f2.den);
cout<<"final answer" << f_ans<<endl;
}






