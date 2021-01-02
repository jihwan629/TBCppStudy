#include <iostream>
#include <istream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    //{
    //    cout << "Enter a number" << endl;

    //    int i;
    //    cin >> i;

    //    cout << i << endl;
    //}

    //{
    //    char buf[10];

    //    cin >> setw(5) >> buf;
    //    cout << buf << endl; // abcd. 마지막은 null

    //    cin >> setw(5) >> buf;
    //    cout << buf << endl;

    //    cin >> setw(5) >> buf;
    //    cout << buf << endl;
    //}

    //{
    //    int i;
    //    float f;

    //    cin >> i >> f;
    //    cout << i << " " << f << endl;
    //}

    //{
    //    char ch;
    //    char buf[5];

    //    //while (cin.get(ch))
    //    //    cout << ch;

    //    cin.get(buf, 5);
    //    cout << cin.gcount() << " " << buf << endl;

    //    cin.get(buf, 5);
    //    cout << buf << endl;

    //    cin.get(buf, 5);
    //    cout << buf << endl;
    //}

    //{
    //    char buf[100];

    //    //cin.get(buf, 100); // 5
    //    cin.getline(buf, 100); // 6. getline 줄바꿈까지 읽음
    //    cout << cin.gcount() << " " << buf << endl;

    //    cin.getline(buf, 100);
    //    cout << cin.gcount() << " " << buf << endl;
    //}

    //{
    //    string buf;

    //    getline(cin, buf);
    //    cout << cin.gcount() << " " << buf << endl; // 0
    //}

    //{
    //    char buf[1024];

    //    cin.ignore(2);

    //    cin >> buf;
    //    cout << buf << endl;
    //}

    //{
    //    char buf[1024];

    //    cout << (char)cin.peek() << endl;

    //    cin >> buf;
    //    cout << buf << endl;
    //}

    //{
    //    char buf[1024];

    //    cin >> buf;
    //    cout << buf << endl;

    //    cin.unget();

    //    cin >> buf;
    //    cout << buf << endl;
    //}

    {
        char buf[1024];

        cin >> buf;
        cout << buf << endl;

        cin.putback('A');

        cin >> buf;
        cout << buf << endl;
    }

    return 0;
}