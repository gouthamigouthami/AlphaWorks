# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appqml4_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appqml4_autogen.dir\\ParseCache.txt"
  "appqml4_autogen"
  )
endif()
