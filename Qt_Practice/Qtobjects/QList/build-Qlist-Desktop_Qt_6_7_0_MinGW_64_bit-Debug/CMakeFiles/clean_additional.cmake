# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Qlist_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Qlist_autogen.dir\\ParseCache.txt"
  "Qlist_autogen"
  )
endif()
