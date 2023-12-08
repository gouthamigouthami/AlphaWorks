# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\while_Do_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\while_Do_autogen.dir\\ParseCache.txt"
  "while_Do_autogen"
  )
endif()
