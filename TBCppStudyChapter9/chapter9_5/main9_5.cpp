#include <iostream>

using namespace std;

class Digit
{
private:
    int m_digit;
public:
    Digit(int digit = 0) : m_digit(digit) {}

    // 증감 연산자 오버로딩

    //prefix
    Digit & operator ++ ()
    {
        ++m_digit;
        return *this;
    }

    Digit &operator -- ()
    {
        --m_digit;
        return *this;
    }

    // postfix 
    // 매개 변수에 아무거나 넣기
    Digit operator ++ (int)
    {
        Digit temp(m_digit);

        // 위의 prefix 증감 연산자 오버로딩 함수
        ++(*this);

        return temp;
    }

    friend std::ostream &operator <<
        (std::ostream &out, const Digit &d)
    {
        out << d.m_digit;
        return out;
    }
};

// 연습 문제

class Example
{
private:
    int number;
public: 
    Example(const int & inp) :number(inp) {}

    Example &operator ++ ()
    {
        number = (++number > 9) ? 0 : number;
        return *this;
    }

    Example operator ++ (int)
    {
        Example temp(number);
        ++(*this);
        return temp;
    }

    Example &operator -- ()
    {
        number = (--number < 0) ? 9 : number;
        return *this;
    }

    Example operator -- (int)
    {
        Example temp(number);
        --(*this);
        return temp;
    }

    friend std::ostream &operator <<
        (std::ostream &out, const Example &e)
    {
        out << e.number;
        return out;
    }
};

int main()
{
    //Digit d(5);

    ////cout << ++d << endl;
    //cout << d++ << endl;
    //cout << d << endl;

    Example e1(9);
    Example e2(0);

    cout << e1 << endl;
    cout << e2 << endl;

    //cout << ++e1 << endl;
    //cout << --e2 << endl;

    cout << e1++ << " > " << e1 << endl;
    cout << e2-- << " > " << e2 << endl;

    return 0;
}
