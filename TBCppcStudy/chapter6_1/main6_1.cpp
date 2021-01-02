#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int width;

};

enum StudentName
{
    JACKJACK,       // = 0
    DASH,           // = 1
    VIOLET,         // = 2
    NUM_STUDENT,    // = 3
};

#define NUM_STUDENTS 10000

int main()
{
    int one_student_score;
    //int student_scores[5];

    ////cout << sizeof(one_student_score) << endl;
    ////cout << sizeof(student_scores) << endl;
    //
    //one_student_score = 100;

    //student_scores[0] = 100;    // 1st element
    //student_scores[1] = 80;     // 2nd element
    //student_scores[2] = 90;     // 3rd element
    //student_scores[3] = 50;     // 4th element
    //student_scores[4] = 0;      // 5th element

    ////student_scores[5] = 30;     // 6th element

    //cout << student_scores[0] << endl;
    //cout << student_scores[1] << endl;
    //cout << student_scores[2] << endl;
    //cout << student_scores[3] << endl;
    //cout << student_scores[4] << endl;
    ////cout << student_scores[5] << endl;

    //cout << (student_scores[0] + student_scores[1]) / 2.0 << endl;

    //cout << sizeof(Rectangle) << endl;

    //Rectangle rect_arr[10];

    //cout << sizeof(rect_arr) << endl;

    //rect_arr[0].length = 1;
    //rect_arr[1].width = 2;

    // 초기화
    //int my_array[5] = { 1,2,};
    //int my_array[] = { 1,2,3,4,5 };
    //int my_array[]{ 1,2,3,4,5 };

    //cout << my_array[JACKJACK] << endl;
    //cout << my_array[DASH] << endl;
    //cout << my_array[VIOLET] << endl;
    //cout << my_array[3] << endl;
    //cout << my_array[4] << endl;

    // 열거형 이용하여 배열 만들기
    //int students_scores[NUM_STUDENT];

    //students_scores[JACKJACK] = 0;
    //students_scores[DASH] = 100;
    //students_scores[VIOLET] = 50;


    //int num_student = 0;
    //cin >> num_student;

    const int num_student = 5;
    int students_scores[num_student];



    return 0;
}

