#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::string my_str("012345678");

    //cout << my_str.size() << endl;

    //{
    //    cout << std::boolalpha;
    //    my_str = "";
    //    cout << my_str.empty() << endl;
    //}

    my_str.reserve(1000);

    {
        cout << my_str.length() << endl;
        cout << my_str.size() << endl;
        cout << my_str.capacity() << endl;
    }

    {
        cout << my_str.max_size() << endl;
    }

    return 0;
}