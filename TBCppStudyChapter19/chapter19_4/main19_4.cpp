﻿#include <iostream>
#include <thread>
#include <atomic>
#include <mutex>
#include <chrono>

using namespace std;

mutex mtx;

int main()
{
    int shared_memory(0);
    //atomic<int> shared_memory(0);

    auto count_func = [&]() {
        for (int i = 0; i < 1000; i++)
        {
            this_thread::sleep_for(chrono::milliseconds(1));
            
            //mtx.lock(); // atomic 과 비슷한 효과

            //std::lock_guard lock(mtx);

            std::scoped_lock lock(mtx);

            shared_memory++;
            //shared_memory.fetch_add(1);

            //mtx.unlock();
        }
    };

    thread t1 = thread(count_func);
    thread t2 = thread(count_func);

    t1.join();
    t2.join();


    cout << "After" << endl;
    cout << shared_memory << endl;

    return 0;
}