#include <iostream>
using namespace std;

class base
{
private:
	int value;

public:
	void set_value()
	{
		cout << "enter the value" << endl;
		cin >> value;
	}

	void show_value()
	{
		cout << "the value is " << value << endl;
	}
};

class derived : public base
{
};

class grand_child : public derived
{
public:
	void set_value()
	{
		cout << "indirect" << endl;
		base::set_value();
	}
};

int main()
{
	// derived a;
	// a.set_value();
	// a.show_value();

	// cannot access
	grand_child b;
	b.set_value();
	b.show_value();
	return 0;
}
