#pragma once

#include <iostream>

class Position2D
{
private:
	int m_x;
	int m_y;
public:
	Position2D(const int& x_in, const int& y_in)
		: m_x(x_in),m_y(y_in)
	{}

	void set(const int &x_target, const int &y_target)
	{
		m_x = x_target;
		m_y = y_target;
	}

	void set(const Position2D & _target)
	{
		set(_target.m_x, _target.m_y);
	}

	friend std::ostream &operator <<
		(std::ostream &out, const Position2D &position)
	{
		out << position.m_x << " " << position.m_y;

		return out;
	}
};