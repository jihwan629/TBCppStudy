#include <iostream>
#include <vector>
#include <functional>

using namespace std;

class Base
{
public:
    int m_i = 0;

    virtual void print()
    {
        cout << "I'm Base" << endl;
    }
};

class Derived : public Base
{
public:
    int m_j = 1;

    virtual void print() override
    {
        cout << "I'm Derived" << endl;
    }
};

//void doSomething(Base &b) // I'm Derived 
void doSomething(Base b) // I'm Base 
{
    b.print();
}

int main()
{
    //Derived d;
    ////Base &b = d; // I'm Derived
    //Base b = d; // I'm Base

    //b.print();
    //doSomething(d);


    Base b;
    Derived d;

    // object slicing 막기

    //// 1. 포인터
    //std::vector<Base *> my_vec;
    //my_vec.push_back(&b);
    //my_vec.push_back(&d);

    //for (auto &ele : my_vec)
    //    ele->print();

    // 2. functional
    std::vector<std::reference_wrapper<Base>> my_vec;
    my_vec.push_back(b);
    my_vec.push_back(d);

    for (auto &ele : my_vec)
        ele.get().print();

    return 0;
}
