#ifndef PYTHONIC_INCLUDE_NUMPY_PTP_HPP
#define PYTHONIC_INCLUDE_NUMPY_PTP_HPP

#include "pythonic/numpy/min.hpp"
#include "pythonic/numpy/max.hpp"

namespace pythonic
{

  namespace numpy
  {
    template <class E>
    auto ptp(E const &expr, long axis)
        -> decltype(max(expr, axis) - min(expr, axis));

    template <class E>
    auto ptp(E const &expr) -> decltype(max(expr) - min(expr));

    PROXY_DECL(pythonic::numpy, ptp);
  }
}

#endif
