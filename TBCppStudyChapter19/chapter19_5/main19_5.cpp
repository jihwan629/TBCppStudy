#include <iostream>
#include <future>
#include <thread>

using namespace std;

int main()
{
    //// multi-threading
    //{
    //    int result;
    //    std::thread t([&] {result = 1 + 2; });
    //    t.join(); // thread 가 끝날 때 까지 대기
    //    cout << result << endl;
    //}

    //// task-based parallelism
    //{
    //    // std::future<int> fut = ...
    //    auto fut = std::async([] {return 1 + 2; });
    //    cout << fut.get() << endl; // async 가 return 할 때 까지 대기
    //}

    // future and promise
    {
        std::promise<int> prom;
        auto fut = prom.get_future();

        auto t = std::thread([](std::promise<int> &&prom)
        //auto t = std::async([](std::promise<int> &&prom) // 가능
        {
            prom.set_value(1 + 2);
        }, std::move(prom));

        cout << fut.get() << endl; // prom 가 setvalue 될 때 가지 대기
        t.join(); // thread 종료 대기
    }

    {
        //auto f1 = std::async([] {
        //auto f1 = std::thread([] {
        std::async([] {
            cout << "async1 start" << endl;
            this_thread::sleep_for(chrono::seconds(2));
            cout << "async1 end" << endl;
        });

        //auto f2 = std::async([] {
        //auto f2 = std::thread([] {
        std::async([] {
            cout << "async2 start" << endl;
            this_thread::sleep_for(chrono::seconds(1));
            cout << "async2 end" << endl;
        });

        //f1.join();
        //f2.join();

        std::cout << "Main function" << endl;
    }

    return 0;
}