#ifndef TIMESTAMP_H_
#define TIMESTAMP_H_

#include <chrono>

template<typename T>
class _Timestamp {
    public:
    _Timestamp();

    private:
    std::chrono::time_point<T> m_tp;
};

typedef _Timestamp<std::chrono::steady_clock> TImestamp;

#endif