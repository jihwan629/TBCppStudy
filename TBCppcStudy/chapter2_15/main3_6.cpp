#include <iostream>

int main()
{
    using namespace std;

    //// logical NOT
    //bool x = true;
    //cout << !x << endl;

    //// logical AND
    //bool x = true;
    //bool y = false;
    //cout << (x && y) << endl;

    //bool hit = true;
    //int health = 10;

    //if (hit && health < 20)
    //{
    //    cout << "die " << endl;
    //}
    //else
    //    health -= 20;

    // logical OR
    //bool x = true;
    //bool y = false;

    //cout << (x || y) << endl;

    //int x = 5;
    //int y = 7;

    ////if (!x == y) // if((!x) == y)
    //if (x != y)
    //{
    //    cout << "x does not equal y" << endl;
    //}
    //else
    //{
    //    cout << "x equal y" << endl;
    //}

    //int v = 1;
    //if (v == 0 || v == 1)
    //    cout << "v is 0 or 1" << endl;

    //// short circuit evaluation
    ////int x = 1;
    //int x = 2;
    //int y = 2;

    //// && 왼쪽이 false면 오른쪽은 계산을 안한다
    //if (x == 1 && y++ == 2)
    //{
    //    // do something
    //}

    //cout << y << endl; // x = 1일 때 3, x = 2일 때 2

    bool x = true;
    bool y = false;

    // De Morgan's Law
    //!(x && y) == (!x || !y)
    //!(x || y) == (!x && !y)

    // XOR
    // false false > false
    // false true > true
    // true false > true
    // true true > true
    //cout << (x != y) << endl;

    //cout << std::boolalpha;

    //cout << ((true && true) || false) << endl;
    //cout << ((false && true) || true) << endl;
    //cout << ((false && true) || false || true) << endl;

    //cout << ((14 > 13 || 2 > 1) && (9 > 1)) << endl;
    //cout << !(2314123 > 2 | 123123 > 2387) << endl;

    bool v1 = true;
    bool v2 = false;
    bool v3 = false;

    bool r1 = v1 || v2 && v3; // && 가 ||보다 우선 순위가 높다
    bool r2 = (v1 || v2) && v3;
    bool r3 = v1 || (v2 && v3);

    cout << r1 << endl;
    cout << r2 << endl;


    return 0;
}
