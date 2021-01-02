#include <iostream>

using namespace std;

int main()
{
    //int value = 5;
    ////const int value = 5;
    //const int *ptr = &value;
    ////*ptr = 6;
    //value = 6;

    //cout << *ptr << endl;

    //int value1 = 5;
    //// ptr 안의 주소값의 데이터를 안 바꿈
    //// 주소값을 안 바꾸는게 아님
    //const int *ptr = &value1; 

    //int value2 = 6;
    //ptr = &value2;

    ////*ptr = 7;

    //int value = 5;
    //// 주소값 변경 불가
    //int *const ptr = &value;

    //*ptr = 10;
    //cout << *ptr << endl;

    //int value2 = 8;
    ////ptr = &value2;

    //int value = 5;
    //const int *const ptr = &value;

    int value = 5;
    // 주소 값 안 데이터 변경 불가
    const int *ptr1 = &value;
    // 주소 값 변경 불가
    int *const ptr2 = &value;
    // 둘다 불가
    const int *const ptr3 = &value;

    return 0;
}

