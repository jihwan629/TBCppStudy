#include <iostream>
#include <bitset>

int main()
{
    using namespace std;

    // << left shift
    // >> right shift
    // ~ , & , | , ^

    //unsigned int a = 3;
    //
    //cout << std::bitset<4>(a) << endl;

    //cout << std::bitset<8>(a << 1) << " " << (a << 1) << endl;
    //cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl;
    //cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl;
    //cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl;

    //unsigned int a = 1024;

    //cout << std::bitset<16>(a) << endl;
    //
    //cout << std::bitset<16>(~a) << " " << (~a) <<endl; // ! = logical not

    //cout << std::bitset<16>(a >>  1) << " " << (a >> 1) << endl;
    //cout << std::bitset<16>(a >>  2) << " " << (a >> 2) << endl;
    //cout << std::bitset<16>(a >>  3) << " " << (a >> 3) << endl;
    //cout << std::bitset<16>(a >>  4) << " " << (a >> 4) << endl;


    //unsigned int b = a << 3;
    //cout << std::bitset<4>(b) << " " << b << endl;

    unsigned int a = 0b1100;
    unsigned int b = 0b0110;

    //cout << a << " " << b << endl;

    //cout << std::bitset<4>(a) << endl;
    //cout << std::bitset<4>(b) << endl;
    //cout << "----" << endl;
    //cout << std::bitset<4>(a & b) << endl; // bitwise AND
    //cout << std::bitset<4>(a | b) << endl; // bitwise OR
    //cout << std::bitset<4>(a ^ b) << endl; // bitwise XOR

    //a &= b; // a = a & b

    cout << (0b0110 >> 2) << endl;
    cout << (6 >> 2) << "\n" << endl;
    
    cout << std::bitset<4>(5) << endl;
    cout << std::bitset<4>(12) << endl;
    cout << "----" << endl;
    cout << std::bitset<4>(5 | 12) << endl;
    cout << std::bitset<4>(5 & 12) << endl;
    cout << std::bitset<4>(5 ^ 12) << endl;

    return 0;
}
