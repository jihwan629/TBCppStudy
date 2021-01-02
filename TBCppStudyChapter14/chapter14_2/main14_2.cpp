#include <iostream>

using namespace std;

//void last() throw(int) exception specifier
//void last() throw(...) exception specifier

void first();
void second();
void third();
void last();

void first()
//void first() throw () // 예외를 안 던져 준다
{
    cout << "first" << endl;

    try
    {
        second();
    }
    catch (int)
    {
        cerr << "first caught int exception" << endl;
    }

    cout << "End first " << endl;
}

void second()
{
    cout << "second" << endl;

    try
    {
        third();
    }
    catch (double)
    {
        cerr << "second caught int exception" << endl;
    }

    cout << "End second " << endl;
}

void third()
{
    cout << "third" << endl;

    last();

    cout << "End third " << endl;
}

void last()
{
    cout << "last" << endl;
    cout << "Throws exception" << endl;

    throw - 1;
    //throw 'a'; Runtime error

    cout << "End last " << endl;
}

int main()
{
    cout << "Start" << endl;

    try
    {
        first();
    }
    catch (int)
    {
        cerr << "main caught int exception" << endl;
    }

    // uncaught exception
    catch (...) // catch-all handler
    {
        cerr << "main caught ellipses exception" << endl;
    }

    cout << "End main" << endl;

    return 0;
}
