#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Person
{
    std::string m_name;
    //std::shared_ptr<Person> m_partner; // 순환 되기 때문에 소멸x
    std::weak_ptr<Person> m_partner;

public:
    Person(const std::string &name) : m_name(name)
    {
        cout << m_name << " created\n";
    }

    ~Person()
    {
        cout << m_name << " destroyed\n";
    }

    friend bool partnerUp(std::shared_ptr<Person> &p1
        , std::shared_ptr<Person> &p2)
    {
        if (!p1 || !p2) return false;

        p1->m_partner = p2;
        p2->m_partner = p1;

        cout << p1->m_name << " is partnedred with "
            << p2->m_name << "\n";

        return true;
    }

    const std::shared_ptr<Person> getPartner() const
    {
        // weak 포인터는 직접 사용 x
        // shared 포인터로 바꾸어서 사용
        return m_partner.lock();
    }

    const std::string &getName() const
    {
        return m_name;
    }
};

int main()
{
    auto lucy = std::make_shared<Person>("Lucy");
    auto ricky = std::make_shared<Person>("Ricky");

    partnerUp(lucy, ricky);

    cout << lucy->getPartner()->getName() << endl;

    return 0;
}