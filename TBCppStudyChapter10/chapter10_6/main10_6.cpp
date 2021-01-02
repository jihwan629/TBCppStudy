#include <iostream>
#include <vector>
#include <array>
#include <initializer_list>

using namespace std;

class IntArray
{
private:
    int m_length = 0;
    int *m_data = nullptr;

public:
    // Constructors
    IntArray(unsigned inp_length)
        : m_length(inp_length)
    {
        m_data = new int[inp_length];
    }

    // Destructors
    ~IntArray()
    {
        delete[] this->m_data;
    }

    // initialize()
    IntArray(const std::initializer_list<int> &list)
        :IntArray(list.size())
    {
        int count = 0;
        for (auto &ele : list)
            this->m_data[count++] = ele;
    }

    IntArray(const IntArray &arr)
    {
        if (this == &arr) return;

        this->m_length = arr.m_length;
        this->m_data = new int[m_length];

        if (arr.m_data == nullptr) this->m_data = nullptr;
        else
        {
            for (int i = 0; i < m_length; i++)
                this->m_data[i] = arr.m_data[i];
        }
    }

    IntArray &operator = (const std::initializer_list<int> &list)
    {
        this->reset();
        *this = IntArray(list.size());

        int count = 0;
        for (auto &ele : list)
            this->m_data[count++] = ele;

        return *this;
    }

    IntArray &operator = (const IntArray &arr)
    {
        if (this == &arr) return *this;

        this->m_length = arr.m_length;
        this->m_data = new int[m_length];

        if (arr.m_data == nullptr) this->m_data = nullptr;
        else
        {
            for (int i = 0; i < m_length; i++)
                this->m_data[i] = arr.m_data[i];
        }

        return *this;
    }

    // reset()
    void reset()
    {
        if(m_data != nullptr) delete[] this->m_data;

        m_length = 0;
        m_data = nullptr;
    }

    // resize()
    void resize(const int &size)
    {
        if (size < 0) return;

        IntArray temp(*this);

        this->reset();
        *this = IntArray(size);

        for (int i = 0; i < temp.m_length; i++)
        {
            if (i > this->m_length - 1) break;
            this->m_data[i] = temp.m_data[i];
        }
    }

    // insetBefore(const int &value, const int &idx)
    void insetBefore(const int &value, const int &idx)
    {
        if (idx < 0 || idx > this->m_length - 1) return;

        IntArray temp(*this);
        int size = m_length + 1;

        this->reset();
        *this = IntArray(size);

        int count = 0;
        for (int i = 0; i < size; i++)
        {
            if (i == idx) this->m_data[i] = value;
            else this->m_data[i] = temp.m_data[count++];
        }
    }

    // remove(const int &idx)
    void remove(const int &idx)
    {
        if (idx < 0 || idx > this->m_length - 1) return;

        IntArray temp(*this);
        int size = this->m_length - 1;

        this->reset();
        *this = IntArray(size);

        int count = 0;
        for (int i = 0; i < temp.m_length; i++)
        {
            if (i == idx) continue;
            this->m_data[count++] = temp.m_data[i];
        }
    }

    // push_back(const int &value)
    void push_back(const int &value)
    {
        this->resize(m_length + 1);

        m_data[m_length - 1] = value;
    }

    // print
    friend ostream &operator << (ostream &out, IntArray &arr)
    {
        out << "[" << arr.m_length << "] ";

        for (int i = 0; i < arr.m_length; i++)
            out << arr.m_data[i] << " ";
        out << endl;

        return out;
    }
};

int main()
{
    IntArray my_arr{ 1,3,5,7,9 };
    cout << my_arr << endl;

    my_arr.insetBefore(10, 1);      // 1, 10, 3, 5, 7, 9
    cout << my_arr << endl;

    my_arr.remove(3);               // 1, 10, 3, 7, 9
    cout << my_arr << endl;

    my_arr.push_back(13);           // 1, 10, 3, 7, 9, 13
    cout << my_arr << endl;

    //std::vector<int> int_vec;
    //std::array<int, 10> int_arr;

    return 0;
}
