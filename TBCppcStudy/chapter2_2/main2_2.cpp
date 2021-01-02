#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main()
{
	short		s = 1; // 2 bytes = 2 * 8  bits = 16 bits
	//부호를 결정하는 비트 -1, 0 표현 -1
	/*cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;
	cout << std::numeric_limits<short>::max() << endl;
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;*/

	//s = 32767;
	//s = s + 1; // 32768
	//cout << s << endl; // overflow

	//s = std::numeric_limits<short>::min();
	//s = s - 1; // -32768
	//cout << s << endl; // overflow

	/*cout << sizeof(short) << endl; 
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;*/

	/*cout << std::numeric_limits<unsigned int>::max() << endl;
	cout << std::numeric_limits<unsigned int>::min() << endl;

	unsigned int  i = -1;*/
	unsigned int  i = 22 / 4;
	cout << i << endl;
	cout << (float) 22 / 4 << endl;

	return 0;
}

