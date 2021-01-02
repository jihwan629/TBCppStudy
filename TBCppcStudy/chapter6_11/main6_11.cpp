#include <iostream>

using namespace std;

int main()
{
    //int *ptr = new int(7);
    //int *ptr = new (std::nothrow) int(7);

    ////*ptr = 7;

    //if (ptr)
    //{
    //    cout << uintptr_t(ptr) << endl;
    //    cout << *ptr << endl;
    //}
    //else
    //{
    //    cout << "Could not allocate memory" << endl;
    //}

    //delete ptr; 
    //ptr = nullptr;

    //cout << "After delete" << endl;
    //if (ptr != nullptr)
    //{
    //    cout << uintptr_t(ptr) << endl;
    //    cout << *ptr << endl;
    //}

    // memory leak 메모리 누수
    while (true)
    {
        int *ptr = new int;
        cout << ptr << endl;

        delete ptr;
    }

    return 0;
}
