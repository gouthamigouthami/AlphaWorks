# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appswipe_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appswipe_autogen.dir\\ParseCache.txt"
  "appswipe_autogen"
  )
endif()
