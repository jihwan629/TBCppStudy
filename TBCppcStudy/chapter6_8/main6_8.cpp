#include <iostream>

using namespace std;

struct MyStruct
{
    int array[5]{ 9,7,5,3,1 };
};

//void printArray(int array[])
void printArray(int *array)
{
    // array는 배열이 아닌 포인터로 취급
    cout << sizeof(array) << endl; // 포인터 변수 크기 4
    cout << *array << endl; // array[0]

    *array = 100;
}

void doSomething(MyStruct *ms)
{
    // 구조체 또는 클래스 안의 배열은 포인터로 안 바뀐다
    cout << sizeof((*ms).array) << endl; // 20
}

int main()
{
    int array[5]{ 9,7,5,3,1 };

    // array 는 포인터 > 첫 번째의 주소값
    //cout << array << endl;
    //cout << &(array[0]) << endl;

    //cout << *array << endl;

    //cout << sizeof(array) << endl; // 20
    
    int *ptr = array;

    //cout << ptr << endl;
    //cout << *ptr << endl;
    //cout << &ptr << endl;

    //cout << sizeof(ptr) << endl; // 포인터 변수 크기 4

    //char name[] = "jackjack";
    //cout << *name << endl; // j

    //printArray(array);
    //cout << *array << endl; // array[0] = 100

    // 포인터 연산
    //cout << *ptr << " " << *(ptr + 1) << endl;

    MyStruct ms;
    cout << ms.array[0] << endl;
    cout << sizeof(ms.array) << endl; // 20

    doSomething(&ms);

    return 0;
}
