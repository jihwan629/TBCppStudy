#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

class Cents
{
private:
    int m_cents;
public:
    Cents(int cents = 0) { m_cents = cents; }
    int getCents() const { return m_cents; }
    int &getCents() { return m_cents; }

    // 비교 연산자 오버로딩

    friend bool operator == (const Cents &c1, const Cents &c2)
    {
        return c1.m_cents == c2.m_cents;
    }

    friend bool operator != (const Cents &c1, const Cents &c2)
    {
        return c1.m_cents != c2.m_cents;
    }

    friend bool operator > (const Cents &c1, const Cents &c2)
    {
        return c1.m_cents > c2.m_cents;
    }

    friend bool operator < (const Cents &c1, const Cents &c2)
    {
        return c1.m_cents < c2.m_cents;
        //return c1.m_cents > c2.m_cents; // std::sort가 반대로 작동
    }

    friend std::ostream &operator <<
        (std::ostream &out, const Cents &cents)
    {
        out << cents.m_cents;
        return out;
    }
};

int main()
{
    Cents cents1(6);
    Cents cents2(6);

    //cout << boolalpha;

    //if (cents1 == cents2)
    //    cout << "Equal" << endl;

    vector<Cents> arr(20);
    for (unsigned i = 0; i < 20; i++)
    {
        arr[i].getCents() = i;
    }

    //// C++ 17
    //std::random_device rd;
    //std::mt19937 g(rd());
    //std::shuffle(arr.begin(), arr.end(), g);

    std::random_shuffle(begin(arr), end(arr));

    for (auto &element : arr)
        cout << element << " ";
    cout << endl;

    // 클래스 안에서 비교 연산자가 오버로딩 되어야 사용 가능
    std::sort(begin(arr), end(arr));

    for (auto &element : arr)
        cout << element << " ";
    cout << endl;

    return 0;
}
