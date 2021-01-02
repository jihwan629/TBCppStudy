#include <iostream>

using namespace std;

void doSomething(int x)
{
	x = 123;
	cout << "doSomething : " << x << " " << &x << endl;
}


int main()
{
	int x(0);

	cout << x << " " << &x << endl;

	////중괄호는 영역을 분리한다
	//{
	//	x = 1;

	//	cout << x << " " << &x << endl;
	//}

	//cout << x << " " << &x << endl;

	////지역 변수는 영역을 벗어나면 사용 못함
	////영역을 벗어날 시에 스택 메모리로 반납
	////반납된 메모리는 다음 지역 변수가 사용하도록 대기
	//{
	//	int x = 2;

	//}

	doSomething(x);
	cout << x << " " << &x << endl;


	return 0;
}