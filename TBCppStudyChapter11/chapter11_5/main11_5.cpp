#include <iostream>

using namespace std;

class Base
{
public:
    int m_public;
protected:
    int m_protected;
private:
    int m_private;
};

//class Derived : public Base
//class Derived : protected Base
class Derived : private Base // 하위 클래스(GrandChild) 접근 방지
{
public :
    Derived()
    {
        // m_public = this->m_public = Base::m_public
        m_public = 123;
        m_protected = 456;
        //m_private = 789; // error
    }
};

class GrandChild : public Derived
{
public :
    GrandChild()
    {
        //Derived::m_public; // private > error
    }
};

int main()
{
    Base base;
    Derived derived;

    base.m_public = 123;
    //base.m_protected = 123; // error
    //base.m_private = 123; // error

    //derived.m_public = 1024; // protected > error
    //derived.m_protected; // error
    //derived.m_private; // error

    return 0;
}
