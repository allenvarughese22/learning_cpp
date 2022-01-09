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

class date_class
{
protected:
    int month, date, year;
    char temp;

public:


    void getdate()
    {
        cout << "enter the date of publication in dd/mm/yyyy format" << endl;
        cin >> date >> temp >> month >> temp >> year;
        
    }

    void showdate()
    {
        cout << "the date of publication is " << endl;
        cout << date << "/" << month << "/" << year << endl;
    }
};

class publication2 : public publication, public date_class
{
    // date date_of_publication;

public:
    void getdata()
    {
        publication::getdata();
        date_class:getdate();
    }

    void putdata()
    {
        publication::putdata();
        date_class::showdate();
    }
};

class book : public publication2
{
    int page_count;

public:
    void getdata()
    {
        cout << "enter the details of the book" << endl;
        publication2::getdata();
        cout << "enter the page count" << endl;
        cin >> page_count;
    }
    void putdata()
    {
        cout << "\nthe details of the book are" << endl;

        publication2::putdata();
        cout << "the page count is " << page_count << endl;
    }
};

class tape : public publication2
{
    float playing_time;

public:
    void getdata()
    {
        cout << "\nenter the details of the tape" << endl;
        publication2::getdata();
        cout << "enter the playing time in minutes" << endl;
        cin >> playing_time;
    }
    void putdata()
    {
        cout << "\nthe details of the tape are" << endl;
        publication2::putdata();
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