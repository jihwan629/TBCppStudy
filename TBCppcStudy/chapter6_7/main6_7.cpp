#include <iostream>
#include <typeinfo>

using namespace std;

struct Something
{
    int a, b, c, d; // 4 x 4 = 16 bytes
};

int main()
{
    int x = 5;
    double d = 123.0;

    //cout << x << endl;
    //cout << (int)&x << endl; // & : address-of operator

    //// de-reference operator (*)
    //// 포인터가 가리키는 데이터에 접근
    //cout << *&x << endl; // *(&x)

    // 앞의 int는 de-referce 할 때의 자료형을 뜻함
    // 주소값의 자료형이랑 상관 x
    //int *ptr_x;
    //ptr_x = &x;

    //double *ptr_d = &d;

    //cout << ptr_x << endl;
    //cout << *ptr_x << endl;

    //cout << ptr_d << endl;
    //cout << *ptr_d << endl;

    //cout << typeid(ptr_x).name() << endl;
    
    //cout << sizeof(x) << endl;
    //cout << sizeof(d) << endl;
    //cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
    //cout << sizeof(&d) << " " << sizeof(ptr_d) << endl; // 주소의 크기는 동일하다 (x86 > 4, x64 > 8)

    //Something ss;
    //Something *ptr_s;

    //cout << sizeof(Something) << endl;
    //cout << sizeof(ptr_s) << endl; // 주소 크기는 고정

    // 포인터 변수는 초기화 필요
    //int* ptr_x;
    //double* ptr_d;

    //cout << *ptr_x << endl;

    return 0;
}