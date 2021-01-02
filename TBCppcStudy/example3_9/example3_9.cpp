#include <iostream>
#include <bitset>

unsigned char doSomething(unsigned char flag, unsigned char opt);
unsigned char undoSomething(unsigned char flag, unsigned char opt);

int main()
{
    using namespace std;

    unsigned char option_viewed = 0x01;
    unsigned char option_edited = 0x02;
    unsigned char option_liked = 0x04;
    unsigned char option_shared = 0x08;
    unsigned char option_deleted = 0x80;

    unsigned char my_article_flags = 0;

    //cout << bitset<8>(option_viewed) << endl;
    //cout << bitset<8>(option_edited) << endl;
    //cout << bitset<8>(option_liked) << endl;
    //cout << bitset<8>(option_shared) << endl;
    //cout << bitset<8>(option_deleted) << endl;

    cout << bitset<8>(my_article_flags) << endl;

    my_article_flags = doSomething(my_article_flags, option_viewed);
    cout << bitset<8>(my_article_flags) << endl;
    my_article_flags = doSomething(my_article_flags, option_edited);
    cout << bitset<8>(my_article_flags) << endl;
    my_article_flags = doSomething(my_article_flags, option_liked);
    cout << bitset<8>(my_article_flags) << endl;
    my_article_flags = doSomething(my_article_flags, option_deleted);
    cout << bitset<8>(my_article_flags) << endl;

    my_article_flags = undoSomething(my_article_flags, option_liked);
    cout << bitset<8>(my_article_flags) << endl;

    return 0;

}

unsigned char doSomething(unsigned char flag, unsigned char opt)
{
    return flag |= opt;
}

unsigned char undoSomething(unsigned char flag, unsigned char opt)
{
    return flag &= ~opt;
}
