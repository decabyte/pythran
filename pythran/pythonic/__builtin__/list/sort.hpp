#ifndef PYTHONIC_BUILTIN_LIST_SORT_HPP
#define PYTHONIC_BUILTIN_LIST_SORT_HPP

#include "pythonic/include/__builtin__/list/sort.hpp"

#include "pythonic/__builtin__/None.hpp"
#include "pythonic/types/list.hpp"
#include "pythonic/types/none.hpp"
#include "pythonic/utils/proxy.hpp"

namespace pythonic
{

  namespace __builtin__
  {

    namespace list
    {

      template <class T>
      types::none_type sort(types::list<T> &seq)
      {
        std::sort(seq.begin(), seq.end());
        return __builtin__::None;
      }

      PROXY_IMPL(pythonic::__builtin__::list, sort);
    }
  }
}
#endif
