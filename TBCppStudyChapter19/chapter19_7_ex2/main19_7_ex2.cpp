﻿#include <iostream>
#include <vector>
#include <utility> // std::forward

using namespace std;

class CustomVector
{
public:
    unsigned n_data = 0;
    int *ptr = nullptr;

    CustomVector(const unsigned &_n_data, const int &_init = 0)
    {
        cout << "Constructor" << endl;
        init(_n_data, _init);
    }

    CustomVector(CustomVector & l_input)
    {
        cout << "Copy Constructor" << endl;

        init(l_input.n_data);

        for (unsigned i = 0; i < n_data; ++i)
            ptr[i] = l_input.ptr[i];
    }

    CustomVector(CustomVector && r_input)
    {
        cout << "Move Constructor" << endl;

        n_data = r_input.n_data;
        ptr = r_input.ptr;

        r_input.n_data = 0;
        r_input.ptr = nullptr;
    }

    ~CustomVector()
    {
        delete[] ptr;
    }

    void init(const unsigned &_n_data, const int &_init = 0)
    {
        n_data = _n_data;
        ptr = new int[n_data];
        for (unsigned i = 0; i < n_data; ++i)
            ptr[i] = _init;
    }
};

void doSomething(CustomVector &vec)
{
    cout << "Pass by L-reference" << endl;
    CustomVector new_vec(vec);
}

void doSomething(CustomVector &&vec)
{
    cout << "Pass by R-reference" << endl;
    CustomVector new_vec(std::move(vec)); // Note : vec itself is L-value
}

template<typename T>
void doSomethingTemplate(T &&vec)
{
    doSomething(std::forward<T>(vec));
    //doSomething(vec); // L-value
}

int main()
{
    CustomVector my_vec(10, 1024);

    //CustomVector temp(my_vec);                // copy consturctor
    //CustomVector temp(std::move(my_vec));     // move constructor

    doSomething(my_vec);                // copy consturctor
    doSomething(CustomVector(10, 8));   // move constructor

    return 0;
}