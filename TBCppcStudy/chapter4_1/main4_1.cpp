#include <iostream>

int a = 1;
void doSomething()
{
    a += 3;
}

namespace work1::work11::work111
{
    int a = 1;
    void doSomething()
    {
        a += 3;
    }
}

namespace work2
{
    int a = 2;
    void doSomething()
    {
        a += 5;
    }
}

int main()
{
    using namespace std;

    int apple = 5;
    cout << apple << endl;

    {
        int apple;
        apple = 1;
        cout << apple << endl;
    }

    cout << apple << endl;

    // :: scope resolution operator
    work1::work11::work111::a;
    work1::work11::work111::doSomething();

    work2::a;
    work2::doSomething();

    return 0;
}
