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

	////�߰�ȣ�� ������ �и��Ѵ�
	//{
	//	x = 1;

	//	cout << x << " " << &x << endl;
	//}

	//cout << x << " " << &x << endl;

	////���� ������ ������ ����� ��� ����
	////������ ��� �ÿ� ���� �޸𸮷� �ݳ�
	////�ݳ��� �޸𸮴� ���� ���� ������ ����ϵ��� ���
	//{
	//	int x = 2;

	//}

	doSomething(x);
	cout << x << " " << &x << endl;


	return 0;
}