#include <iostream>

bool isEqual(int a, int b)
{
    bool result = (a == b);
    return result;
}

bool isOdd(int num)
{
    return num % 2;
}

int main()
{
    using namespace std;

    bool b1 = true; // copy initialization
    bool b2(false); // direct '''
    bool b3{ true }; // uniform '''
    b3 = false;
    
    cout << std::boolalpha;
    //cout << std::noboolalpha;

    /*cout << b3 << endl;
    cout << b1 << endl;*/
    
    /*cout << !true << endl;
    cout << !false<< endl;*/

    //// AND OPERATOR
    //cout << (true && true) << endl;
    //cout << (true && false) << endl;
    //cout << (false && true) << endl;
    //cout << (false && false) << endl;

    //// OR OPERATOR
    //cout << (true || true) << endl;
    //cout << (true || false) << endl;
    //cout << (false || true) << endl;
    //cout << (false || false) << endl;

    /*if (3 > 1)
    {
        cout << "This is true" << endl;
        cout << "This is second line" << endl;
    }
    else 
        cout << "This is false" << endl;*/

    /*cout << isEqual(1, 1) << endl;
    cout << isEqual(0, 3) << endl;*/

    //// 0이면 false, 나머지는 모두 true
    //if (5)
    //{
    //    cout << "True" << endl;
    //}
    //else
    //{
    //    cout << "False" << endl;
    //}

    /*bool b;

    cin >> b;
    cout << std::boolalpha;
    cout << "Your Input is " << b << endl;*/

    cout << isOdd(17) << endl;
    cout << isOdd(8) << endl;
    cout << isOdd(5) << endl;
    cout << isOdd(1) << endl;
    cout << isOdd(0) << endl;
    cout << isOdd(2) << endl;

    return 0;
}
