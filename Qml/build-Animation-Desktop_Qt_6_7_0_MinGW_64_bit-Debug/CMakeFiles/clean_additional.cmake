# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appAnimation_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appAnimation_autogen.dir\\ParseCache.txt"
  "appAnimation_autogen"
  )
endif()
