#include <vector>
#include <iostream>
#include <thread>
#include <chrono>
#include <atomic>
#include <mutex>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;
vector<int> record;
std::mutex mtx;
void func2(atomic<int> &counter, int num)
{
    int key = counter;
    counter++;
    record[key] = num;
}

int main()
{
    int shared_num = 0;
    int X, Z;
    cout << "How many threads do you want to spawn?(X)" << endl;
    cin >> X;
    cout << "How many times do you want to loop? (Z)" << endl;
    cin >> Z;
    for (int i = 0; i < X * Z; i++)
    {
        record.push_back(-1);
    }
    cout << "Sleeping for 10 seconds..." << endl;
    this_thread::sleep_for(seconds(10));
    atomic<int> counter(0);
    vector<thread> threads;

    for (int j = 0; j < Z; j++)
    {
        mtx.lock();
        for (int i = 0; i < X; i++)
        {
            threads.push_back(thread{func2, ref(counter), i});
        }
        for (auto &t : threads)
        {
            t.join();
        }
        threads.clear();
        mtx.unlock();
    }

    for (int i = 0; i < record.size(); i++)
    {
        cout << "Thread #" << record[i] << " , value " << i << endl;
    }
    return 0;
}
