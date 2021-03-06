#ifndef PYTHONIC_INCLUDE_NUMPY_MIN_HPP
#define PYTHONIC_INCLUDE_NUMPY_MIN_HPP

#include "pythonic/utils/proxy.hpp"
#include "pythonic/numpy/reduce.hpp"

namespace pythonic
{

  namespace numpy
  {

    template <class E>
    auto min(E &&e)
        -> decltype(reduce<operator_::proxy::imin>(std::forward<E>(e)));

    template <class E, class Opt>
    auto min(E &&e, Opt &&opt)
        -> decltype(reduce<operator_::proxy::imin>(std::forward<E>(e),
                                                   std::forward<Opt>(opt)));

    PROXY_DECL(pythonic::numpy, min);
  }
}

#endif
