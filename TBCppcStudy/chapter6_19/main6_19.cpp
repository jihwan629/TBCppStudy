#include <iostream>

using namespace std;

int main()
{
    //int *ptr = nullptr;
    //int **ptrptr = nullptr;

    //int value = 5;

    //ptr = &value;
    //ptrptr = &ptr;

    //cout << ptr << " " << *ptr << " " << &ptr << endl;
    //cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl;
    //cout << *(*ptrptr) << endl;

    const int row = 3;
    const int column = 5;

    const int s2da[row][column] =
    {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };

    int **matrix = new int *[row];

    for (int r = 0; r < row; r++)
        matrix[r] = new int[column];

    int *r1 = new int[column] {1, 2, 3, 4, 5};
    int *r2 = new int[column] {6, 7, 8, 9, 10};
    int *r3 = new int[column] {11, 12, 13, 14, 15};

    //int **rows = new int *[row] {r1, r2, r3};

    for (int r = 0; r < row; r++)
        for (int c = 0; c < column; c++)
            matrix[r][c] = s2da[r][c];

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < column; c++)
            //cout << rows[r][c] << " ";
            cout << matrix[r][c] << " ";
        cout << endl;
    }
    
    // delete
    for (int r = 0; r < row; r++)
        delete[] matrix[r];

    delete[] matrix;

    //delete[] r1;
    //delete[] r2;
    //delete[] r3;
    //delete[] rows;


    // 1차원으로 2차원 배열 구현하기

    int *mat = new int[row * column];

    for (int r = 0; r < row; r++)
        for (int c = 0; c < column; c++)
            mat[c + column * r] = s2da[r][c];

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < column; c++)
            cout << mat[c + column * r] << " ";
        cout << endl;
    }

    delete[] mat;

    return 0;
}
