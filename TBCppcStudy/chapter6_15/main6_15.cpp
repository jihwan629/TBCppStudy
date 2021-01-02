#include <iostream>

using namespace std;

void doSomething(const int &x)
{
    cout << x << endl;
}

int main()
{
    //int x = 5;
    //const int &ref_x = x;

    //const int x = 5;
    //const int &ref_x = x;

    //const int &ref_2 = ref_x;

    const int &ref_x = 3 + 4;

    //cout << ref_x << endl;
    //cout << &ref_x << endl;

    // 참조 변수를 사용하면 리터럴 상수를 바로 넣을 수 있다
    int a = 1;
    doSomething(a);
    doSomething(1);
    doSomething(a + 3);
    doSomething(3 * 4);

    return 0;
}

