#include <iostream>

using namespace std;

#define NUM_STUDENTS 100000

// 매개 변수는 배열이 아님 -> 포인터로 처리
// 매개 변수에 주소값만 복사
void doSomething(int students_scores[])
{
    // students_scores의 주소값을 저장하는 다른 변수의 주소 출력
    cout << (int)&students_scores << endl;
    
    // 실제 (int)&students_scores와 같다!
    // 실제 저장된 값을 가져온다
    cout << (int)&students_scores[0] << endl;

    cout << students_scores[0] << endl;
    cout << students_scores[1] << endl;
    cout << students_scores[2] << endl;

    // 4
    cout << "Size in doSomething : " << sizeof(students_scores) << endl;
}

int main()
{
    const int num_students = 20;
    //cin >> num_students;

    int students_scores[num_students]{ 1,2,3,4,5, };

    //cout << (int)&students_scores << endl; // 첫번째 주소
    //cout << (int)&students_scores[0] << endl;
    //cout << (int)&students_scores[1] << endl;
    //cout << (int)&students_scores[2] << endl;
    //cout << (int)&students_scores[3] << endl;
    //cout << (int)&students_scores[4] << endl;

    //cout << sizeof(students_scores) << endl;

    cout << (int)students_scores << endl; // 배열 인식자가 주소
    cout << (int)&students_scores << endl; // doSomething 와 주소가 다르다

    cout << students_scores[0] << endl;
    cout << students_scores[1] << endl;
    cout << students_scores[2] << endl;

    // 8
    cout << "Size in main : " << sizeof(students_scores) << endl;

    // 매개 변수에 주소값만 복사
    doSomething(students_scores);

    return 0;
}
