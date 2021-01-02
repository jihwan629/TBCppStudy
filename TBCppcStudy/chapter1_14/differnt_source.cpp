#include <iostream>

void doSomething()
{
    using namespace std;
#ifdef LIKE_APPLE
    cout << "Apple" << endl;
    //#endif
    //
    //#ifndef LIKE_APPLE
#else
    cout << "Orrange" << endl;
#endif
}