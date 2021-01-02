#include <iostream>
#include <string>

using namespace std;

int main()
{
	std::string str1("one");
	std::string str2("two");

	//{
	//	str2 = "two";
	//	str2.assign("two").append(" ").append("three");

	//	cout << str2 << endl;
	//}

	//{
	//	cout << str1 << " " << str2 << endl;

	//	std::swap(str1, str2);

	//	cout << str1 << " " << str2 << endl;

	//	str1.swap(str2);

	//	cout << str1 << " " << str2 << endl;
	//}

	//{
	//	cout << str1 << endl;

	//	str1.append("three");
	//	str1.push_back('A');
	//	str1 += "three";

	//	cout << str1 << endl;


	//	str1 = str2 + "four";

	//	cout << str1 << endl;
	//}

	{
		string str("aaaa");

		str.insert(2, "bbb");

		cout << str << endl;
	}

	return 0;
}