#include <iostream>

using namespace std;

class Base
{
protected:
    int m_value;

public:
    Base(int value)
        : m_value(value)
    {}

    void print()
    {
        cout << "I'm Base" << endl;
    }

    friend std::ostream &operator <<
        (std::ostream &out, const Base &base)
    {
        out << "this is Base output" << endl;
        return out;
    }
};

class Derived : public Base
{
private:
    double m_d;

public:
    Derived(int value)
        : Base(value)
    {}

    void print()
    {
        Base::print();
        cout << "I'm Derived" << endl;
    }

    friend std::ostream &operator <<
        (std::ostream &out, const Derived &derived)
    {
        cout << static_cast<Base>(derived);

        out << "this is Derived output" << endl;
        return out;
    }
};

int main()
{
    Base base(5);
    //base.print();
    cout << base;

    Derived derived(7);
    //derived.print();
    cout << derived;

    return 0;
}