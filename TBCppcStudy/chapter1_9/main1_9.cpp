#include <iostream>

using namespace std;

int add(int x, int y) 
{ 
	return x + y; //tab을 띄우는 거 or Space 4번 > indenting
}

int main()
{ 
	//줄바꿈 정리 할때 operator(<<)를 남겨 두자 
	cout << "Hello World" << "abcde" <<
		"1234567" << endl;

	//하드 코딩 시에 줄 맞춤으로 가시성을 높이자
	int my_v		= 1;
	int x			= 4;
	int num_apples	= 123;

	// this is important
	int x = 1 + 2; 

	// this is important, too
	int y = 3 + 4; 

	return 0;
}