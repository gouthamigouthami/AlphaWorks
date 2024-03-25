# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\signalss_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\signalss_autogen.dir\\ParseCache.txt"
  "signalss_autogen"
  )
endif()
