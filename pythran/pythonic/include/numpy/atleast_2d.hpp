#ifndef PYTHONIC_INCLUDE_NUMPY_ATLEAST2D_HPP
#define PYTHONIC_INCLUDE_NUMPY_ATLEAST2D_HPP

#include "pythonic/types/ndarray.hpp"

namespace pythonic
{

  namespace numpy
  {
    template <class T>
    typename std::enable_if<std::is_scalar<T>::value or
                                types::is_complex<T>::value,
                            types::ndarray<T, 2>>::type
    atleast_2d(T t);

    template <class T>
            auto atleast_2d(T const &t) -> typename std::enable_if <
            not(std::is_scalar<T>::value or types::is_complex<T>::value) and
        types::numpy_expr_to_ndarray<T>::N<
            2, types::ndarray<
                   typename types::numpy_expr_to_ndarray<T>::type::dtype,
                   2>>::type;

    template <class T>
    auto atleast_2d(T &&t) -> typename std::enable_if<
        not(std::is_scalar<T>::value or types::is_complex<T>::value) and
            types::numpy_expr_to_ndarray<typename std::remove_cv<
                typename std::remove_reference<T>::type>::type>::N >= 2,
        decltype(std::forward<T>(t))>::type;

    PROXY_DECL(pythonic::numpy, atleast_2d);
  }
}

#endif
