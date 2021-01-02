#include <iostream>

using namespace std;

//forward declaration 전방 선언
int add(int a, int b);
int multiply(int a, int b);
int substract(int a, int b);

int main() 
{
	cout << add(1, 2) << endl;
	cout << multiply(1, 2) << endl;
	cout << substract(1, 2) << endl;

	return 0;
}

//definition 정의
int add(int a, int b)
{
	return a + b;
}

int multiply(int a, int b)
{
	return a * b;
}

int substract(int a, int b)
{
	return a - b;
}