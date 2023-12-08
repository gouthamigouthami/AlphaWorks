# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Qtvariant_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Qtvariant_autogen.dir\\ParseCache.txt"
  "Qtvariant_autogen"
  )
endif()
