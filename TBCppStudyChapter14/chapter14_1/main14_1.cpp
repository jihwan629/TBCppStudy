#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int findFirstChar(const char *string, char ch)
{
	for (std::size_t index = 0; index < strlen(string); index++)
		if (string[index] == ch)
			return index;

	return -1;
}

double divide(int x, int y, bool &success)
{
	if (y == 0)
	{
		success = false;
		return  0.0;
	}

	success = true;
	return static_cast<double>(x) / y;
}

int main()
{
	//bool success;
	//double result = divide(5, 3, success);

	//if (!result)
	//	std::cerr << "An error occurred" << std::endl;
	//else
	//	std::cerr << "Result is " << std::endl;

	//std::ifstream input_file("temp.txt");
	//if (!input_file)
	//	std::cerr << "Can not open file" << std::endl;


	//// try, catch, throw
	//double x;
	//cin >> x;

	//try
	//{
	//	if (x < 0.0) throw std::string("Negative input");
	//	//if (x < 0.0) throw "Negative input"; // error 형변환에 엄격

	//	cout << std::sqrt(x) << endl;
	//}
	//catch (std::string error_message)
	//{
	//	cout << error_message << endl;
	//}

	try
	{
		//throw - 1;
		//throw - 1.0; // error
		throw "My error messge";
		//throw std::string("My error messge");
	}
	catch (int x)
	{
		cout << "Catch integer " << x << endl;
	}
	catch (std::string error_message)
	{
		cout << "error_message " << endl;
	}
	catch (const char *error_message)
	{
		cout << "Char * " << error_message << endl;
	}

    return 0;
}
