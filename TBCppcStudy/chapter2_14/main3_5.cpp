#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    //while (true)
    //{
    //    int x, y;
    //    cin >> x >> y;
    //    cout << "Your input is " << x << " " << y << endl;

    //    if (x <= 0 || y <= 0) break;

    //    if (x == y)
    //        cout << "equal" << endl;

    //    if (x != y)
    //        cout << "not equal" << endl;

    //    if (x > y)
    //        cout << "x is greater than y" << endl;

    //    if (x < y)
    //        cout << "x is less than y" << endl;

    //    if (x >= y)
    //        cout << "x is greater than y or equal to y" << endl;

    //    if (x <= y)
    //        cout << "x is less than y or equal to y" << endl;
    //}

    const double epsilon = 1e-10;

    double d1(100 - 99.99);     // 0.001
    double d2(10 - 9.99);       // 0.001

    if(std::abs(d1 - d2) < epsilon)
        cout << "Approximately equal" << endl;
    //if (d1 == d2)
    //    cout << "equal" << endl;
    else
    {
        cout << "not equal" << endl;

        if (d1 > d2)
            cout << "d1 > d2" << endl;
        else
            cout << "d1 < d2" << endl;

        //cout << d1 << " " << d2 << endl;
        cout << std::abs(d1 - d2) << endl;
    }
        

    return 0;
}
