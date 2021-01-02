#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date
{
//public:		// access specifier
//private:		// access specifier(기본)
	int m_month;
	int m_day;
	int m_year;

public:
	void setDate(const int &month_input, const int &day_input,
		const int &year_input)
	{
		m_month = month_input;
		m_day = day_input;
		m_year = year_input;
	}

	void setMonth(const int &month_input) // setter
	{
		m_month = month_input;
	}

	int getMoth() // getter
	{
		return m_month;
	}

	int getDay()
	{
		return m_day;
	}

	int getYear()
	{
		return m_year;
	}

	// 같은 class안 에서 정의 되어 
	// 값에 접근할 수 있다
	void copyFrom(const Date& original)
	{
		m_month = original.m_month;
		m_day = original.m_month;
		m_year = original.m_month;
	}
};

int main()
{
	Date today;
	//today.m_month = 8;
	//today.m_day = 8;
	//today.m_year = 8;

	today.setDate(8, 8, 8);
	today.setMonth(10);

	cout << today.getDay() << endl;

	Date copy;
	copy.copyFrom(today);

	

	return 0;
}