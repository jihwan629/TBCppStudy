#include <iostream>
#include <array>
#include <functional>

using namespace std;

// 함수 포인터 

int func(int x)
{
    return 5;
}

int goo()
{
    return 10;
}

bool isEven(const int &number)
{
    if (number % 2 == 0) return true;
    else return false;
}

bool isOdd(const int &number)
{
    if (number % 2 == 1) return true;
    else return false;
}

// typedef 로 코드 줄이기
typedef bool (*check_fcn_t)(const int &);

// using 으로 코드 줄이기
using check_fcn_t = bool (*)(const int &);

void printNumbers(const array<int, 10> my_array, 
    //check_fcn_t check_fcn = isEven)
    std::function<bool(const int &)> check_fcn = isEven)
{
    for (auto element : my_array)
        if (check_fcn(element) == true) cout << element;

    cout << endl;
}

int main()
{
    //cout << fcnptr() << endl;

    //cout << func << endl; //함수도 포인터 > 주소값이 출력된다

    //int (*fcnptr)(int) = func;

    //cout << fcnptr(1) << endl;

    //fcnptr = goo;

    std::array<int, 10> my_array = { 0,1,2,3,4,5,6,7,8,9 };

    //printNumbers(my_array);
    //printNumbers(my_array, isOdd);

    std::function<bool(const int &)> fcnptr = isEven;

    printNumbers(my_array,fcnptr);
    fcnptr = isOdd;
    printNumbers(my_array, fcnptr);

    return 0;
}