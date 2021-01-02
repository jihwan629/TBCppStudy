#include <iostream>

using namespace std;

int b = 20;



class Test
{
private:
    int num = 1;
public:
    void doSomething(int &const inp)
    {
        inp = b;
        cout << inp << endl;
    }
};

int main()
{
    Test t;

    int a = 5;

    t.doSomething(a);
    // doSomething의 매개변수 int 앞에 const가 와야 사용 가능 
    //doSomething(8); 

    cout << a << endl;
}
