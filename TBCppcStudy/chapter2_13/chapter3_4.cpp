#include <iostream>

int getPrice(bool onSale)
{
    if (onSale)
        return 10;
    else
        return 100;
}

int main()
{
    using namespace std;

    //float a;
    //// sizeof는 함수가 아닌 operator
    //cout << sizeof a << endl;
    //cout << sizeof(float) << endl;


    //// comma operator

    //int x = 3;
    //int y = 10;
    ////int z = (++x, ++y);
    //++x;
    //++y;
    //int z = y;

    //cout << x << " " << y << " " << z << endl; 

    //int a = 1, b = 10;
    //int z;
    ////z = a, b; // (z = a), b 
    //z = (a++, a + b); 

    //cout << z << endl;


    // conditional operator (arithmetic if)
    //bool onSale = true;

    ////const int price = (onSale) ? 10 : 100;
    //const int price = getPrice(onSale);


    ///*if (onSale)
    //    price = 10;
    //else
    //    price = 100;*/

    //cout << price << endl;

    int x = 5;

    // << 연산자가 ?: 연산자보다 우선 순위가 높기에 괄호 사용
    cout << ((x % 2 == 0) ? "even" : "odd") << endl;
    
    return 0;
}
