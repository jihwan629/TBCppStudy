#include <iostream>

using namespace std;

// 값에 의한 전달

void doSomething(int y)
{
    // int y 가 내부적으로 선언 되고 
    // 외부에 영향을 주지 않는다
    // 5가 들어간다
    cout << "In func " << y << " " << &y << endl;
}

int main()
{
    doSomething(5);

    int x = 6;

    cout << "In main" << x << " " << &x << endl;

    // x가 들어가는게 아니라 
    // x의 값(6)이 들어간다
    // doSomething 안 y의 주소가 같다
    doSomething(x);
    doSomething(x + 1);

    return 0;
}
