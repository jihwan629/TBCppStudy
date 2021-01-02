#include <iostream>
#include <string>

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

class Derived1 : public Base
{
public:
    int m_j = 1024;

    virtual void print() override
    {
        cout << "I'm Derived" << endl;
    }
};

class Derived2 : public Base
{
public:
    string m_name = "Dr. Two";

    virtual void print() override
    {
        cout << "I'm Derived" << endl;
    }
};

int main()
{
    Derived1 d1;
    Base *base = &d1;

    // 동적 형변환
    //auto *base_to_d1 = dynamic_cast<Derived1 *>(base);
    //cout << base_to_d1->m_j << endl;

    //base_to_d1->m_j = 256;
    //cout << d1.m_j << endl; // 256


    //auto *base_to_d1 = dynamic_cast<Derived2 *>(base);
    auto *base_to_d1 = static_cast<Derived2 *>(base); // 런타임에서 오류 안 잡아줌

    if (base_to_d1 != nullptr)
        //cout << base_to_d1->m_name << endl;
        base_to_d1->print();
    else
        cout << "Failed" << endl;

    return 0;
}
