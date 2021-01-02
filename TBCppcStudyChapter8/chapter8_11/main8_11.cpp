#include <iostream>

using namespace std;

class Something
{
public:
    class _init
    {
    public:
        _init()
        {
            s_value = 9876;
        }
    };

private:
    static int s_value;
    int m_value;

    static _init s_initializer;

public:
    Something()
        // static 변수는 생성자에서 초기화 불가
        //:m_value(123), s_value(1024)
        : m_value(123)
    {}

    // static 함수는 this 사용 불가
    static int getValue()
    {
        return s_value;
        //return this->s_value;
        //return m_value;
    }

    int temp()
    {
        return this->s_value;
    }
};

int Something::s_value = 1024;
Something::_init Something::s_initializer;

int main()
{
    //cout << Something::s_value << endl;
    cout << Something::getValue() << endl;

    Something s1, s2;

    cout << s1.getValue() << endl;
    //cout << s1.s_value << endl;

    int (Something:: * fptr1)() = &Something::temp;

    // 클래스의 멤버 변수는 인스턴스에 종속 되어 있기에
    // s2를 꼭 넣어야 한다(this 생략)
    cout << (s2.*fptr1)() << endl;

    // static 함수는 this 불가
    int (* fptr2)() = &Something::getValue;

    cout << (*fptr2)() << endl;

    return 0;
}
