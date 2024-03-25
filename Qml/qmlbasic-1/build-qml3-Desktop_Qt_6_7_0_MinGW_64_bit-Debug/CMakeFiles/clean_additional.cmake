# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appqml3_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appqml3_autogen.dir\\ParseCache.txt"
  "appqml3_autogen"
  )
endif()
