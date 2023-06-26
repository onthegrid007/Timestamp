#ifndef TIMESTAMP_HPP_
#define TIMESTAMP_HPP_

#include <chrono>

template<typename C = std::chrono::high_resolution_clock, typename T = uint64_t, typename D = std::chrono::duration<T, std::nano>>
class _Timestamp : public std::chrono::time_point<C, D> {
    public:
    typedef C ClockType;
    typedef D Duration;
    typedef std::chrono::time_point<ClockType, Duration> TP;
    _Timestamp() : TP(std::chrono::time_point_cast<Duration>(ClockType::now())) {}
    explicit constexpr _Timestamp(const TP& tp) : TP(tp) {}
};

typedef _Timestamp<> Timestamp;

#endif