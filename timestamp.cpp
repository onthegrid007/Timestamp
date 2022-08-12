#include "timestamp.h"

using namespace std::chrono;

template<typename T>
_Timestamp<T>::_Timestamp() :
    m_tp(T::now()) {}