#ifndef PYTHONIC_INCLUDE_NUMPY_ANGLEINRAD_HPP
#define PYTHONIC_INCLUDE_NUMPY_ANGLEINRAD_HPP

#include "pythonic/utils/proxy.hpp"
#include "pythonic/types/ndarray.hpp"
#include "pythonic/types/numexpr_to_ndarray.hpp"
#include "pythonic/utils/numpy_traits.hpp"
#include "pythonic/numpy/arctan.hpp"

/* NOTE: angle_in_rad is not part of the official Numpy API,
 * this file is here only to split the angle function in two parts
 */

namespace pythonic
{

  namespace numpy
  {
    namespace wrapper
    {
      template <class T>
      auto angle_in_rad(T const &t)
          -> decltype(nt2::atan(std::imag(t) / std::real(t)));
    }
#define NUMPY_NARY_FUNC_NAME angle_in_rad
#define NUMPY_NARY_FUNC_SYM wrapper::angle_in_rad
#include "pythonic/include/types/numpy_nary_expr.hpp"
  }
}

#endif
