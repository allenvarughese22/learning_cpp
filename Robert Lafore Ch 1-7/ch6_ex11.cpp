#include <iostream>

using namespace std;

class fraction{
    // numerator and denominator are taken as int. if wanted can be modified to double type
private:
double first_num, first_den, second_num, second_den, f_ans;
char op;
char temp;

public:
void f_add();
void f_div();
void f_sub();
void f_mul();

get_data(){
cout<<"enter the fraction in the form a/b"<< endl;
cin>> first_num>>temp >> first_den ;

cout<<"enter the operator"<< endl;
cin>> op ;

cout<<"enter the fraction in the form a/b"<< endl;
cin>> second_num>>temp >> second_den ;}


get_solution(){
    switch (op)
 {
case '*':
    f_mul();
 
    break;

case '+':
    f_add();
    break;

case '-':

    f_sub();
    break;

case '/':
    f_div();    
    break;

default:
    break;

    }

}
};



int main(){

fraction f1;   

f1.get_data();
f1.get_solution();

return 0;  
}



void fraction::f_add()
{f_ans = ((first_num*second_den + first_den*second_num)/(first_den*second_den));
cout<<"final answer" << f_ans<<endl;
   }

void fraction::f_div()
{ 
f_ans = (first_num*second_den)/(first_den*second_num);

cout<<"final answer" << f_ans<<endl;
}

void fraction::f_mul()
{ f_ans =  (first_num*second_num)/(first_den*second_den);
cout<<"final answer" << f_ans<<endl;

    
}


void fraction::f_sub()
{f_ans = (first_num*second_den - first_den*second_num)/(first_den*second_den);
cout<<"final answer" << f_ans<<endl;
}






