#include <iostream>

using namespace std;

class Base
{
public:
    //FucnctionPointer *_vptr;
    virtual void fun1() {};
    virtual void fun2() {};
};

class Der : public Base
{
public:
    //FucnctionPointer *_vptr;
    virtual void fun1() {};
    virtual void fun3() {};
};

int main()
{
    cout << sizeof(Base) << endl;
    cout << sizeof(Der) << endl;

    return 0;
}
