#include <iostream>
#include <cstddef>

using namespace std;

// 매개 변수는 다시 선언된다 
// 주소값이 다르다
void doSomething(double *ptr)
{
    if (ptr != nullptr)
    {
        // do something useful
        cout << *ptr << endl;
    }
    else
    {
        // do nothing with ptr
        cout << "Null ptr, do nothing" << endl;
    }

    cout << "address of pointer variable in doSomething()"
        << &ptr << endl;
}

int main()
{
    double *ptr = nullptr; // modern c++
    //double *ptr{ nullptr };
    //double *ptr{ 0 };

    //doSomething(ptr);
    //doSomething(nullptr);
    
    double d = 123.4;

    doSomething(&d);

    ptr = &d;

    doSomething(ptr);

    cout << "address of pointer variable in main()"
        << &ptr << endl;

    //std::nullptr_t nptr; // nullptr만 넣을 수 있다.

    return 0;
}
