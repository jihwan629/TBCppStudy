#include <iostream>
#include <limits>

int main()
{
    using namespace std;

    char c1(65);
    char c2('A');
    char c3(65);

    //cout << c1 << " " << int(c1) << endl;
    //cout << c2 << " " << int(c2) << endl;

    //// c-style casting
    //cout << (char)65 << endl;
    //cout << (int)'A' << endl;

    //// cpp style
    //cout << char(65) << endl;
    //cout << int('A') << endl;

    //cout << static_cast<char>(65) << endl;
    //cout << static_cast<int>('A') << endl;

    //char ch(97);
    //cout << ch << endl;
    //// ASCI 코드 값
    //cout << static_cast<int>(ch) << endl;

    //cin >> c1;
    //cout << c1 << " " << static_cast<int>(c1) << endl;

    //cin >> c1;
    //cout << c1 << " " << static_cast<int>(c1) << endl;
    //cin >> c1;
    //cout << c1 << " " << static_cast<int>(c1) << endl;
    //cin >> c1;
    //cout << c1 << " " << static_cast<int>(c1) << endl;

    //cout << sizeof(unsigned char) << endl;
    //cout << (int)std::numeric_limits<unsigned char>::max() << endl;
    //cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;

    //cout << int('\n') << endl; // 10
    //cout << "This is first line \nsecond line" << endl;
    //cout << int('\t') << endl; // 10
    //cout << "This is first line \tsecond line " << endl;

    cout << "\"" << endl;

    cout << "This is first line \asecond line " << endl;

    wchar_t c2;
    char32_t c3;

    return 0;
}
