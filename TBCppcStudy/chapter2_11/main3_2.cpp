#include <iostream>

int main()
{
    using namespace std;
    
    int x = 7;
    //int y = -x;
    int y = 4;

    //cout << x / y << endl;
    //// 둘중 하나만 실수면 실수로 계산
    //cout << float(x) / y << endl;
    //cout << x / float(y) << endl;
    //cout << float(x) / float(y) << endl; 

    //cout << -5 / 2 << endl; // -2 (버림)
    //cout << -5 % 2 << endl; // -1 (왼쪽 기준)

    int z = x;
    z += y; // z = z +y
    cout << z << endl; // 11

    //int z = x % y;
    //cout << "x % y = " << z << endl;

    return 0;
}
