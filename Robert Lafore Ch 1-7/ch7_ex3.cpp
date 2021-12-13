#include <iostream>
using namespace std;

class Distance
{
    int feet;
    float inches;
    int count = 0;

public:
    Distance() : feet(0), inches(0) {}
    void getdata()
    {
        cout << "enter the feet" << endl;
        cin >> feet;
        cout << "enter inches" << endl;
        cin >> inches;
    }

    showvalue()
    {
        cout << "total feet: " << feet << endl;

        cout << "total inch: " << inches << endl;
    }
    void div_dist(Distance, int);
    Distance add_dist(const Distance &) const;
};

Distance Distance::add_dist(const Distance &d2) const
{
    Distance temp; //temporary variable
    
    temp.inches = inches + d2.inches; //add the inches
    if (temp.inches >= 12.0)          //if total exceeds 12.0,
    {                                 //then decrease inches
        temp.inches -= 12.0;          //by 12.0 and
        temp.feet = 1;                //increase feet
    }                                 //by 1
    temp.feet += feet + d2.feet;      //add the feet
    return temp;
}

void Distance::div_dist(Distance d2, int divisor)
{
    float fltfeet = d2.feet + d2.inches / 12.0;
    fltfeet /= divisor;
    feet = int(fltfeet);
    inches = (fltfeet - feet) * 12.0;
    cout << "after average";
    cout << "average feet:" << ends << feet;
    cout << "average inches: " << inches;
}

int main()
{
    int size = 4;
    Distance dist[size];
    Distance temp;

    for (int i = 0; i < size; i++)
    {
        dist[i].getdata();
    }
/// this logic is too cumbersome
//write a simple one

    for (int i = 0; i < size - 1; i++)
    {
        temp = dist[i].add_dist(dist[i + 1]);
        dist[i + 1] = temp;
    }
    temp.showvalue();
    temp.div_dist(temp, size);
}