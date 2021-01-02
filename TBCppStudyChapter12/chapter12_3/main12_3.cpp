#include <iostream>

using namespace std;

class A
{
public:
    //virtual void print(int x) { cout << "A" << endl; }
    //virtual void print() { cout << "A" << endl; }

    void print() { cout << "A" << endl; }
    virtual A *getThis() { return this; }
};

class B : public A
{
public:
    //void print(short x) { cout << "B" << endl; }
    //void print(int x) override { cout << "B" << endl; }

    void print() { cout << "B" << endl; }
    virtual B *getThis() 
    {
        cout << "B::getThis" << endl;
        return this; 
    }
};

class C : public B
{
public:
    // final > override를 막음
    //virtual void print() final { cout << "C" << endl; }

    virtual void print() { cout << "C" << endl; }
};

class D : public C
{
public:
    void print() { cout << "D" << endl; }
};

int main()
{
    A a;
    B b;
    //C c;

    //A &ref = b;
    //// parameter가 다르면 override 안됨. overloading으로 이해
    //ref.print(1); // b

    A &ref = b;
    b.getThis()->print();
    ref.getThis()->print();

    cout << typeid(b.getThis()).name() << endl;
    cout << typeid(ref.getThis()).name() << endl;

    return 0;
}