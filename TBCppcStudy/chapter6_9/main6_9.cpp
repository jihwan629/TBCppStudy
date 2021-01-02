#include <iostream>

using namespace std;

int main()
{
    //short value = 7.0;
    //short *ptr = &value;

    //cout << uintptr_t(ptr - 1) << endl;
    //cout << uintptr_t(ptr) << endl;
    //cout << uintptr_t(ptr + 1) << endl;
    //cout << uintptr_t(ptr + 2) << endl;
    //cout << uintptr_t(ptr + 3) << endl;

    //int array[]{ 9,7,5,3,2 };

    //cout << array[0] << " " << (uintptr_t) & array[0] << endl;
    //cout << array[1] << " " << (uintptr_t) & array[1] << endl;
    //cout << array[2] << " " << (uintptr_t) & array[2] << endl;
    //cout << array[3] << " " << (uintptr_t) & array[3] << endl;

    //int *ptr = array;

    //for (int i = 0; i < 5; i++)
    //{
    //    //cout << array[i] << " " << (uintptr_t) & array[i] << endl;
    //    cout << *(ptr + i) << " " << (uintptr_t)(ptr + i) << endl;
    //}

    char name[] = "jack jack";
    char *ptr = name;

    const int n_name = sizeof(name) / sizeof(name[0]);

    for (int i = 0; i < n_name; i++)
    {
        cout << *(ptr + i);
    }
    cout << endl;

    return 0;
}