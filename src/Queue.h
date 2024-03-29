#pragma once

#include <queue>
#include <mutex>
#include <condition_variable>

template<class T>
class Queue {
public:
    Queue();

    void push(T* elem);
    T* pop();

private:
    std::queue<T*> q;
    std::mutex m;
    std::condition_variable cv;
};

