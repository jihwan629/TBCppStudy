#include <iostream>

using namespace std;

class Mother
{
public:
    int m_i;

    //Mother()
    //    : m_i(1)
    //{
    //    cout << "Mother Constructor" << endl;
    //}

    Mother(const int & i_in = 0)
        : m_i(i_in)
    {
        cout << "Mother Constructor" << endl;
    }
};

class Child : public Mother
{
public:
    double m_d;

    Child()
        //:Mother(1024), m_d(1.0)
        :m_d(1.0), Mother(1024) 
        // Mother Class의 Constructor를 무조건 우선 실행
        //:m_i(1024) // public 이여도 error
    {
        //this->m_i = 10;
        //this->Mother::m_i = 1024;
        cout << "Child Constructor" << endl;

    }
};

class A
{
public:
    A()
    {
        cout << "A constructor" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "B constructor" << endl;
    }
};

class C : public B
{
public:
    C()
    {
        cout << "C constructor" << endl;
    }
};

int main()
{
    //Child c1;

    C c;
    //B b;
    return 0;
}