#include <iostream>
#include <memory>
#include "Resource.h"

using namespace std;

auto doSomething()
{
    //auto res1 = std::make_unique<Resource>(5);
    //return res1;

    return std::unique_ptr<Resource>(new Resource(5));
    
    //return std::make_unique<Resource>(5);
}

//void doSomething2(std::unique_ptr<Resource> &res) // R-Value
void doSomething2(Resource *res)                    // L-Value
{
    res->setAll(10);
}
//auto doSomething2(std::unique_ptr<Resource> &res)                    
//{
//    res->setAll(10);
//    return res;
//}

int main()
{
    //{
    //    //Resource *res = new Resource(10000000);

    //    std::unique_ptr<Resource> res(new Resource(10000000));

    //    // early return or throw

    //    //delete res;
    //}

    //{
    //    std::unique_ptr<int> upi(new int);


    //    // unique_ptr 만드는 법
    //    // 1.
    //    auto *ptr = new Resource(5);
    //    std::unique_ptr<Resource> res1(ptr);
    //    // 2.
    //    //std::unique_ptr<Resource> res1(new Resource(5));
    //    // 3.
    //    //auto res1 = std::make_unique<Resource>(5);
    //    // 4.
    //    //auto res1 = doSomething();


    //    res1->setAll(5);
    //    res1->print();

    //    std::unique_ptr<Resource> res2; // nullptr

    //    // nullptr 여부 확인
    //    cout << std::boolalpha;
    //    cout << static_cast<bool>(res1) << endl;
    //    cout << static_cast<bool>(res2) << endl;


    //    //res2 = res1; // unique 포인터는 복사 불가
    //    res2 = std::move(res1);

    //    cout << std::boolalpha;
    //    cout << static_cast<bool>(res1) << endl;
    //    cout << static_cast<bool>(res2) << endl;

    //    if (res1 != nullptr) res1->print();
    //    if (res2 != nullptr) res2->print(); // (*res2).print();
    //}

    {
        auto res1 = std::make_unique<Resource>(5);
        res1->setAll(1);
        res1->print();

        //doSomething2(res1); // R-Value

        //doSomething2(std::move(res1)); // res1 => null
        //res1 = doSomething2(std::move(res1)); 

        doSomething2(res1.get()); // L-value

        cout << std::boolalpha;
        cout << static_cast<bool>(res1) << endl;
        res1->print();
    }

    //{
    //    Resource *res = new Resource;
    //    std::unique_ptr<Resource> res1(res);
    //    std::unique_ptr<Resource> res2(res); // x

    //    // 두번 지우려고 시도하여 error
    //    delete res; // x
    //}

    return 0;
}
