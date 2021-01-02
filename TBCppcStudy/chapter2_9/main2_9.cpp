#include <iostream>
#include "MY_CONSTANTS.h"

#define PRICE_PER_ITEM 30

using namespace std;

// parameter에는 const를 붙여 변경 못하게 하자
void printNumber(const int my_number)
{
    int n = my_number;
    cout << n << endl;
}

int main()
{
    // const : 값을 고정 > 값을 무조건 초기화
     double const gravity(9.8);
    //gravity = 1.2;
    
     //printNumber(123);

     int number;
     cin >> number;

     // compile 상수
     //const int special_number(456);
     // runtime 상수
     const int special_number(number);

     // 컴파일 때 값이 있는지 확인한다
     constexpr int my_const(123);
     //constexpr int special_number(number);

     //special_number = 456;

     int num_item = 123;

     // cpp에서는 메크로를 잘 사용 안함 
     // define 사용시 전처리가 되기에 밑의 함수들에 영향이 간다
     //int price = num_item * PRICE_PER_ITEM;

     int price_per_item = 10;
     int price = num_item * price_per_item;

     double redius;
     cin >> redius;
     double circumstance = 2.0 * redius * constants::pi;

    return 0;
}

