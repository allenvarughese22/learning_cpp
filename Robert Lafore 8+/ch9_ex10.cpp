// base code copied from the textbook
// making the necessary changes according to the question

#include <iostream>
using namespace std;
const int LEN = 80; // maximum length of names
////////////////////////////////////////////////////////////////
class student // educational background
{
private:
    char school[LEN]; // name of school or university
    char degree[LEN]; // highest degree earned
public:
    void getedu()
    {
        cout << " Enter name of school or university: ";
        cin >> school;
        cout << " Enter highest degree earned \n";
        cout << " (Highschool, Bachelor’s, Master’s, PhD): ";
        cin >> degree;
    }
    void putedu() const
    {
        cout << "\n School or university: " << school;
        cout << "\n Highest degree earned: " << degree;
    }
};
////////////////////////////////////////////////////////////////
class employee
{
private:
    char name[LEN];
    unsigned long number; // employee name

public:
    void getdata()
    {
        cout << "\n Enter last name: ";
        cin >> name;
        cout << " Enter number: ";
        cin >> number;
    }
    void putdata() const
    {
        cout << "\n Name: " << name;
        cout << "\n Number: " << number;
    }
};
////////////////////////////////////////////////////////////////
class manager : public employee, private student // management
{
private:
    char title[LEN]; //"vice-president" etc.
    double dues;     // golf club dues
public:
    void getdata()
    {
        employee::getdata();
        cout << " Enter title: ";
        cin >> title;
        cout << " Enter golf club dues: ";
        cin >> dues;
        student::getedu();
    }
    void putdata() const
    {
        employee::putdata();
        cout << "\n Title: " << title;
        cout << "\n Golf club dues: " << dues;
        student::putedu();
    }
};

class executive : private manager
{
private:
    long int yearly_bonus;
    long int company_shares;

public:
    void getdata()
    {
        manager::getdata();
        cout << " Enter the yearly bonus: ";
        cin >> yearly_bonus;
        cout << " Enter the number of company share holding ";
        cin >> company_shares;
    }

    void putdata() const
    {
        manager::putdata();
        cout << "\n yearly bonus:: " << yearly_bonus;
        cout << "\n company share holding: " << company_shares;
    }
};

class scientist : private employee, private student // scientist
{
private:
    int pubs; // number of publications
public:
    void getdata()
    {
        employee::getdata();
        cout << " Enter number of pubs: ";
        cin >> pubs;
        student::getedu();
    }

    void putdata() const
    {
        employee::putdata();
        cout << "\n Number of publications: " << pubs;
        student::putedu();
    }
};
////////////////////////////////////////////////////////////////
class laborer : public employee // laborer
{
};
////////////////////////////////////////////////////////////////
int main()
{
    manager m1;
    scientist s1, s2;
    laborer l1;
    executive e1;
    cout << endl;

    cout << "\nEnter data for excecutive 1"; // get data for
    e1.getdata();

    //made the employee access specifier to public while inheriting
    //manager from employee (manage:public employee)
    //below code will work
    // e1.employee::getdata();//will work

        // checking the compatibility
        //  e1.manager::getdata();// will work

        //  student is base to manager but inherited privately so below code will not work
        //  e1.student::getedu();   // will not work

        //class executive : private manager will also work

        //more suty on private inheritance is to be made

        cout
        << "\nData on excecutive 1";
    e1.putdata();
    cout << "\nEnter data for manager 1"; // get data for
    m1.getdata();                         // several employees
    cout << "\nEnter data for scientist 1";
    s1.getdata();
    cout << "\nEnter data for scientist 2";
    s2.getdata();
    cout << "\nEnter data for laborer 1";
    l1.getdata();
    cout << "\nData on manager 1"; // display data for
    m1.putdata();                  // several employees
    cout << "\nData on scientist 1";
    s1.putdata();
    cout << "\nData on scientist 2";
    s2.putdata();
    cout << "\nData on laborer 1";
    l1.putdata();
    cout << endl;
    return 0;
}