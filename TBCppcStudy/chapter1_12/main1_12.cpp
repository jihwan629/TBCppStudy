#include <iostream>

#include "mywork.h"
//헤더가드(#pragma once)가 있으면 이미 선언한 int add를 다시 선언하지 않는다
#include "add.h"

using namespace std;

int main()
{ 
	// add.cpp 가 없으면 링킹 에러가 뜬다
	// declaration 만 있으면 컴파일은 된다
	//cout << add(1, 2) << endl;

	doSomething();
	
	return 0;
}