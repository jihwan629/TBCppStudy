#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string my_str("abcdefg");

	//{
	//	cout << my_str[0] << endl;
	//	cout << my_str[3] << endl;

	//	my_str[3] = 'Z';
	//	cout << my_str << endl;
	//}
	
	//{
	//	try
	//	{
	//		//my_str[100] = 'X'; // 예외 처리 안해줌
	//		my_str.at(100) = 'X';
	//	}
	//	catch (std::exception &e)
	//	{
	//		cout << e.what() << endl;
	//	}
	//}


	//{
	//	cout << my_str.c_str() << endl;

	//	//const char *arr = my_str.c_str(); // null을 뒤에 붙여줌
	//	const char *arr = my_str.data(); // null을 뒤에 붙여줌

	//	cout << (int)arr[6] << endl;
	//	cout << (int)arr[7] << endl;
	//}

	{
		char buf[20];

		my_str.copy(buf, 5, 1); 
		buf[5] = '\0';// null을 자동으로 안 넣어줌

		cout << buf << endl;
	}

	return 0;
}