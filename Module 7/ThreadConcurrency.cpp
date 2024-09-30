#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx; 

// Function counting up
void countUp()
{
    for (int i = 0; i <= 20; ++i)
    {
        std::lock_guard<std::mutex> lock(mtx);
        std::cout << "Counting up: " << i << std::endl;
    }
}


// Function counting down
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
    // Concurrent threads
    std::thread thread1(countUp);
    std::thread thread2(countDown);

    thread1.join();
    thread2.join();

    return 0;
}