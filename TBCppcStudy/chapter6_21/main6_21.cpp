#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // array<int,5> array;
    //vector<int> array;

    //vector<int> array2 = { 1,2,3,4,5 };

    //cout << array2.size() << endl;

    //vector<int> array3 = { 1,2,3, };

    //cout << array3.size() << endl;

    //vector<int> array4 { 1,2,3, };

    //cout << array4.size() << endl;

    int *my_arr = new int[5];

    // vector는 메모리 누수가 없다
    vector<int> arr= { 1,2,3,4,5 };

    //arr.resize(10);
    arr.resize(2);

    for (auto &itr : arr)
        std::cout << itr << " ";
    cout << endl;

    cout << arr.size() << endl;
    cout << arr[1] << endl;
    cout << arr.at(1) << endl;

    delete[] my_arr;

    return 0;
}

