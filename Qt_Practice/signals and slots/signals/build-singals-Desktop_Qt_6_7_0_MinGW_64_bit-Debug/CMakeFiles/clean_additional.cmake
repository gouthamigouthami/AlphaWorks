# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\singals_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\singals_autogen.dir\\ParseCache.txt"
  "singals_autogen"
  )
endif()
