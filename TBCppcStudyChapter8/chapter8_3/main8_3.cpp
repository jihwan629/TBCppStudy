#include <iostream>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	// 생성자
	// 생성자를 하나라도 만들면 기본 생성자는 만들어지지 않는다
	Fraction() 
	{
		m_numerator = 1;
		m_denominator = 1;
	}

	Fraction(const int& num_in, const int& deno_in = 1)
	{
		m_numerator = num_in;
		m_denominator = deno_in;

		//cout << "Fraction() constructor" << endl;
	}

	void print()
	{
		cout << m_numerator << "/" << m_denominator << endl;
	}
};


class Second
{
public:
	Second()
	{
		cout << "class Second constructor()" << endl;
	}
};

class First
{
	// 멤버 변수의 생성자가 먼저 호출
	Second sec;

public:
	First()
	{
		cout << "class First constructor()" << endl;
	}
};

int main()
{
	//Fraction frac;
	//Fraction frac(1);

	//Fraction one_thirds = Fraction{ 1,3 };

	//Fraction one_thirds{ 1.0,3 }; // 타입 변환을 허용 안함
	//Fraction one_thirds( 1.0,3 );

	First fir;

    return 0;
}