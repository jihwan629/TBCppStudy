#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    stringstream os;

    //{
    //    os << "Hello, World!"; // << : insertion operator, >> : extraction operator
    //    os << "Hello, World!2" << endl;
    //    //os.str("Hello, World!\n"); // 통채로 바꾸기

    //    string str;

    //    //os >> str;
    //    str = os.str();

    //    //cout << str << endl;
    //    cout << os.str() << endl;
    //}
    
    //{
    //    int i = 12345;
    //    double d = 67.89;

    //    os << "12345 67.89";

    //    //os << i << " " << d; // 빈칸으로 구분한다

    //    //string str1;
    //    //string str2;

    //    //os >> str1 >> str2;

    //    //cout << str1 << "|" << str2 << endl;

    //    int i2;
    //    double d2;

    //    os >> i2 >> d2;

    //    cout << i2 << "|" << d2 << endl;
    //}

    {
        os << "12345 67.89";

        os.str("");
        os.str(string());

        os << "Hello";

        os.clear();

        cout << os.str() << endl;
    }
    return 0;
}