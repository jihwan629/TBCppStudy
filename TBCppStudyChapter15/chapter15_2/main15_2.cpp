#include <iostream>
#include <memory>

using namespace std;

int getResult()
{
	return 100 * 100;
}

void doSomething(int &lref)
{
	cout << "L-value ref" << endl;
}

void doSomething(int &&ref)
{
	cout << "R-value ref" << endl;
}

int main()
{
	int x = 5;
	int y = getResult();
	const int cx = 6;
	const int cy = getResult();

	 
	// L-value reference 

	int &lr1 = x;			// modifiable l-value
	//int &lr2 = cx;		// Non-modifiable l-value
	//int &lr3 = 5;			// R-values

	const int &lr4 = x;		// modifiable l-value
	const int &lr5 = cx;	// Non-modifiable l-value
	const int &lr6 = 5;		// R-values


	// R-value references

	//int &&rr1 = x;			// modifiable l-value
	//int &&rr2 = cx;			// Non-modifiable l-value
	int &&rr3 = 5;			// R-values

	//const int &&rr4 = x;		// modifiable l-value
	//const int &&rr5 = cx;		// Non-modifiable l-value
	const int &&rr6 = 5;		// R-values


	// L/R-value reference parameter
	doSomething(x);
	//doSomething(cx);
	doSomething(5);
	doSomething(getResult());

	return 0;
}
