#include <iostream>
#include <string>

using namespace std;

// 함수 오버로딩
// parameter가 달라야한다
// return 만 다른 경우 오류
int add(int x, int y)
{
    return x + y;
}

int add(double x, double y)
{
    return x + y;
}

void getRandom(int &x) {}

void getRandom(double &x) {}

typedef int my_int;
//void print(int x) {}
// void print(int x) {}와 같아서 오류 발생
//void print(my_int) {} 

//void print(const char*value){}
//void print(int value) {}

void print(unsigned int value) {}
void print(float value) {}

int main()
{
    //add(1, 2);
    //add(3.0, 4.0);

    //int x;
    //getRandom(x);

    //print(0);
    //print('a'); // void print(int value)
    //print("a"); // const 없으면  오류

    print(unsigned int('a'));
    print(0u);
    print(3.141592f);

    return 0;
}
