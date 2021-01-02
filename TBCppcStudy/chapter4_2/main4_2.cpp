#include <iostream>
#include "My_constant.h"

using namespace std;
//int value = 123;

int g_a = 1;
//static int g_a = 1; // 다른 cpp에서 접근 불가능


//void doSomething()
//{
//    //int a = 1;
//    //static int a = 1;
//
//    ++g_a;
//
//    cout << g_a << endl;
//}

// forward declaration
extern void doSomething(); // extern 생략 가능
extern int a;

int main()
{
    //cout << value << endl;

    //int value = 1;

    //cout << ::value << endl;
    //cout << value << endl;
    
    //doSomething();
    //doSomething();
    //doSomething();
    doSomething();

    //cout << a << endl;

    cout << "In main.cpp  " << Constants::pi << " " << &Constants::pi << endl;

    return 0;
}

