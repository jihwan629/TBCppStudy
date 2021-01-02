#include "Student.h"
#include "Teacher.h"

using namespace std;

int main()
{
    Student std("Jack Jack");
    std.setName("Jack Jack 2");
    cout << std.getName() << endl;

    Teacher teacher1("Dr. H");
    teacher1.setName("Dr. K");
    cout << teacher1.getName() << endl;

    cout << std << endl;
    cout << teacher1 << endl;

    std.doNothing();
    teacher1.doNothing();

    std.study();
    teacher1.teach();

    Person person;
    person.setName("Mr. Incredible");
    person.getName();

    //person.study(); // error
    //person.teach(); // error

    return 0;
}
