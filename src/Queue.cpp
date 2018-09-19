#include "Queue.h"

template<class T>
Queue<T>::Queue() = default;

template<class T>
void Queue<T>::push(T *elem) {
    std::unique_lock<std::mutex> lock(m);
    if(elem != nullptr) {
        q.push(elem);
        cv.notify_one();
    }
}

template<class T>
T *Queue<T>::pop() {
    T* elem = nullptr;

    std::unique_lock<std::mutex> lock(m);
    cv.wait(lock, !q.empty());

    if(!q.empty()) {
        elem = q.front();
        q.pop();
    }

    return elem;
}
