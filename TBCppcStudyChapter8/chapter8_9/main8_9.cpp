#include <iostream>
#include <string>

using namespace std;

class Something
{
public:
    int m_value = 0;

    //Copy Constructor
    Something(const Something &st_in)
    {
        m_value = st_in.m_value;
        cout << "Copy Constructor" << endl;
    }

    Something()
    {
        cout << "Constructor" << endl;
    }

    void setValue(int value)
    { 
        m_value = value; 
    }

    int getValue() const
    { 
        return m_value;
    }
};

//void print(Something st) // Copy Constructor 실행
void print(const Something &st) // Copy Constructor 실행 안함
{
    cout << &st << endl;
    cout << st.getValue() << endl;
}


// const 오버로딩
class Somethings
{
public:
    string m_value = "default";

    string &getValue() 
    { 
        cout << "non-const version" << endl;
        return m_value; 
    }

    const string &getValue() const 
    { 
        cout << "const version" << endl;
        return m_value; 
    }
};

int main()
{
    Something something;
    //const Something something;
    something.setValue(3);

    cout << something.getValue() << endl;

    cout << &something << endl;
    print(something);

    //Somethings something;
    //something.getValue() = 10;

    //const Somethings something2;
    //something2.getValue(); // = 10; 안됨

    return 0;
}
