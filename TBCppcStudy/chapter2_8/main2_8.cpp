#include <iostream>

int main()
{
    using namespace std;

    float pi = 3.141592f;
    int i = 1234L;

    //unsigned int n = 5u;
    //long n2 = 5L;
    //double d = 6.0e-10;
    
    // Decimal  : 0 1 2 3 4 5 6 7 8 9 10
    // Octal    : 0 1 2 3 4 5 6 7 10 11 12 13
    // Hexa     : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

    // 앞에 0을 붙이면 > 8진수
    //int x = 012; // 10
    // 앞에 0x를 붙이면 > 16 진수
    //int x = 0xF; // 15

    // 16진수로 쓰면 간편해짐
    // 0011 1010 0111 1111
    // 3A7F

    // 앞에 0b를 붙이면 > 2진수
    int x = 0b1010; // 10

    cout << x << endl;

    // magic number 는 상수로 바꾸자 
    const int price_per_item = 10;
    int num_items = 123;
    int price = num_items * price_per_item;



    return 0;
 }

