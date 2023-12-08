# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Qtobjects_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Qtobjects_autogen.dir\\ParseCache.txt"
  "Qtobjects_autogen"
  )
endif()
