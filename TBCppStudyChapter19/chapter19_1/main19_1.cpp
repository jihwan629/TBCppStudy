﻿#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void goodbye(const string &s)
{
    cout << "Goodbye " << s << endl;
}

class Object
{
public:
    void hello(const string &s)
    {
        cout << "hello " << s << endl;
    }
};

int main()
{
    // lambda-introducer
    // lambda-parameter-declaration
    // lambda-return-type-clause
    // lambda-statement
    auto func = [](const int &i) -> void {cout << "Hello, world!" << endl; };

    func(123);

    {
        string name = "JackJack";
        [&]() {cout << name << endl; }(); // [&] : 밖에 있는 걸 안으로 넣기. [=] : copy
    }

    vector<int> v;
    v.push_back(1);
    v.push_back(2);

    auto func2 = [](int val) {cout << val << endl; };
    for_each(v.begin(), v.end(), [](int val) {cout << val << endl; });

    // 리턴
    cout << []() -> int {return 1; }() << endl;

    std::function<void(int)> func3 = func2;
    func3(123);

    // parameter 고정
    std::function<void()> func4 = std::bind(func3, 456);
    func4();

    // placeholder
    {
        Object instance;
        auto f = std::bind(&Object::hello, &instance, std::placeholders::_1);
        
        f(string("World"));

        auto f2 = std::bind(&goodbye, std::placeholders::_1);
        
        f2(string("World"));
    }

    return 0;
}