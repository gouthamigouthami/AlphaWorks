# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Try_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Try_autogen.dir\\ParseCache.txt"
  "Try_autogen"
  )
endif()
