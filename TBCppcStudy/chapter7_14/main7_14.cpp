#include <iostream>
#include <cassert>
#include <array>

using namespace std;

void printValue(const std::array<int, 5> &my_array,
    const int &ix)
{
    assert(ix >= 0);
    assert(ix <= my_array.size() - 1);

    cout << my_array[ix] << endl;
}

int main()
{
    //int number = 5;

    //// Debug에서만 작동
    //// number should be 5
    //assert(number == 5);

    //std::array<int, 5> my_array{ 1,2,3,4,5 };

    //printValue(my_array, 100);

    const int x = 10;

    //assert(x == 5);
    static_assert(x == 5, "x should be 5"); // const에서만 사용

    return 0;
}