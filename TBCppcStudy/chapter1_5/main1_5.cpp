#include <iostream>

using namespace std;

void print()
{
	cout << "Hello" << endl;
}

// 이름 바꾸기로 일괄적으로 바꾸기 가능
int addTwoNumberss(int num_a, int num_b) {
	int sum = num_a + num_b;

	print();

	return sum;
}

int multiplyTwoNumbers(int num_a, int num_b) {
	int sum = num_a * num_b;
	return sum;
}

void printHelloWorld()
{
	cout << "Hello World 1" << endl;

	return;

	cout << "Hello World 2" << endl;
}

int main() {
	/*cout << addTwoNumberss(1,2) << endl;
	cout << addTwoNumberss(3,4) << endl;
	cout << addTwoNumberss(8,13) << endl;

	cout << multiplyTwoNumbers(1, 2) << endl;
	cout << multiplyTwoNumbers(3, 4) << endl;
	cout << multiplyTwoNumbers(8, 13) << endl;*/

	//printHelloWorld();

	int sum = addTwoNumberss(1, 2);
	cout << sum << endl;

	return 0;
}