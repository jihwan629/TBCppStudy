#include <iostream>

using namespace std;

void doSomething(const int &n)
{
    //n = 10;
    cout << "In doSomething " << n << endl;
    cout << &n << endl; // 주소가 같다
}

void printElements(int (&arr)[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
}

struct Something
{
    int v1;
    float v2;
};

struct Other
{
    Something st;
};

int main()
{
    int value = 5;

    //// 포인터 변수
    //int *ptr = nullptr;
    //ptr = &value;

    //// 참조 변수
    //int &ref = value;

    ////cout << ref << endl;

    //ref = 10; // *ptr = 10;

    ////cout << value << " " << ref << endl;

    //// &value = &ref
    //cout << "value adderess : " << &value << endl;
    //cout << "ref adderess : " << &ref << endl;
    //cout << "ptr : " << ptr << endl;
    //cout << "ptr adderess : " << &ptr << endl;

    //int x = 5;

    //// 참조 변수는 무조건 초기화
    //// 리터럴 사용 불가
    //int &ref = x; 

    //const int y = 8;
    //const int &ref = y;

    //int value1 = 5;
    //int value2 = 10;

    //int &ref1 = value1;

    //cout << ref1 << endl;

    //ref1 = value2;

    //cout << ref1 << endl;

    //int n = 5;

    //cout << n << endl;
    //cout << &n << endl;

    //doSomething(n);

    //cout << n << endl;

    //const int length = 5;
    //int arr[length] = { 1,2,3,4,5 };
    //
    //printElements(arr);

    Other ot;

    int &v1 = ot.st.v1;
    v1 = 1;

    int value = 5;
    int *const ptr = &value;
    int &ref = value;

    *ptr = 10; // = ref = 10
    return 0;
}