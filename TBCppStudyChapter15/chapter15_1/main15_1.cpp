#include "Resource.h"
#include "AutoPtr.h"

using namespace std;

// RAII : resource acquisition is initialization
void doSomething()
{
    try
    {
        //Resource *res = new Resource; // dull pointer

        // work with res

        //delete res;
        

        AutoPtr<Resource> res(new Resource); // smart pointer
    
        if (true) return; // early return
    }
    catch (...)
    {
    }

    return;
}

int main()
{
    //doSomething();

    {
        AutoPtr<Resource> res1(new Resource);
        AutoPtr<Resource> res2;

        cout << std::boolalpha;

        cout << res1.m_ptr << endl;
        cout << res2.m_ptr << endl;

        res2 = res1; // move semantics

        cout << res1.m_ptr << endl;
        cout << res2.m_ptr << endl;
    }

    // syntax vs. semantics
    int x = 1, y = 1;
    x + y;

    string str1("Hello"), str2("World");
    str1 + str2; // append

    // value semantics (copy semantics)
    // reference semantics (pointer semantics)
    // move semantics (move semantics)

    return 0;
}
