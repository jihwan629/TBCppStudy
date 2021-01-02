#include <iostream>

using namespace std;

int generateID()
{
    static int s_id = 0;
    return ++s_id;
}

class Something
{
public:
    //int m_value = 1;
    //static int s_value;
    //static const int s_value = 1;
    static constexpr int s_value = 1;
};

//int Something::s_value = 1; // define in cpp
// 헤더에서 정의하지 말자(중복 선언 문제)

int main()
{
    cout << &Something::s_value << " " << Something::s_value << endl;

    //cout << generateID() << endl;
    //cout << generateID() << endl;
    //cout << generateID() << endl;

    Something st1;
    Something st2;

    //st1.m_value = 2;

    //cout << &st1.m_value << " " << st1.m_value << endl;
    //cout << &st2.m_value << " " << st2.m_value << endl;

    //st1.s_value = 2;

    cout << &st1.s_value << " " << st1.s_value << endl;
    cout << &st2.s_value << " " << st2.s_value << endl;

    //Something::s_value = 1024;

    cout << &Something::s_value << " " << Something::s_value << endl;

    return 0;
}
