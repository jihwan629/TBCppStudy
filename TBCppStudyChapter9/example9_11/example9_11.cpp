#include <iostream>

using namespace std;

class Test
{
public:
    int number = 0;
    const char *str = nullptr;

    Test(const char *inp) :str(inp){}

    ~Test() 
    {
        delete[] str;
    }
};

int main()
{
    Test t1("test1");

    Test copy = t1;

    cout << (int *)t1.str << " " << &t1.number << endl;
    cout << (int *)copy.str << " " << &copy.number << endl;

    return 0;
}
