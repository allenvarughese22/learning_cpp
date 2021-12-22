#include <iostream>
using namespace std;

class time
{
private:
    int hr, min, sec;

public:
    time() : hr{0}, min{0}, sec{0} {}
    time(int hr, int min, int sec) : hr{hr}, min{min}, sec{sec} {}

    void display()
    {
        cout << "the time is " << hr << ":" << min << ":" << sec << endl;
    }

    // operator overloading to add time

    time operator+(time b)
    {

        // providing temp integers m,h,s to do calculation
        int m = 0, h = 0;
        int s = sec + b.sec;

        if (s > 59)
        {
            s -= 60;
            m++;
        }
        m += min + b.min;
        if (m > 59)
        {
            m -= 60;
            h++;
        }
        h += hr + b.hr;

        return time(h, m, s);
    }

    // prefex ++ overloading
    time operator++()
    {
        hr = hr + 1;
        return time(hr, min, sec);
    }

    // profix ++ overloading
    time operator++(int)
    {
        return time(hr++, min, sec);
    }

    // profix --overloading
    time operator--(int)
    {
        return time(hr--, min, sec);
    }

    // prefix --overloading
    time operator--()
    {
        return time(--hr, min, sec);
    }
};

int main()
{
    time t1(1, 2, 42);
    time t2;

    cout << "\nt1 \t";
    t1.display();
    cout << endl;
    t2 = t1;
    cout << "on applying t2 = t1 ";
    cout << "\nt2 \t";
    t2.display();
    cout << endl;
    cout << "\non applying t2 = ++t1 ";
    t2 = ++t1;
    cout << "\nt1 \t";
    t1.display();
    cout << endl;
    cout << "\nt2 \t";
    t2.display();
    cout << endl;

    cout << "\non applying t2 = t1++ ";
    t2 = t1++;
    cout << "\nt1 \t";
    t1.display();
    cout << endl;
    cout << "\nt2 \t";
    t2.display();
    cout << endl;

    t2 = t1;
    cout << "on applying t2 = t1 ";
    cout << "\nt1 \t";
    t1.display();
    cout << "\nt2 \t";
    t2.display();

    cout << "\non applying t2 = t1-- ";
    t2 = t1--;
    cout << "\nt1 \t";
    t1.display();
    cout << endl;
    cout << "\nt2 \t";
    t2.display();
    cout << endl;

    t2 = t1;
    cout << "on applying t2 = t1 ";
    cout << "\nt1 \t";
    t1.display();
    cout << "\nt2 \t";
    t2.display();

    cout << "\non applying t2 = --t1 ";
    t2 = --t1;
    cout << "\nt1 \t";
    t1.display();
    cout << endl;
    cout << "\nt2 \t";
    t2.display();
    cout << endl;

    return 0;
}
