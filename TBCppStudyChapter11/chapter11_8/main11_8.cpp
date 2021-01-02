#include <iostream>

using namespace std;

class Base
{
protected:
    int m_i;

public:
    Base(int value)
        : m_i(value)
    {}

    void print()
    {
        cout << "I'm Base" << endl;
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

    using Base::m_i;

private:
    // 1.
    using Base::print; // do not add ()
    // 2.
    void print() = delete;
};

int main()
{
    Base base(5);
    base.print();

    Derived derived(7);

    derived.m_i = 1024;
    //derived.print(); // error

    return 0;
}