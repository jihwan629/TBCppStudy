#include <iostream>

using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};

void printColorName(Colors color)
{
	/*if (color == Colors::BLACK)
		cout << "Black" << endl;
	else if (color == Colors::WHITE)
		cout << "White" << endl;
	else if (color == Colors::RED)
		cout << "Red" << endl;*/

	switch (color)
	{
	case Colors::BLACK:
		cout << "Black" << endl;
		break;
	case Colors::WHITE:
		cout << "White" << endl;
		break;
	case Colors::RED:
		cout << "Red" << endl;
		break;
	case Colors::GREEN:
		cout << "Green" << endl;
		break;
	case Colors::BLUE:
		cout << "Blue" << endl;
		break;
	default:
		break;
	}

	//switch (static_cast<int>(color))
	//{
	//case 0:
	//	cout << "Black" << endl;
	//	break;
	//case 1:
	//	cout << "White" << endl;
	//	break;
	//}
}

int main()
{
	int x;
	cin >> x;

	//{
	//	switch (x)
	//	{
	//	case 0:
	//		cout << "Zero";
	//		break;
	//	case 1:
	//		cout << "One";
	//		break;
	//	case 2:
	//		cout << "Two";
	//		break;
	//	}

	//	cout << endl;
	//}

	//printColorName(Colors::BLACK);

	switch (x)
	{
		int a, b;
		//int b = 5;

	case 0:
	{
		a = 1;
		cout << a << endl;

		int y;
		y = 5;
		cout << y << endl;
		break;
	}
		
	case 1:
		//y = 5;
		//cout << y << endl;
		break;
	default:
		break;
	}

	return 0;
}