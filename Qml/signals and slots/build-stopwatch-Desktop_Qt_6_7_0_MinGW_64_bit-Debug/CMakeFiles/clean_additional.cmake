# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\stopwatch_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\stopwatch_autogen.dir\\ParseCache.txt"
  "stopwatch_autogen"
  )
endif()
