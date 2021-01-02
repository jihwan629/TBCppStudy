#include <iostream>
#include <exception>
#include <string>

using namespace std;

class CustomException : public std::exception
{
public:
    // noexcept : 예외를 던지지 않음
    const char *what() const noexcept override
    {
        return "Custom exception";
    }
};

int main()
{
    try
    {
        //std::string s;
        //s.resize(-1);

        //throw std::runtime_error("Bad thing happended");
        throw CustomException();
    }
    catch (std::length_error &exception)
    {
        cout << "Length_Error" << endl;
        std::cerr << exception.what() << std::endl; // string too long
    }
    catch (std::exception &exception)
    {
        cout << typeid(exception).name() << endl;
        std::cerr << exception.what() << std::endl; // string too long
    }
    return 0;
}
