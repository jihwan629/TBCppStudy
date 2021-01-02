#include <iostream>

using namespace std;

class A
{
public:
    virtual void print() { cout << "A" << endl; }
};

class B : public A
{
public:
    void print() { cout << "B" << endl; }
};

class C : public B
{
public:
    void print() { cout << "C" << endl; }
};

class D : public C
{
public:
    void print() { cout << "D" << endl; }
    //int print() { return 0; } // error
};

int main()
{
    A a;
    B b;
    C c;
    D d;

    // virtual 아래는 전부 virtual이 된다
    B &ref = c;
    ref.print(); // c

    return 0;
}
