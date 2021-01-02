#include <iostream>
#include <cassert>

using namespace std;

class MyString
{
//private:
public:
    char *m_data = nullptr;
    int m_length = 0;

public:
    MyString(const char *source = "")
    {
        assert(source);

        m_length = std::strlen(source) + 1;
        m_data = new char[m_length];

        for (int i = 0; i < m_length; i++)
        {
            m_data[i] = source[i];
        }

        m_data[m_length - 1] = '\0';
    }

    // 얕은 복사
    // 기본 복사 생성자는 주소만 복사

    //// 임시로 얕은 복사 막는 방법
    //MyString(const MyString &source) = delete;

    MyString(const MyString &source)
    {
        cout << "Copy constructor" << endl;

        m_length = source.m_length;

        // 깊은 복사
        // 새로 할당 받은 메모리에 내용 복사
        if (source.m_data != nullptr)
        {
            m_data = new char[m_length];

            for (int i = 0; i < m_length; i++)
            {
                m_data[i] = source.m_data[i];
            }
        }
        else
            m_data = nullptr;
    }

    MyString &operator = (const MyString &source)
    {
        ////shallow copy
        //this->m_data = source.m_data;
        //this->m_length = source.m_length;

        // deep copy
        cout << "Assignment operator" << endl;

        // 자기 할당 금지
        if (this == &source) // prevent self-assignment
            return *this;

        delete[] m_data;

        m_length = source.m_length;

        if (source.m_data != nullptr)
        {
            m_data = new char[m_length];

            for (int i = 0; i < m_length; i++)
                m_data[i] = source.m_data[i];
        }
        else
            m_data = nullptr;
    }

    ~MyString()
    {
        delete[] m_data;
    }

    char * getString() { return m_data; }
    int getLength() { return m_length; }
};

int main()
{
    MyString hello("Hello");

    cout << (int *)hello.m_data << endl;
    cout << hello.getString() << endl;

    {
        // defualt copy constructor 호출 > 주소만 복사
        MyString copy = hello;
        cout << (int *)copy.m_data << endl;
        cout << copy.m_data << endl;
        cout << copy.getString() << endl;
    }

    // delete 때문에 오류
    cout << hello.getString() << endl;


    MyString str1 = hello; // copy constructor
    MyString str2;
    str2 = hello; // assignment cosntructor

    return 0;
}
