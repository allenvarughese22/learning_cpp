// copying the template base code from the textbook
// as the template from textbook was used nothing much was
// done in this code.. 95% same as the textbook

#include <iostream>
#include <string> //for string class
using namespace std;
////////////////////////////////////////////////////////////////
class person // class of persons
{
protected:
    string name; // person's name
    float salary;
public:
    void setData() // set the name
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter your salary: ";
        cin >> salary;
    }
    void printData() // display the name
    {
        cout << endl
             << name;

        cout << endl
             << salary;
    }

    // prsPtr -> salary cannot be used
    // as the salary is protected
    //so we need a funtion to get the value from the protected class
    
    string getName() // return the name
    {
        return name;
    }

    float getSalary() // return the name
    {
        return salary;
    }
};
////////////////////////////////////////////////////////////////
int main()
{
    void bsort(person **, int); // prototype
    person *persPtr[100];       // array of pointers to persons
    int n = 0;                  // number of persons in array
    char choice;                // input char
    do
    {                                    // put persons in array
        persPtr[n] = new person;         // make new object
        persPtr[n]->setData();           // set person's name
        n++;                             // count new person
        cout << "Enter another (y/n)? "; // enter another
        cin >> choice;                   // person?
    }

    while (choice == 'y'); // quit on ‘n'
    cout << "\nUnsorted list:";
    for (int j = 0; j < n; j++) // print unsorted list
    {
        persPtr[j]->printData();
    }
    bsort(persPtr, n); // sort pointers
    cout << "\nSorted list:";
    for (int j = 0; j < n; j++) // print sorted list
    {
        persPtr[j]->printData();
    }
    cout << endl;
    return 0;
} // end main()
//--------------------------------------------------------------
void bsort(person **pp, int n) // sort pointers to persons
{
    void order(person **, person **); // prototype
    int j, k;                         // indexes to array
    for (j = 0; j < n - 1; j++)       // outer loop
        for (k = j + 1; k < n; k++)   // inner loop starts at outer
            order(pp + j, pp + k);    // order the pointer contents
}
//--------------------------------------------------------------
void order(person **pp1, person **pp2) // orders two pointers
{                                      // if 1st larger than 2nd,
    if ((*pp1)->salary > (*pp2)->getSalary())
    {
        person *tempptr = *pp1; // swap the pointers
        *pp1 = *pp2;
        *pp2 = tempptr;
    }
}
