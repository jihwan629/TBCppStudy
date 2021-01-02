#include <iostream>

int main()
{
    int x = 123;
    //int x(123);
    //int x; // initialization
    //x = 123; // assignment : x가 가리키는 메모리 주소에 123이라는 값을 정의

    std::cout << x << std::endl;
    //std::cout << &x << std::endl; // 주소 출력

    return 0;
}

//변수는 무조건 초기화하자