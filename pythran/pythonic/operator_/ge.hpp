#ifndef PYTHONIC_OPERATOR_GE_HPP
#define PYTHONIC_OPERATOR_GE_HPP

#include "pythonic/include/operator_/ge.hpp"

#include "pythonic/utils/proxy.hpp"

namespace pythonic
{

  namespace operator_
  {
    template <class A, class B>
    auto ge(A const &a, B const &b) -> decltype(a >= b)
    {
      return a >= b;
    }

    PROXY_IMPL(pythonic::operator_, ge);
  }
}

#endif
