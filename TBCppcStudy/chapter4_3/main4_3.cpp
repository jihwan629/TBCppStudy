#include <iostream>

namespace a
{
    int my_var(10);
    int my_a(10);
    int count(0);
}

namespace b
{
    int my_var(20);
    int my_b(20);
}

int main()
{
    using namespace std;

    //using std::cout; // namespace를 넣지 않는다
    //using std::endl;

    cout << "Hello" << endl;

    //using namespace a;
    //using namespace b;

    //cout << my_a << endl;
    //cout << my_b << endl;

    {
        using namespace a;
        cout << my_var << endl;
        cout << a::count << endl;
    }

    {
        using namespace b;
        cout << my_var << endl;
    }
    

    return 0;
}
