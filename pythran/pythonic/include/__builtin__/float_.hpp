#ifndef PYTHONIC_INCLUDE_BUILTIN_FLOAT_HPP
#define PYTHONIC_INCLUDE_BUILTIN_FLOAT_HPP

#include "pythonic/include/utils/proxy.hpp"

#ifdef USE_GMP
#include "pythonic/include/types/long.hpp"
#endif

namespace pythonic
{

  namespace __builtin__
  {

    namespace anonymous
    {
      template <class T>
      double float_(T &&t);

      double float_();

#ifdef USE_GMP
      template <class T, class U>
      double float_(__gmp_expr<T, U> const &a);
#endif
    }

    PROXY_DECL(pythonic::__builtin__::anonymous, float_);
  }
}

#endif
