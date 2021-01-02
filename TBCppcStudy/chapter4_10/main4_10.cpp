#include <iostream>
#include <string>

using namespace std;

struct Person
{
    double  height = 3.0;
    float   weight = 200.0;
    int     age = 100;
    string  name = "Mr.Incredible";

    void print()
    {
        cout << height << " " << weight << " " <<
            age << " " << name << " " << endl;
    }
};

Person getMe()
{
    Person me{ 2.0, 100.0, 20, "Jack Jack" };
    return me;
}

struct Family
{
    Person me, mom, dad;
};

struct Employee // 2 + (2) + 4 + 8 = 16 // padding
{
    short   id;     // 2byte
    int     age;    // 4byte
    double  wage;   // 8byte
}; 

//void printPerson(Person ps)
//{
//    cout << ps.height << " " << ps.weight << " " << 
//        ps.age << " " << ps.name << " " << endl;
//}

int main()
{
    Person me{2.0, 100.0, 20, "Jack Jack"};

    ////Person me2(me);
    //Person me2;
    //me2 = me;

    ////printPerson(me);
    //me.print();
    //me2.print();

    //Person me_from_func = getMe();
    //me_from_func.print();

    //Person me;
    //cout << me.name << endl;

    Employee emp1;
    cout << sizeof(emp1) << endl; // 16

    return 0;
}
