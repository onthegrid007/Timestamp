#ifndef TIMESTAMP_HPP_
#define TIMESTAMP_HPP_

#include <chrono>

template<typename T>
class _Timestamp : public std::chrono::time_point<T> {
    public:
    _Timestamp() :
        std::chrono::time_point<T>(T::now()) {}
};

typedef _Timestamp<std::chrono::steady_clock> Timestamp;

#endif