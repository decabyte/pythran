#ifndef PYTHONIC_INCLUDE_UTILS_NEUTRAL_HPP
#define PYTHONIC_INCLUDE_UTILS_NEUTRAL_HPP

#include "pythonic/operator_/iadd.hpp"
#include "pythonic/operator_/imul.hpp"
#include "pythonic/operator_/imax.hpp"
#include "pythonic/operator_/imin.hpp"

namespace pythonic
{

  namespace utils
  {
    template <class Op, class T>
    struct neutral;

    template <class T>
    struct neutral<operator_::proxy::iadd, T> {
      static const T value;
    };

    // FIXME clang doesn't accept it as a static constexpr value for neutral
    template <class T>
    T const neutral<operator_::proxy::iadd, T>::value = 0;

    template <class T>
    struct neutral<operator_::proxy::imul, T> {
      static constexpr T value = 1;
    };

    template <class T>
    struct neutral<operator_::proxy::imax, T> {
      static constexpr T value = std::numeric_limits<T>::lowest();
    };

    template <class T>
    struct neutral<operator_::proxy::imin, T> {
      static constexpr T value = std::numeric_limits<T>::max();
    };
  }
}

#endif
