# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\applocalVariables_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\applocalVariables_autogen.dir\\ParseCache.txt"
  "applocalVariables_autogen"
  )
endif()
