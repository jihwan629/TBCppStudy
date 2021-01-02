#include <iostream>
#include <string>

enum Color // user-defined data types
{
    COLOR_BLACK,
    COLOR_RED,
    COLOR_BLUE,
    //BLUE,
    COLOR_GREEN ,
    COLOR_SKYBLUE,
}; // ; 필수

enum Feeling
{
    HAPPY,
    JOY,
    TIRED,
    BLUE,
};

int main()
{
    using namespace std;

    //Color paint = COLOR_BLACK;
    //Color house(COLOR_BLUE);
    //Color apple{ COLOR_RED };

    //Color my_color = COLOR_SKYBLUE;

    //cout << my_color << " " << COLOR_SKYBLUE << endl;

    //if (COLOR_BLUE == COLOR_GREEN)
    //{
    //    cout << "Equal" << endl;
    //}

    //int color_id = COLOR_RED;
    //cout << color_id << endl;

    Color my_color = static_cast<Color>(3);
    cout << my_color << endl;

    //int in_number;
    //cin >> in_number;

    //if (in_number == 0) my_color = COLOR_BLACK;
    //if (in_number == static_cast<Color>(0)) 
    //    my_color = static_cast<Color>(0);

    string str_input;
    std::getline(cin, str_input);

    if (str_input == "COLOR_BLACK")
        my_color = static_cast<Color>(0);


    return 0;
}
