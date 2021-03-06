#ifndef PYTHONIC_OMP_GET_NUM_THREADS_HPP
#define PYTHONIC_OMP_GET_NUM_THREADS_HPP

#include "pythonic/include/omp/get_num_threads.hpp"

#include <omp.h>
#include "pythonic/utils/proxy.hpp"

namespace pythonic
{

  namespace omp
  {
    long get_num_threads()
    {
      return omp_get_num_threads();
    }

    PROXY_IMPL(pythonic::omp, get_num_threads);
  }
}

#endif
