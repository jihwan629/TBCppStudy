#include <iostream>
#include <vector>
#include <utility> // std::forward

using namespace std;

struct MyStruct
{};

void func(MyStruct &s)
{
    cout << "Pass by L-ref" << endl;
}

void func(MyStruct &&s)
{
    cout << "Pass by R-ref" << endl;
}

// template은 L-value, R-value구분 못함
// forward 사용해야함
template <typename T>
void func_wrapper(T &&t)
{
    func(std::forward<T>(t));

}
 
//void func(MyStruct s)
//{
//    cout << "Pass by vlaue" << endl;
//}

//template<typename T>
//void func(T &&t)
//{
//    func(std::forward<T>(t));
//}

int main()
{
    MyStruct s;

    //func(s);            // L-value
    //func(MyStruct());   // R-value

    func_wrapper(s);
    func_wrapper(MyStruct());

    return 0;
}
