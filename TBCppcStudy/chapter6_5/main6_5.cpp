#include <iostream>

using namespace std;

int main()
{
    const int num_rows = 3;
    const int num_columns = 5;

    //for (int row = 0; row < num_rows; row++)
    //{
    //    for (int col = 0; col < num_columns; col++)
    //        cout << "[" << row << "]" << "[" << col << "]" << '\t';
    //    cout << endl;
    //}
    //cout << endl;

    // row-major <-> column major
    // num_rows는 생략 가능
    // num_columns는 생략 불가능
    /*int array[][num_columns] 
    {
        {1,2,3,},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };*/

    //int array[num_rows][num_columns] = { 0 };

    //for (int row = 0; row < num_rows; row++)
    //{
    //    for (int col = 0; col < num_columns; col++)
    //        cout << array[row][col] << '\t';
    //        //cout << (int)&array[row][col] << '\t';

    //    cout << endl;
    //}
    //cout << endl;

    int array[5][4][3];


    return 0;
}