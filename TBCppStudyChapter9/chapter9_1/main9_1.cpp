#include <iostream>

using namespace std;

class Cents
{
private:
    int m_cents;
public:
    Cents(int cents = 0) { m_cents = cents; }
    int getCents() const { return m_cents; }
    int& getCents() { return m_cents; }

    //friend Cents operator + (const Cents &c1, const Cents &c2)
    // =, [], (), -> 멤버 변수로만 오버로딩 가능
    Cents operator + (const Cents &c2)
    {
        return Cents(this->m_cents + c2.getCents());
    }
};

//void add(const Cents &c1, const Cents &c2, Cents &c_out)
//{
//    c_out.getCents() = c1.getCents() + c2.getCents();
//}

//Cents add(const Cents &c1, const Cents &c2)
//{
//    return Cents(c1.getCents() + c2.getCents());
//}

//Cents operator + (const Cents &c1, const Cents &c2)
//{
//    return Cents(c1.getCents() + c2.getCents());
//}

int main()
{
    Cents cents1(6);
    Cents cents2(8);

    //Cents sum;
    //add(cents1, cents2, sum);

    //cout << sum.getCents() << endl;
    //cout << add(cents1, cents2).getCents() << endl;
    cout << (cents1 + cents2 
        + Cents(6) + Cents(10) + Cents(100)).getCents()
        << endl;

    // 연산자 오버로딩 안되는 것들 ?: :: sizeof . .*
    // ^ 우선 순위가 낮아서 사용하려면 괄호를 사용

    return 0;
}