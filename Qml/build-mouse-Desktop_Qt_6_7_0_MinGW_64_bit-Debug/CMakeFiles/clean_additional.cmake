# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appmouse_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appmouse_autogen.dir\\ParseCache.txt"
  "appmouse_autogen"
  )
endif()
