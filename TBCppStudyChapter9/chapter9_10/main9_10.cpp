#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    // 특정 생성자 사용 금지
    Fraction(char) = delete;

    // 변환 생성자 사용 금지
    explicit Fraction(int num = 0, int den = 1)
        : m_numerator(num), m_denominator(den)
    {
        // 분모는 0이 아니다
        assert(den != 0);
    }

    // 복사 생성자

    Fraction(const Fraction &fraction)
        : m_numerator(fraction.m_numerator)
        , m_denominator(fraction.m_denominator)
    {
        cout << "Copy constructor called" << endl;
    }

    friend std::ostream &operator <<
        (std::ostream &out, const Fraction &f)
    {
        out << f.m_numerator << " / "
            << f.m_denominator << endl;

        return out;
    }
};

void doSomething(Fraction frac)
{
    cout << frac << endl;
}

int main()
{
    Fraction frac(7);

    doSomething(frac);
    doSomething(Fraction(7));
    // 변환 생성자
    //doSomething(7); // explicit 있을 때 사용 불가

    //Fraction frac2('c'); // delete 있을 때 사용 불가

    return 0;
}
