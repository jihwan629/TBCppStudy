#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int fibonacci[]{ 0,1,1,2,3,5,8,13,
                            21,34,55,89 };

    ////change array values 
    //for (auto &number : fibonacci)
    //    number *= 10;

    //// out put
    ////for (int number : fibonacci)
    //for (const auto &number : fibonacci)
    //    cout << number << " ";
    //cout << endl;

    int max_number = numeric_limits<int>::lowest();

    for (const auto &number : fibonacci)
        max_number = max(max_number, number);

    cout << max_number << endl;


    vector<int> fibo_vector = { 0,1,1,2,3,5,8,13,
                            21,34,55,89 };

    cout << "vector fibonacci" << endl;
    for (const auto &number : fibo_vector)
        cout << number << " ";
    cout << endl;

    return 0;
}
