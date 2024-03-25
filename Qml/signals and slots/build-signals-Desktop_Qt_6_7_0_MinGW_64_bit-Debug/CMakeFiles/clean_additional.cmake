# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\signals_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\signals_autogen.dir\\ParseCache.txt"
  "signals_autogen"
  )
endif()
