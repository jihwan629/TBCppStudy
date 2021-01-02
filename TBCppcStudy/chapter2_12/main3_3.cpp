#include <iostream>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    using namespace std;
    
    //int x = 5;
    ////int y = ++x;
    //int y = --x;
    //int z = x--;

    //cout << y << endl;
    //cout << z << endl;

    //int x = 6;
    //int y = 6;

    //cout << x << " " << y << endl;
    ////cout << ++x << " " << --y << endl; // 7 5
    //cout << x++ << " " << y-- << endl; // 6 6
    //cout << x << " " << y << endl;

    int x = 1;
    int v = add(x, ++x);
    cout << x << " " << v << endl;


    return 0;
}