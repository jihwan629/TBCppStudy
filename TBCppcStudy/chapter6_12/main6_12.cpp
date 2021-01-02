#include <iostream>

using namespace std;

int main()
{
    const int length = 5; // const가 없으면 오류
    int array[length];

    int length;

    cin >> length;

    //int *array = new int[length] ();
    int *array = new int[length] {11, 22, 33, 44, 55, 66};

    array[0] = 1;
    array[1] = 2;

    for (int i = 0; i < length; i++)
    {
        cout << (uintptr_t)&array[i] << endl;
        cout << array[i] << endl;
    }

    delete [] array;

    //int fixedArray[] = { 1,2,3,4,5 };
    //int *array = new int[5]{ 1,2,3,4,5 }; // 5를 반드시 넣어야 한다
    //
    //// resizing


    //delete[] array;


    return 0;
}
