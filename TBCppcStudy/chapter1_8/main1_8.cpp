#include <iostream>

using namespace std;

int main()
{
	//x is a varable, 2 is a literal.
	//= is an assignment
	int x = 2;

	//+ is an operand
	cout << x + 2 << endl;

	cout << "Hello, World" << endl;

	//���� �����ڴ� c++���� ������ ���� ������
	int y = (x > 0) ? 1 : 2;
	cout << "y = " << y << endl;

	x = -2;
	y = (x > 0) ? 1 : 2;
	cout << "y = " << y << endl;

	return 0;
}