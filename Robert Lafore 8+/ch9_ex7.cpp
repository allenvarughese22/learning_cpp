#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Counter
{
protected:              // NOTE: not private
    unsigned int count; // count
public:
    Counter() : count() // constructor, no args
    {
    }
    Counter(int c) : count(c) // constructor, one arg
    {
    }
    unsigned int get_count() const // return count
    {
        return count;
    }
    Counter operator++() // incr count (prefix)
    {
        return Counter(++count);
    }
};
////////////////////////////////////////////////////////////////
class CountDn : public Counter
{
public:
    CountDn() : Counter() // constructor, no args
    {
    }
    CountDn(int c) : Counter(c) // constructor, 1 arg
    {
    }
    CountDn operator--() // decr count (prefix)
    {
        return CountDn(--count);
    }
};

class CountUpDownPost : public CountDn
{
public:
    CountUpDownPost() : CountDn() // constructor, no args
    {
    }
    CountUpDownPost(int c) : CountDn(c) // constructor, 1 arg
    {
    }
    CountUpDownPost operator--(int) // decr count (post)
    {
        return CountUpDownPost(count--);
    }
    CountUpDownPost operator++(int) // decr count (post)
    {
        return CountUpDownPost(count++);
    }

    CountUpDownPost & operator--() // decr count (pre)
    {
         CountDn::operator--();
         return *this;
    } 

    CountUpDownPost & operator++() // decr count (pre)
    {
         CountDn::operator++();
         return *this;
    }   
};
////////////////////////////////////////////////////////////////
int main()
{
    CountDn c1; // class CountDn
    CountDn c2(100);
    cout << "\nc1=" << c1.get_count(); // display
    cout << "\nc2=" << c2.get_count(); // display
    ++c1;
    ++c1;
    ++c1;                              // increment c1
    cout << "\nc1=" << c1.get_count(); // display it
    --c2;
    --c2;                              // decrement c2
    cout << "\nc2=" << c2.get_count(); // display it
    CountDn c3 = --c2;                 // create c3 from c2
    cout << "\nc3=" << c3.get_count(); // display c3
    cout << endl;

    CountUpDownPost c4(400);
    cout << "\nc4=" << c4.get_count() << endl;
    c4--;
    c4--;
    cout << "\nafter post increment";

    cout << "\nc4=" << c4.get_count() << endl;

    cout << "\nafter post decrement";
    c4--;
    c4--;
    c4--;
    cout << "\nc4=" << c4.get_count();

    cout << "\n using  pre decrement";

    --c4;
    --c4;
    --c4;
    --c4;
    --c4;
    --c4;
    
    cout << "\nc4=" << c4.get_count();

    cout << "\n using  pre -  increment";

    ++c4;
    ++c4;
    ++c4;
    ++c4;
    ++c4;
    ++c4;
    ++c4;
    ++c4;
    ++c4;
    ++c4;
    
    cout << "\nc4=" << c4.get_count();

    return 0;
}
