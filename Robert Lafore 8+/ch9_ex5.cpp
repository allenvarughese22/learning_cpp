// copied the template - employ program from textbook
// coded the compensation class , manager 2, scientist2, laborer2 class
//upgraded the code to handle ambiguity in multiple inheritance

#include <iostream>
using namespace std;
const int LEN = 80; // maximum length of names
////////////////////////////////////////////////////////////////
class employee // employee class
{
private:
    char name[LEN];       // employee name
    unsigned long number; // employee number
public:
    void getdata()
    {
        cout << "\n Enter last name : ";
        cin >> name;
        cout << " Enter number : ";
        cin >> number;
    }

    void putdata() const
    {
        cout << "\n Name : " << name;
        cout << "\n Number : " << number;
    }
};

class compensation : public employee
{
    float compensation;
    enum period_enum
    {
        hourly,
        weekly,
        monthly
    };
    char compen_period_user_input;
    period_enum period;

public:
    void getdata()
    {
        cout << "enter the compensation amount" << endl;
        cin >> compensation;
        cout << "enter the compensation period. \t Type 'h' for hourly, 'm' for montly"
                "'w' for weekly basis"
             << endl;
        cin >> compen_period_user_input;

        switch (compen_period_user_input)
        {
        case 'h':
            period = hourly;
            break;

        case 'w':
            period = weekly;
            break;

        case 'm':
            period = monthly;
            break;

        default:
            break;
        }
    }

    void putdata()
    {
        cout << "\n the compensation amount is " << compensation << endl;

        cout << "the period of compensation is " << endl;

        switch (period)
        {
        case hourly:
            cout << " - hourly" << endl;
            break;

        case weekly:
            cout << " - weekly" << endl;
            break;

        case monthly:
            cout << " - monthly" << endl;
            break;

        default:
            break;
        };
    }
};
////////////////////////////////////////////////////////////////
class manager : public employee // management class
{
private:
    char title[LEN]; //"vice-president" etc.
    double dues;     // golf club dues
public:
    void getdata()
    {
        employee::getdata();
        cout << " Enter title : ";
        cin >> title;
        cout << " Enter golf club dues : ";
        cin >> dues;
    }
    void putdata() const
    {
        employee::putdata();
        cout << "\n Title : " << title;
        cout << "\n Golf club dues : " << dues;
    }
};
////////////////////////////////////////////////////////////////
class scientist : public employee // scientist class
{
private:
    int pubs; // number of publications
public:
    void getdata()
    {
        employee::getdata();
        cout << " Enter number of pubs : ";
        cin >> pubs;
    }
    void putdata() const
    {
        employee::putdata();
        cout << "\n Number of publications : " << pubs;
    }
};

class laborer : public employee // laborer class
{
};

class manager2 : public compensation, public manager
{
public:
    void getdata()
    {
        manager::getdata();
        compensation::getdata();
    }

    void putdata()
    {
        manager::putdata();
        compensation::putdata();
    }
};

class scientist2 : public compensation, public scientist
{
public:
    void getdata()
    {
        scientist::getdata();
        compensation::getdata();
    }

    void putdata()
    {
        scientist::putdata();
        compensation::putdata();
    }
};

class laborer2 : public compensation, public laborer
{
public:
    void getdata()
    {
        laborer::getdata();
        compensation::getdata();
    }

    void putdata()
    {
        laborer::getdata();
        compensation::putdata();
    }
};

////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
int main()
{
    manager2 m1, m2;
    scientist2 s1;
    laborer2 l1;
    cout << endl; // get data for several employees
    cout << "\nEnter data for manager 1";
    m1.getdata();
    cout << "\nEnter data for manager 2";
    m2.getdata();
    cout << "\nEnter data for scientist 1";
    s1.getdata();
    cout << "\nEnter data for laborer 1";
    l1.getdata();
    // display data for several employees
    cout << "\nData on manager 1";
    m1.putdata();
    cout << "\nData on manager 2";
    m2.putdata();
    cout << "\nData on scientist 1";
    s1.putdata();
    cout << "\nData on laborer 1";
    l1.putdata();
    cout << endl;
    return 0;
}