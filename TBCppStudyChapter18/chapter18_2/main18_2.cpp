#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // 부호 붙이기
    //{
    //    cout.setf(std::ios::showpos); // + 기호
    //    cout << 108 << endl;

    //    cout.unsetf(std::ios::showpos);
    //    cout << 109 << endl;
    //}

    // 16진수, 10진수 변환
    //{
    //    //cout.unsetf(std::ios::dec); // 10진수 끄기
    //    //cout.setf(std::ios::hex
    //    //    , std::ios::basefield); // 16진수
    //    //cout.setf(std::ios::uppercase); // 대문자
    //    
    //    cout << std::hex << std::uppercase;
    //    cout << 108 << endl;

    //    cout << std::dec;
    //    cout << 109 << endl;
    //}

    // bool 문자형으로 보이기
    //{
    //    cout << std::boolalpha;
    //    cout << true << " " << false << endl;
    //}

    //// 소수점
    //{
    //    //cout << std::defaultfloat; // 소수점 앞자리 고정
    //    //cout << std::fixed; // 소수점 뒷자리 고정
    //    //cout << std::scientific << std::uppercase; // 과학적 표기법

    //    cout << std::showpoint; // 소수점 보기

    //    cout << std::setprecision(3) << 123.456 << endl;
    //    cout << std::setprecision(4) << 123.456 << endl;
    //    cout << std::setprecision(5) << 123.456 << endl;
    //    cout << std::setprecision(6) << 123.456 << endl;
    //    cout << std::setprecision(7) << 123.456 << endl;
    //}

    // 마이너스 표기
    {
        cout << -12345 << endl;

        cout.fill('*'); // 빈칸 별로 채우기

        cout << std::setw(10) << -12345 << endl;
        cout << std::setw(10) << std::left << -12345 << endl;
        cout << std::setw(10) << std::right << -12345 << endl;
        cout << std::setw(10) << std::internal << -12345 << endl;
    }
    return 0;
}