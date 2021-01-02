#include <iostream>

void my_function()
{
    
}

int main()
{
    using namespace std;

    // void my_void;
    int i = 123;
    float f = 123.456f;

    void* my_void;

    my_void = (void*)&i;
    cout << my_void << endl;

    my_void = (void*)&f;
    cout << my_void << endl;
    cout << sizeof(my_void) << endl;

    return 0;
}

