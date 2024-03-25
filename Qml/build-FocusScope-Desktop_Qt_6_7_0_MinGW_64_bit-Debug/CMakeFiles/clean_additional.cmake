# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appFocusScope_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appFocusScope_autogen.dir\\ParseCache.txt"
  "appFocusScope_autogen"
  )
endif()
