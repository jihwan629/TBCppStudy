#include <iostream> // cout, cin, endl ...
#include <cstdio> // printf

using namespace std;

int main()
{
	/*int x = 1024;
	double pi = 3.141592;*/
	
	//std::cout << "I love this lecture!\n\n\n"; // << std::endl;
	//std::cout << "x is " << x << std::endl;
	//std::cout << "pi is " << pi << std::endl;

	//std::cout << "abc" << "\t" << "def" << std::endl;
	//cout << "ab" << "\t" << "cdef" << endl;

	//cout << "\a";

	//printf("I love this lecturne!\n");

	int x = 1;

	cout << "before your input , x was " << x << endl;

	cin >> x;

	cout << "your input is " << x << endl;

	return 0;
}
