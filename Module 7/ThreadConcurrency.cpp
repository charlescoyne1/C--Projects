#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx; 

void countUp()
{
    for (int i = 1; i <= 20; ++i)
    {
        std::lock_guard<std::mutex> lock(mtx);
        std::cout << "Counting up: " << i << std::endl;
    }
}

void countDown()
{
    for (int i = 20; i >= 0; --i)
    {
        std::lock_guard<std::mutex> lock(mtx);
        std::cout << "Counting down: " << i << std::endl;
    }
}

int main()
{
    std::thread thread1(countUp);
    thread1.join();

    std::thread thread2(countDown);
    thread2.join();

    return 0;
}