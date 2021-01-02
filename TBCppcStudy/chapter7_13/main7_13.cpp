#include <iostream>
#include <string>

// 방어적 프로그래밍

using namespace std;

int main()
{
    // syntax error
    

    //// semantic error

    //int x;
    //cin >> x;

    //if (x >= 5)
    //    cout << "x is greater than 5" << endl;


    // violated assumption
    // 사용자가 전혀 다른 방식으로 사용

    string hello = "Hello, my name is jack jack";

    cout << "Input from 0 to " << 
        hello.size() - 1 << endl;

    while (true)
    {
        int ix;
        cin >> ix;

        if (ix >= 0 && ix <= hello.size() - 1)
        {
            cout << hello[ix] << endl;
            break;
        }
        else
            cout << "Please try again" << endl;
    }

    return 0;
}
