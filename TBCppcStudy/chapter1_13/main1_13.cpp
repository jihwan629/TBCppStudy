#include <iostream>

using namespace std;

namespace Myspace1
{
	namespace InnerSpace
	{
		int my_function()
		{
			return 0;
		}
	}

	int doSomething(int a, int b)
	{
		return a + b;
	}
}

namespace Myspace2
{
	int doSomething(int a, int b)
	{
		return a * b;
	}
}

int main()
{
	/*using namespace Myspace1;

	cout << doSomething(3, 4) << endl;
	cout << Myspace2::doSomething(3,4) << endl;*/

	//Myspace1::InnerSpace::my_function();
	using namespace Myspace1::InnerSpace;
	my_function();


	return 0;
}
