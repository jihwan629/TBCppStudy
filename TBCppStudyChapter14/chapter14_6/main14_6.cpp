#include <iostream>
#include <memory>

using namespace std;

class A
{
private:
	// 소멸자에서 예외 처리 불가
	~A()
	{
		throw "error";
	}
public:
};

int main()
{
	try
	{
		//int *i = new int[1000000];

		//// 스마트 포인터 > Memory Lick 안 발생
		//unique_ptr<int> up_i(i);

		//// do something with i
		//throw "error";

		//// Memory Lick 발생
		//delete[] i; 


		A a; // error
	}
	catch (...)
	{
		cout << "Catch" << endl;
	}

    return 0;
}
