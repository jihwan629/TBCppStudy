#include <iostream>
#include <vector>

using namespace std;

// 리터럴을 매개 변수로 받으려면 const
//void foo(const int &x)
//{
//    cout << x << endl;
//}

//typedef int *pint;
//void foo(pint &ptr)
void foo(int *&ptr) // (int *)&ptr
{
    cout << ptr << " " << &ptr << endl;
}

void addOne(int &y)
{
    cout << y << " " << &y << endl;

    y = y + 1;
}

// return 값이 2개 이상일 때 사용법
void getSinCos(const double degree, double &sin_out, double &cos_out)
{
    // static : 1번만 실행
    //static const double pi = 3.141592;
    static const double pi = 3.141592 / 180.0;

    // const : 변하기 싫을 때
    //const double radians = degree * pi / 180.0;
    const double radians = degree * pi;

    sin_out = std::sin(radians);
    cos_out = std::cos(radians);
}

// 개수가 반드시 들어가야한다
//void printElement(int (&arr)[4])
void printElement(vector <int> &arr)

{

}

int main()
{
    //int x = 5;

    //cout << x << " " << &x << endl;
    //
    //addOne(x);

    //cout << x << " " << &x << endl;

    //double sin(0.0);
    //double cos(0.0);

    //cout << sin << " " << cos << endl;

    //getSinCos(30, sin, cos);

    //cout << sin << " " << cos << endl;

    //foo(6);

    //int x = 5;
    //int *ptr = &x;

    //cout << ptr << " " << &ptr << endl;
    //foo(ptr);

    //int arr[]{ 1,2,3,4 };
    vector<int> arr{ 1,2,3,4 };

    printElement(arr);

    return 0;
}
