/*
*   BSD 3-Clause License, see file labled 'LICENSE' for the full License.
*   Copyright (c) 2023, Peter Ferranti
*   All rights reserved.
*/

#ifndef TIMESTAMP_HPP_
#define TIMESTAMP_HPP_

#include <chrono>

template<typename C = std::chrono::high_resolution_clock, typename T = std::uint64_t, typename D = std::chrono::duration<T, std::nano>>
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