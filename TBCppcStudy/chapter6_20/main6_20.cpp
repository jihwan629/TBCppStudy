#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void printLength(array<int, 5> &my_arr)
{
    cout << my_arr.size() << endl;
}

int main()
{
    //int array[]{ 1,2,3,4,5 };
    array<int, 5> my_arr = { 1,21,3,40,5 };
    //my_arr = { 0,1,2,3,4 };
    //my_arr = { 0,1,2 };

    //cout << my_arr[10] << endl;
    //cout << my_arr.at(10) << endl; //속도가 더 느림

    //cout << my_arr.size() << endl;
    //printLength(my_arr);

    for (auto &element : my_arr)
        cout << element << " ";
    cout << endl;

    std::sort(my_arr.begin(), my_arr.end());
    std::sort(my_arr.rbegin(), my_arr.rend()); // 역순

    for (auto &element : my_arr)
        cout << element << " ";
    cout << endl;

    return 0;
}
