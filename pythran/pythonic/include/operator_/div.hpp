#ifndef PYTHONIC_INCLUDE_OPERATOR_DIV_HPP
#define PYTHONIC_INCLUDE_OPERATOR_DIV_HPP

#include "pythonic/utils/proxy.hpp"
#include "pythonic/operator_/overloads.hpp"
#ifdef USE_BOOST_SIMD
#include <nt2/include/functions/divides.hpp>
#endif

namespace pythonic
{

  namespace operator_
  {
    template <class A, class B>
    auto div(A const &a, B const &b) -> decltype(a / b);

    DEFINE_ALL_OPERATOR_OVERLOADS_DECL(div, / )

    PROXY_DECL(pythonic::operator_, div);
  }
}

#endif
