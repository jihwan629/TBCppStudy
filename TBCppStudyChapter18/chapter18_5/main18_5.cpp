#include <iostream>
#include <regex>

using namespace std;

int main()
{
    //regex re("\\d+"); //한개 이상의 숫자
    //regex re("[ab]"); // a 또는 b
    //regex re("[[:digit:]]{3}"); // \d = [[:digit:]]. 3개의 숫자
    //regex re("[A-Z]+"); // A부터 Z 한개 이상
    //regex re("[A-Z]{1,5}"); // 최소 1 최대 5
    //regex re("([0-9]{1})([-]?)([0-9]{1,4})"); // ? : 있어도 되고 없어도 되고

    regex re("([0-9a-zA-Z]+)([@])([a-z]+)([.])(com|net|co.kr)"); // 이메일


    string str;

    while (true)
    {
        getline(cin, str);

        if (std::regex_match(str, re))
            cout << "Match" << endl;
        else
            cout << "No Match" << endl;

        // print matches
        {
            auto begin = std::sregex_iterator(str.begin(), str.end(), re);
            auto end = std::sregex_iterator();
            for (auto itr = begin; itr != end; ++itr)
            {
                std::smatch match = *itr;
                cout << match.str() << " ";
            }
            cout << endl;
        }
    }

    cout << endl;

    return 0;
}