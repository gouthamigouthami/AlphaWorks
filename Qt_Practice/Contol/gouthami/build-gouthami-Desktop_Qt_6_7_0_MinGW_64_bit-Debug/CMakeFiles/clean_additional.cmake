# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\gouthami_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\gouthami_autogen.dir\\ParseCache.txt"
  "gouthami_autogen"
  )
endif()
