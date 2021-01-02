#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Object
// Friend : name, address, age, height, weight, ...
//              print()

// Class : 오브젝트를 구현
class Friend
{
public: // access specifier 접근 지정자 (public, private, protected)
    string  m_name;
    string  address_;
    int     _age;
    double  height;
    double  weight;

    void print()
    {
        cout << m_name << " " << address_ << " " << _age << " "
            << height << " " << weight << endl;
    }
};

//void print(const Friend &fr)
//{
//    cout << fr.name << " " << fr.address << " " << fr.age << " "
//        << fr.height << " " << fr.weight << endl;
//}

void print(const string  &name,
    const string &address,
    const int &age,
    const double &height,
    const double &weight)
{
    cout << name << " " << address << " " << age << " "
        << height << " " << weight << endl;
}

int main()
{
    //string  name;
    //string  address;
    //int     age;
    //double  height;
    //double  weight;

    //print(name, address, age, height, weight);

    //vector<string>  name_vec;
    //vector<string>  addr_vec;
    //vector<int>     age_vec; 
    //vector<double>  height_vec;
    //vector<double>  weight_vec;

    //print(name_vec[0], addr_vec[0], age_vec[0]
    //    , height_vec[0], weight_vec[0]);

    // instanciation
    // jj : instance
    Friend jj {"jack jack", "Uptown", 2, 30, 10};

    //print(jj.name, jj.address, jj.age, jj.height, jj.weight);
    //print(jj);
    jj.print();

    vector<Friend> my_friends;
    my_friends.resize(2);

    my_friends[0].print();
    my_friends[1].print();

    for (auto &element : my_friends)
        element.print();

    return 0;
}