﻿#include <iostream>

using namespace std;

// inline function
// 헤더 파일에 함수 정의할 때 사용
// 빠르다 (무조건은 아니다)
inline int min(int x, int y)
{
    return x > y ? y : x;
}

int main()
{
    cout << min(5, 6) << endl;
    cout << min(3, 2) << endl;

    cout << (5 > 6 ? 6 : 5) << endl;
    cout << (3 > 2 ? 2 : 3) << endl;

    return 0;
}
