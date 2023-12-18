# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Assignement_01_autogen"
  "CMakeFiles\\Assignement_01_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Assignement_01_autogen.dir\\ParseCache.txt"
  )
endif()
