﻿#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>

using namespace std;

void sequence_containers()
{
    //// vector
    //{
    //    vector<int> vec;
    //    for (int i = 0; i < 10; i++)
    //        vec.push_back(i);

    //    for (auto &e : vec)
    //        cout << e << " ";
    //    cout << endl;
    //}

    //// deque
    //{
    //    deque<int> deq;
    //    for (int i = 0; i < 10; i++)
    //    {
    //        deq.push_back(i);
    //        deq.push_front(i);
    //    }

    //    for (auto &e : deq)
    //        cout << e << " ";
    //    cout << endl;
    //}
}

void associative_containers()
{
    //// set
    //{
    //    set<string> str_set;

    //    // 원소가 중복 되지 않음
    //    str_set.insert("Hello");
    //    str_set.insert("World");
    //    str_set.insert("Hello");

    //    cout << str_set.size() << endl;

    //    for (auto &e : str_set)
    //        cout << e << " ";
    //    cout << endl;
    //}

    //// multiset : duplicated is allowed
    //{
    //    std::multiset<string> str_set;

    //    // 원소 중복 허용 
    //    // 자동 정렬
    //    str_set.insert("Hello");
    //    str_set.insert("World");
    //    str_set.insert("Hello");

    //    cout << str_set.size() << endl;

    //    for (auto &e : str_set)
    //        cout << e << " ";
    //    cout << endl;
    //}

    // map : key/value
    {
        std::map<char, int> map;

        // 자동 정렬
        map['c'] = 50;
        map['a'] = 10;
        map['b'] = 20;

        cout << map['a'] << endl;

        map['a'] = 100;

        cout << map['a'] << endl;

        // first = key, second = value
        for (auto &e : map)
            cout << e.first << " " << e.second << " ";
        cout << endl;
    }

    // multimap : duplicated keys
    {
        std::multimap<char, int> map;
        map.insert(std::pair('a', 10));
        // Before c++ 14, pair<char, int>('a',10)
        map.insert(std::pair('b', 10));
        map.insert(std::pair('c', 10));
        map.insert(std::pair('a', 100));

        cout << map.count('a') << endl;

        // first = key, second = value
        for (auto &e : map)
            cout << e.first << " " << e.second << " ";
        cout << endl;
    }
}

void container_adapter()
{
    //// stack
    //{
    //    cout << "Stack" << endl;

    //    std::stack<int> stack;
    //    stack.push(1);      // push adds a copy
    //    stack.emplace(2);   // emplace constructs a new object
    //    stack.emplace(3);
    //    
    //    cout << stack.top() << endl;
    //    stack.pop();
    //    cout << stack.top() << endl;
    //}

    //// queue
    //{
    //    cout << "Queue" << endl;

    //    std::queue<int> queue;
    //    queue.push(1);
    //    queue.push(2);
    //    queue.push(3);

    //    cout << queue.front() << " " << queue.back() << endl;
    //    queue.pop();
    //    cout << queue.front() << " " << queue.back() << endl;
    //}

    // priority queue
    {
        cout << "Priority Queue" << endl;

        std::priority_queue<int> queue;

        // 연산자 오버로딩으로 구현 가능
        for (const int n : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
            queue.push(n);

        for (int i = 0; i < 10; i++)
        {
            cout << queue.top() << endl;
            queue.pop();
        }
    }
}

int main()
{
    //sequence_containers();
    //associative_containers();
    container_adapter();

    return 0;
}
