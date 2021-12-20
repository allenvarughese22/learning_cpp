#include <iostream>
using namespace std;


class Distance // English Distance class
{
private:
    int feet;
    float inches;

public: // constructor (no args)
    Distance() : feet(0), inches(0.0)
    {
    } // constructor (two args)
    Distance(int ft, float in) : feet(ft), inches(in)
    {
    }
    void getdist() // get length from user
    {
        cout << "\nEnter feet : "<<endl;
        cin >> feet;
        cout << "Enter inches : "<<endl;
        cin >> inches;
    }
    void showdist() const // display distance
    {

        cout << feet << "\'" << inches << "\"";
    }
    Distance operator-(Distance) const; // add 2 distances
};

Distance Distance::operator - (Distance d2) const
{
int f = feet - d2.feet; //add the feet
float i = inches - d2.inches; //add the inches

if(inches - d2.inches < 0) //if inches substraction is negative,
{ //then substract donvert 1 feet to  12 inches for calculation
i = ( inches - d2.inches)+12; 
f--; //increase feet by 1
}
// cout<<i<<endl;
// cout<<f<<endl;


if(i >= 12.0) //if total exceeds 12.0,
{ //then decrease inches
i -= 12.0; //by 12.0 and
f++; //increase feet by 1
}//return a temporary Distance

return Distance(f,i);
}

int main()

{
Distance dist1,dist2,dist3; //define distances
dist1.getdist(); //get dist1 from user
dist2.getdist(); //define, initialize dist2
dist3 = dist1 - dist2; //single + operator
// dist4 = dist1 + dist2 + dist3; //multiple + operators
//display all lengths
cout << "dist1 = ";dist1.showdist();cout<<endl;
cout << "dist2 = "; dist2.showdist() ;cout<<endl;
cout<<"the difference between distance is"<<endl;
cout << "dist3 = " ;dist3.showdist() ;cout<<endl;
// cout << dist4 = ; dist4.showdist(); cout << endl;
return 0;
}