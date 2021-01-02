#include <iostream>

using namespace std;

typedef int *pint;

//void foo(pint ptr)
void foo(int *ptr)
{
    cout << *ptr << " " << ptr << " " << &ptr << endl;
    //*ptr = 10 // const 는 못 바꿈
}

void foo(double degrees, double *sin_out, double *cos_out)
{
    // sin_out, cos_out은 foo에서 다시 선언
    // 주소 값이 다름
    *sin_out = 1.0;
    *cos_out = 2.0;
}

void foo(const int * const ptr, int *arr, int length)
{
    for (int i = 0; i < length; i++)
        cout << arr[i] << endl;
    arr[0] = 1.0;

    int x = 1;
    //ptr = &x;
    //*ptr = 1;
}

int main()
{
    int value = 5;

    cout << value << " " << &value << endl;

    int *ptr = &value;

    cout << &ptr << endl;

    foo(ptr);
    foo(&value);
    //foo(5); // 리터럴안됨

    double degrees = 30;
    double sin, cos;
    foo(degrees, &sin, &cos);

    cout << sin << " " << cos << endl;

    return 0;
}
