﻿#include <iostream>
#include <cassert>
#include <initializer_list>

using namespace std;

class IntArray
{
private:
    unsigned m_length = 0;
    int *m_data = nullptr;

public:
    IntArray(unsigned length)
        :m_length(length)
    {
        m_data = new int[length];
    }

    IntArray(const std::initializer_list<int> &list)
        :IntArray(list.size())
    {
        cout << "Initializer_list Overload" << endl;

        int count = 0;

        for (auto &element : list)
        {
            m_data[count] = element;
            ++count;
        }


        //for (unsigned count = 0; count < list.size(); count++)
        //{
        //    // initializer_list는 []를 지원하지 않는다
        //    m_data[count] = list[count]; // error
        //}
    }

    IntArray &operator = (const std::initializer_list<int> &list)
    {
        cout << "Assignment operator" << endl;

        delete[] m_data;
        m_length = list.size();
        m_data = new int[m_length];

        int count = 0;

        for (auto &element : list)
        {
            m_data[count] = element;
            ++count;
        }

        return *this;
    }

    ~IntArray()
    {
        delete[] this->m_data;
    }

    friend ostream &operator << (ostream &out, IntArray &arr)
    {
        for (unsigned i = 0; i < arr.m_length; i++)
            out << arr.m_data[i] << " ";
        out << endl;

        return out;
    }
};

int main()
{
    int my_arr[5] = { 1,2,3,4,5 };
    int *my_arr2 = new int[5]{ 1,2,3,4,5 };

    // initializer_list
    auto il = { 10,20,30 };

    IntArray int_array { 1,2,3,4,5 };
    cout << int_array << endl;

    int_array = { 6,7,8,9,10,11,12 };
    cout << int_array << endl;

    return 0;
}
