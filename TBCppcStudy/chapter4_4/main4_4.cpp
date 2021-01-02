#include <iostream>

auto add(int x, int y) -> int;
auto add(double x, double y) -> double;

// 매개 변수는 auto 사용 못함
auto add(int x, int y) -> int
{
    return x + y;
}

auto add(double x, double y) -> double
{
    return x + y;
}

int main()
{
    using namespace std;

    auto a = 123; // auto는 초기화 사용 필요
    auto d = 123.0;
    auto c = 1 + 2.0; // double

    auto result = add(1, 2);

    return 0;
}

