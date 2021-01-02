#include <iostream>

using namespace std;

const char *getName()
{
    return "Jack Jack";
}

int main()
{
    ////char name[] = "Jack Jack";
    ////char *name = "Jack Jack"; // string은 포인터 변수에 바로 못 넣음
    //const char *name = getName();
    //const char *name2 = getName();

    //// 같은 값이 나온다
    //// 리터럴로 선언된 string은 같은 값이면 같은 주소를 가진다
    //cout << uintptr_t(name) << endl;
    //cout << uintptr_t(name2) << endl;

    //int int_arr[5] = { 1,2,3,4,5 };
    //char char_arr[] = "Hello, World!";
    //const char *name = "Jack Jack";

    //cout << int_arr << endl;
    //// cout 에서 문자열 주소를 출력 안하고, \0까지 출력한다
    //cout << char_arr << endl;
    //cout << name << endl;

    char c = 'Q';
    cout << &c << endl;
    cout << uintptr_t(&c) << endl;

    return 0;
}

