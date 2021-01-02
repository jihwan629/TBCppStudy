#pragma once

#include <string>
#include "Position2D.h"

class Monster
{
private:
	std::string m_name;

	Position2D m_location;
	//int m_x; // location
	//int m_y;

public:
	Monster(const std::string name_in
		, const Position2D location_in)
		: m_name(name_in), m_location(location_in)
	{}

	//void moveTo(const int &x_target, const int &y_target)
	//{
	//	m_x = x_target;
	//	m_y = y_target;
	//}

	void moveTo(const Position2D & pos_target)
	{
		m_location.set(pos_target);
	}

	friend std::ostream &operator <<
		(std::ostream &out, const Monster &monster)
	{
		out << monster.m_name << " "
			/*<< monster.m_x << " " << monster.m_y;*/
			<< monster.m_location;

		return out;
	}
};