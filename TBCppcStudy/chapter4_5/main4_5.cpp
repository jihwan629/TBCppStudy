#include <iostream>
#include <typeinfo>
#include <iomanip>

int main()
{
    using namespace std;

    //float a = 1.0f;
    //double d = a; // numeric promotion

    //cout << typeid(a).name() << endl;

    // numeric conversion
    //int i = 3000;
    //char c = i;

    //cout << static_cast<int>(c) << endl; // 48

    //double d = 0.123456789;
    //float f = d;

    //cout << std::setprecision(12) << f << endl; 

    //float f = 3.14;
    //int i = f;

    //cout << std::setprecision(12) << i << endl; // 3 (버림)

    //cout << 5u - 10 << endl;

    // int, unsigned int, long, unsigned long,
    // long long, unsigned long long, float, double,
    // long double

    //int i = int(4.0);
    int i = static_cast<int>(4.0);

    return 0;
}
