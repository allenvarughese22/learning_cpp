#include <iostream>
using namespace std;

class fraction
{
    // numerator and denominator are taken as double. if wanted can be modified to double type
private:
    double num, den;

    char temp;

public:
    // don't use constructor to set value. setting 0 will produce 0
    // setting 1 will give wrong ans
    // fraction():num(1),den(1) {}

    // function to get fraction value from user
    get_data()
    {
        cout << "enter the fraction in the form a/b" << endl;
        cin >> num >> temp >> den;
    }

    // to view the entered fraction
    show_data()
    {
        cout << num << "/" << den << "  " << endl;
    }

    // add two fraction
    fraction f_add(fraction f2)
    {
        fraction f_ans;
        f_ans.num = (num * f2.den + den * f2.num);
        f_ans.den = (den * f2.den);
        return f_ans;
    }

    avg(int size_array)
        {
            cout<<"the average value for the entered fraction values is: "<<endl;
        cout << (num / den) / static_cast<double>(size_array);
    }
};

int main()
{
    int size_array;
    cout << "enter the number of fractions you want to enter" << endl;
    cin >> size_array;
    // creating an array of fraction object
    fraction list[size_array];

    // getting the fraction array from user
    for (int i = 0; i < size_array; i++)
    {
        list[i].get_data();
    }

    cout<< "the entered fractions are:" << endl;
    for (int j = 0; j < size_array; j++)
    {
        list[j].show_data();
    }

    // loop to add the consecutive fractions
    fraction total = list[0];
    //    cout<<"total num"<<total.show_data();
    for (int m = 1; m < size_array; m++)
    {
        total = total.f_add(list[m]);
    }

    cout << "the total addition of fraction element is " << endl;
    total.show_data();

    // take the average of fraction

    total.avg(size_array);

    return 0;
}