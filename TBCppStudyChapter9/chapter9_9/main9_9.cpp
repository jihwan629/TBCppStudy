#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    Fraction(int num = 0, int den = 1)
        : m_numerator(num), m_denominator(den)
    {
        // 분모는 0이 아니다
        assert(den != 0);
    }

    // 복사 생성자

    //Fraction(const Fraction &fraction) 
    //    : m_numerator(fraction.m_numerator)
    //    , m_denominator(fraction.m_denominator)
    //{
    //    cout << "Copy constructor called" << endl;
    //}

    friend std::ostream &operator <<
        (std::ostream &out, const Fraction &f)
    {
        out << f.m_numerator << " / " 
            << f.m_denominator << endl;

        return out;
    }

    void printAddress()
    {
        cout << &m_numerator << " " << &m_denominator << endl;
    }
};

Fraction doSomething()
{
    Fraction temp(1, 2);

    cout << &temp << endl;
    return temp;
}

int main()
{
    Fraction frac(3, 5);

    //Fraction fr_copy(frac);
    //Fraction fr_copy = frac;

    Fraction fr_copy(Fraction(3,10)); // 복사 생성자 호출 안됨

    cout << frac << " " << fr_copy << endl;

    // debug 일 때만 복상 생성자 호출(release일 때 x)
    Fraction result = doSomething();

    cout << &result << endl;
    cout << result << endl;

    Fraction copy = frac;

    frac.printAddress();
    copy.printAddress();

    return 0;
}
