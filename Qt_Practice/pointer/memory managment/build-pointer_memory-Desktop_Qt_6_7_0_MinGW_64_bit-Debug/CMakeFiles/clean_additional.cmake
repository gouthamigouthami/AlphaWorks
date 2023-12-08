# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\pointer_memory_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\pointer_memory_autogen.dir\\ParseCache.txt"
  "pointer_memory_autogen"
  )
endif()
