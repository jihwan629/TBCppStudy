#include <iostream>
#include "Resource.h"

using namespace std;

void doSomething(std::unique_ptr<Resource> res)
{

}

int main()
{
    //doSomething(std::unique_ptr<Resource>(new Resource(10000000)));
    //doSomething(std::make_unique<Resource>(10000000)); // 권장

    //Resource *res = new Resource(3);
    //res->setAll(1);

    {
        //std::shared_ptr<Resource> ptr1(res);

        auto ptr1 = std::make_shared<Resource>(3);
        ptr1->setAll(1);

        ptr1->print();

        {
            //std::shared_ptr<Resource> ptr2(ptr1);
            //std::shared_ptr<Resource> ptr2(res);
            auto ptr2 = ptr1;

            ptr2->setAll(3);
            ptr2->print();

            cout << "Going out of the book" << endl;
        }

        ptr1->print();

        cout << "Going out of the outer block" << endl;
    }
    // 여기서 소멸자 호출

    return 0;
}
