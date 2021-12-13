// Start with the fraction-adding program of Exercise 9 in Chapter 2, “C++ Programming
// Basics.” This program stores the numerator and denominator of two fractions before
// adding them, and may also store the answer, which is also a fraction. Modify the program
// so that all fractions are stored in variables of type struct fraction, whose two
// members are the fraction’s numerator and denominator (both type int). All fractionrelated
// data should be stored in structures of this type.


#include <iostream>
using namespace std;
struct fraction
{
    int numerator;
    int denominator;
};


int main(){

    // int a,b, c,d ;
    // char op;
// cout<< "enter the first fraction in the form (a/b)" <<endl;
// cin>> a >>op>>b ;
// cout<< "enter the second fraction in the form (a/b)" <<endl;
// cin>> c >>op>>d ;
fraction first_fraction, second_fraction, sum_struct;
cout<< "enter the first fraction numerator" <<endl;
cin>> first_fraction.numerator;
cout<< "enter the first fraction denominator" <<endl;
cin>> first_fraction.denominator;

cout<< "enter the second fraction numerator" <<endl;
cin>> second_fraction.numerator;
cout<< "enter the second fraction denominator" <<endl;
cin>> second_fraction.denominator;


sum_struct.numerator =  first_fraction.numerator*second_fraction.denominator + first_fraction.denominator*second_fraction.numerator;
sum_struct.denominator= first_fraction.denominator*second_fraction.denominator;
cout << "Sum "<<sum_struct.numerator<<"/"<<sum_struct.denominator1;

}