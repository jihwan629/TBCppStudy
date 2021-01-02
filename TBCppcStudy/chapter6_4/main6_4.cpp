#include <iostream>

using namespace std;

void printArray(const int array[], const int length)
{
	for (int index = 0; index < length; index++)
		cout << array[index] << " ";
	cout << endl;
}

void swapArray(int array[], int i, int j)
{
	int temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}

int main()
{

    const int length = 5;

	int array[length]{ 3,5,2,1,4 };

	/*
	3 5 2 1 4
	1 5 2 3 4
	1 2 5 3 4
	1 2 3 5 4
	1 2 3 4 5 
	*/

	for (int startIndex = 0; startIndex < length - 1; startIndex++)
	{
		int smallestInex = startIndex;

		for (int currentindex = startIndex + 1; currentindex < length; currentindex++)
		{
			if (array[smallestInex] > array[currentindex])
				smallestInex = currentindex;
		}

		swapArray(array, startIndex, smallestInex);
		printArray(array, length);
	}

	printArray(array, length);

    return 0;
}