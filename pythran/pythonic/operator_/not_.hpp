#ifndef PYTHONIC_OPERATOR_NOT_HPP
#define PYTHONIC_OPERATOR_NOT_HPP

#include "pythonic/include/operator_/not_.hpp"

#include "pythonic/utils/proxy.hpp"

namespace pythonic
{

  namespace operator_
  {
    template <class T>
    decltype(!std::declval<T const &>()) not_(T const &a)
    {
      return !a;
    }

    PROXY_IMPL(pythonic::operator_, not_);
  }
}

#endif
