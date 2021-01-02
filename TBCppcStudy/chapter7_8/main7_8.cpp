#include <iostream>

using namespace std;

//// 선언에서 default하면 정의에서는 빼야한다
//void print(int x = 10, int y = 20, int z = 30); // in header
//
////void print(int x = 1024) // default parameter
//void print(int x, int y, int z) // 마지막에 있어야 한다
//{
//    cout << x << " " << y << " " << z << endl;
//}

//void print(std::string str){}
//void print(char ch = ' '){}

void print(int x) {} // ambiguous 모호
void print(int x, int y = 20) {} // 오류

int main()
{
    //print();
    //print(100);
    //print(100, 200);
    //print(100, 200, 300);

    //print(10);

    return 0;
}