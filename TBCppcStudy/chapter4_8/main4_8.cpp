#include <iostream>

int main()
{
    using namespace std;

    enum class Color
    {
        RED,
        BLUE,
    };

    enum class Fruit
    {
        BANANA,
        APPLE,
    };

    Color color = Color::RED;
    Fruit fruit = Fruit::BANANA;

    Color color1 = Color::BLUE;
    Color color2 = Color::BLUE;

    //if (color == fruit)
    //    cout << "equal" << endl;

    if (color1 == color2)
        cout << "same color" << endl;

    return 0;
}

