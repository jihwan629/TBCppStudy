#include <iostream>

using namespace std;

void countDown(int count)
{
	cout << count << endl;
	if (count > 0) countDown(count - 1);
}

int sumTo(int sumto)
{
	if (sumto <= 0) return 0;
	else if (sumto <= 1) return 1;
	else return sumTo(sumto - 1) + sumto;
}

int fibo(int cnt = 0)
{
	if (cnt == 0) return 0;
	else if (cnt == 1) return 1;
	else return fibo(cnt - 1) + fibo(cnt - 2);
}

int main()
{
	//countDown(5);
	//cout << sumTo(5) << endl;

	for (int i = 0; i < 10; i++)
		cout << fibo(i) << " ";
	cout << endl;


	return 0;
}