#pragma once

#include <vector>
#include "Student.h"
#include "Teacher.h"

class Lecture
{
private:
	std::string m_name;

	//Teacher teacher;
	//std::vector<Student> students;

	Teacher *teacher;
	std::vector<Student *> students;

public:
	Lecture(const std::string &name_in)
		: m_name(name_in)
	{}

	~Lecture()
	{
		// do Not delete teacher
		// do Not delete teacher
	}

	//void assignTeacher(const Teacher &const teacher_input)
	void assignTeacher(Teacher *const teacher_input)
	{
		teacher = teacher_input;
	}

	//void registerStudnet(const Student &const student_input)
	void registerStudent(Student *const student_input)
	{
		// &student_input, &students[0] 다르다
		// 주소를 복사해서 넣기 때문에
		students.push_back(student_input);

	}

	void study()
	{
		std::cout << m_name << " Study" << std::endl << std::endl;

		// 'auto element' doesn't work
		/*for (auto &element : students)
			element.setIntel(element.getIntel() + 1);*/

			// 'auto element' work
		for (auto &element : students)
			//(*element).setIntel((*element).getIntel() + 1);
			element->setIntel(element->getIntel() + 1);

	}

	friend std::ostream &operator << (std::ostream &out,
		const Lecture &lecture)
	{
		out << "Lecture name : " << lecture.m_name 
			<< std::endl;

		//out << lecture.teacher << std::endl;

		//for (auto element : lecture.students)
		//	out << element << std::endl;

		out << *lecture.teacher << std::endl;

		for (auto element : lecture.students)
			out << *element << std::endl;

		return out;
	}
};