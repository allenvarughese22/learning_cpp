#include <iostream>
#include <string>
using namespace std;

class publication
{
    string title;
    float price;

public:
    void getdata()
    {
        cout << "enter the title" << endl;
        cin >> title;
        cout << "enter the price" << endl;
        cin >> price;
    }
    void putdata()
    {
        cout << "the title is " << title << endl;
        cout << "the price is " << price << endl;
    }
};

class sales
{
    float s1, s2, s3;

public:
    void getdata()
    {
        cout << "enter the sale amount in rupees for the last three months. \n"
                "Enter the values separted by spaces in ascending order of  month"
             << endl;

        cin >> s1 >> s2 >> s3;
    }

    void putdata()
    {
        cout << "3 months before the sale of book was:" << s1 << endl;
        cout << "2 months before the sale of book was:" << s2 << endl;
        cout << "For previous month,the sale of book was:" << s3 << endl;
    }
};

class book : public publication, public sales
{
    int page_count;

public:
    void getdata()
    {
        cout << "enter the details of the book" << endl;
        publication::getdata();
        sales::getdata();
        cout << "enter the page count" << endl;
        cin >> page_count;
    }

    void putdata()
    {
        cout << "\nthe details of the book are" << endl;

        publication::putdata();
        sales::putdata();
        cout << "the page count is " << page_count << endl;
    }
};

class tape : public publication, public sales
{
    float playing_time;

public:
    void getdata()
    {
        cout << "\nenter the details of the tape" << endl;
        publication::getdata();
        sales::getdata();
        cout << "enter the playing time in minutes" << endl;
        cin >> playing_time;
    }
    void putdata()
    {
        cout << "\nthe details of the tape are" << endl;
        publication::putdata();
        sales::putdata();
        cout << "the playing time in minutes is " << playing_time << endl;
    }
};

int main()
{
    book b1;
    tape t1;

    b1.getdata();

    t1.getdata();
    b1.putdata();
    t1.putdata();
    return 0;
}