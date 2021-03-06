#ifndef PYTHONIC_INCLUDE_BUILTIN_LIST_INDEX_HPP
#define PYTHONIC_INCLUDE_BUILTIN_LIST_INDEX_HPP

#include "pythonic/utils/proxy.hpp"
#include "pythonic/types/list.hpp"

namespace pythonic
{

  namespace __builtin__
  {

    namespace list
    {

      template <class T>
      long index(types::list<T> &seq, T const &x);

      template <class T>
      long index(types::list<T> &&seq, T const &x);

      PROXY_DECL(pythonic::__builtin__::list, index);
    }
  }
}
#endif
