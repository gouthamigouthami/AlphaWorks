# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appMousetouching_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appMousetouching_autogen.dir\\ParseCache.txt"
  "appMousetouching_autogen"
  )
endif()
