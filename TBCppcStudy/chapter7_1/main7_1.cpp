#include <iostream>

using namespace std;

int foo(int x, int y);

int foo(int x, int y) // x, y : Parameters
{
    return x + y;
} // x and y are destroyed here

int main()
{
    int x = 1, y = 2;

    foo(6, 7); // 6, 7 : Arguments (actual parameters)
    foo(x, y + 1); // x, y + 1 : Arguments

    return 0;
}
