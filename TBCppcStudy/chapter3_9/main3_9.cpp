// chapter3_9.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <bitset>

int main()
{
    using namespace std;

    // 비트 플래그
    //bool item1_flag = false;
    //bool item2_flag = false;
    //bool item3_flag = false;
    //bool item4_flag = false;
    
    const unsigned char opt0 = 1 << 0;
    const unsigned char opt1 = 1 << 1;
    const unsigned char opt2 = 1 << 2;
    const unsigned char opt3 = 1 << 3;

    cout << bitset<8>(opt0) << endl;
    cout << bitset<8>(opt1) << endl;
    cout << bitset<8>(opt2) << endl;
    cout << bitset<8>(opt3) << endl;

    unsigned char items_flag = 0;

    cout << "No item " << bitset<8>(items_flag) << endl;
    
    // item0_on
    items_flag |= opt0;
    cout << "Item0 obtained " << bitset<8>(items_flag) << endl;

    // item3_on
    items_flag |= opt3;
    cout << "Item3 obtained " << bitset<8>(items_flag) << endl;

    // item0_off
    //cout << bitset<8>(~opt0) << endl;
    items_flag &= ~opt0;
    //items_flag ^= opt0; // 이렇게 하면 item0이 없을 때 item 0이 생겨난다
    cout << "Item0 lost " << bitset<8>(items_flag) << endl;

    // has item3
    if (items_flag & opt3) cout << "Has item1" << endl;

    // has item0
    if (items_flag & opt0) cout << "Has item0" << endl;
    else cout << "Not has item0" << endl;

    // obtain itme 0, 2
    //cout << "(opt0 | opt2) = " << bitset<8>(opt0 | opt2) << endl;
    items_flag |= (opt0 | opt2);
    cout << "Item0, item2 obtained " << bitset<8>(items_flag) << endl;

    // item 1이 없고 2가 있을 때, 1을 얻고 2를 잃는다
    if ((items_flag & opt2) && !(items_flag & opt1))
    {
        //items_flag ^= opt2;
        //items_flag ^= opt1;
        items_flag ^= (opt1 | opt2);
    }
    cout << bitset<8>(items_flag) << endl;

    // 비트 마스크

    const unsigned int red_mask = 0xFF0000;
    const unsigned int green_mask = 0x00FF00;
    const unsigned int blue_mask = 0x0000ff;

    unsigned int pixel_color = 0xDAA520;

    //cout << std::bitset<32>(red_mask) << endl;
    //cout << std::bitset<32>(green_mask) << endl;
    //cout << std::bitset<32>(blue_mask) << endl;

    cout << std::bitset<32>(pixel_color) << endl;

    unsigned int red, green, blue;

    blue = pixel_color & blue_mask;
    cout << "blue " << std::bitset<8>(blue) << " " << (int)blue << endl;

    green = (pixel_color & green_mask) >> 8;
    cout << "green " << std::bitset<8>(green) << " " << (int)green << endl;

    red = (pixel_color & red_mask) >> 16;
    cout << "red " << std::bitset<8>(red) << " " << (int)red << endl;


    return 0;
}
