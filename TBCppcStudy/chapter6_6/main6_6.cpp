#include <iostream>
#include <cstring>

using namespace std;

void strcat_t(char dest[], int length_dest, const char source[])
{
	int cnt_dest = 0;
	while (true)
	{
		if (dest[cnt_dest] == '\0') break;
		cnt_dest++;
	}

	int cnt_source = 0;
	while (true)
	{
		if (cnt_dest >= length_dest) break;

		dest[cnt_dest++] = source[cnt_source];

		if (source[cnt_source++] == '\0') break;
	}
}

bool strcmp_t(const char dest[], const char source[])
{
	int cnt = 0;
	while (true)
	{
		if (dest[cnt] != source[cnt]) return false;
		if (dest[cnt++] == '\0') break;
	}

	return true;
}

int main()
{
    //char myString[] = "string"; // "\0"

	//for (int i = 0; i < 7; i++)
	//	cout << (int)myString[i] << endl;

	//cout << sizeof(myString) / sizeof(myString[0]) << endl;

	//char myString[255];

	//cin >> myString;
	//cin.getline(myString, 255);

	//myString[4] = '\0';
	// \0 전까지 출력한다.
	//cout << myString << endl;

	//int ix = 0;
	//while (true)
	//{
	//	if (myString[ix] == '\0') break;
	//	cout << myString[ix] << " " << (int)myString[ix] << endl;
	//	++ix;
	//}

	char source[] = "Copy this!";
	char dest[50];
	strcpy_s(dest, 50, source);

	//strcat()
	//strcmp()

	//strcat_s(dest, source);

	//// 같으면 0, 다르면 1
	////cout << strcmp(source, dest) << endl;
	////if (strcmp(source, dest) == 0)
	////	cout << "같다" << endl;

	//cout << source << endl;
	//cout << dest << endl;

	//strcat_t(dest, sizeof(dest) / sizeof(dest[0]), source);
	//cout << dest << endl;

	char dest_t[] = "Copy this! Copy this!";
	bool result = strcmp_t(dest, dest_t);
	cout << std::boolalpha;
	cout << result << endl;

    return 0;
}