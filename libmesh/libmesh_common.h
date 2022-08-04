#include <iostream>
#include <cstdlib>

#define libmesh_error_msg(msg)     \
  do                               \
  {                                \
    std::cerr << msg << std::endl; \
    std::abort();                  \
  } while (0)

#define libmesh_fallthrough() [[fallthrough]]
