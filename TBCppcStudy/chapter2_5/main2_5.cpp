#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main()
{
    using namespace std;

    //float f(3.141592f); // 3.14 = 31.4 *0.1
    //double d(3.141592);
    long double ld(3.141592);

    //cout << 3.14 << endl;
    //과학적표기법 e = 10
    /*cout << 31.4e-1 << endl;
    cout << 31.4e-2 << endl;
    cout << 31.4e1 << endl;
    cout << 31.4e2 << endl;*/

    /*cout << sizeof(f) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(ld) << endl;*/

    /*cout << numeric_limits<float>::max() << endl;
    cout << numeric_limits<double>::max() << endl;
    cout << numeric_limits<long double>::max() << endl;*/

    //가장 작은 절대값
    /*cout << numeric_limits<float>::min() << endl;
    cout << numeric_limits<double>::min() << endl;
    cout << numeric_limits<long double>::min() << endl;*/

    /*cout << numeric_limits<float>::lowest() << endl;
    cout << numeric_limits<double>::lowest() << endl;
    cout << numeric_limits<long double>::lowest() << endl;*/

    //자리수 설정
    /*cout << std::setprecision(16) << endl;
    cout << 1.0 / 3.0 << endl;*/

    //float f(123456789.0f); // 10 significant digits
    //cout << std::setprecision(9);
    //cout << f << endl;

    /*double d(0.1);
    cout << d << endl;
    cout << std::setprecision(17);
    cout << d << endl;*/

    /*double d1(1.0);
    double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

    cout << std::setprecision(17);
    cout << d1<< endl;
    cout << d2 << endl;*/

    double zero = 0.0;
    double posinf = 5.0 / zero;
    double neginf = -5.0 / zero;
    double nan = zero / zero;

    cout << posinf << " " << std::isinf(posinf) << endl;
    cout << neginf << " " << std::isinf(neginf) << endl;
    cout << nan << " " << std::isnan(nan) << endl;
    cout << nan << " " << std::isnan(1.0) << endl;

    return 0;
}