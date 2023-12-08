# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\classtemplate_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\classtemplate_autogen.dir\\ParseCache.txt"
  "classtemplate_autogen"
  )
endif()
