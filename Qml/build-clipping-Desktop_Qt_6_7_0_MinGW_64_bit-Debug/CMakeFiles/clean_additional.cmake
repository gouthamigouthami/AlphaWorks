# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appclipping_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appclipping_autogen.dir\\ParseCache.txt"
  "appclipping_autogen"
  )
endif()
