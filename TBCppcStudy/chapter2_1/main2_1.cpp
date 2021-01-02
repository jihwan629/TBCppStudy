#include <iostream>

using namespace std;

int main()
{
    bool bValue = false;

    char chValue = 'A';
    char chValue1 = 65;

    float fValue = 3.141592f;
    double dValue = 3.141592;

    //컴파일시 자동으로 타입 결정
    auto aValue =   3.141592;
    auto aValue1 =  3.141592f;

    int i = (int) 3.141592; // copy initialization
    int a(123); // direct initialization
    int b{123}; // uniform initialization

    int k = 0, l = 456, m = 123;

    cout << ((bValue) ? 1 : 0) << endl;
    //1은 true, 0은 false
    cout << bValue << endl;

    cout << (int)chValue << endl; 
    cout << chValue1 << endl;

    cout << fValue << endl;
    cout << dValue << endl;

    cout << aValue << endl;
    cout << sizeof(aValue) << endl;
    cout << sizeof(aValue1) << endl;

    return 0;
}
