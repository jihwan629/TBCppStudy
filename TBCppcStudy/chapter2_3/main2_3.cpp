#include <iostream>
//#include <cstdint>

int main()
{
    using namespace std;
     
    std::int16_t i(5); // short
    std::int8_t myint = 65; // char

    cout << myint << endl;

    std::int_fast8_t fi(5); // char
    std::int_least64_t fl(5); // long long
     
    return 0;
}

