#include <iostream>

using namespace std;

int pow(int base, int exponent)
{
	int result = 1;

	for (int count = 0; count < exponent; ++count)
		result *= base;

	return result;
}

int main()
{
	//int count = 0;
	////for (; count < 10; ++count) // iteration
	//for (; ; ++count) //무한 루프
	//{
	//	cout << count << endl;
	//}
	//cout << count << endl;

	//cout << pow(2, 4) << endl;

	//for (int count = 9; count >= 0; count-= 2)
	//{
	//	cout << count << endl;
	//}

	//for (int i = 0, j = 0; (i + j) < 10; i++, j += 2)
	//{
	//	cout << i << " " << j << endl;
	//}

	for (int j = 0; j < 9; j++)
	{
		for (int i = 0; i < 9; i++)
		{
			cout << i << " " << j << endl;
		}
	}

    return 0;
}