# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\signalassignemnt_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\signalassignemnt_autogen.dir\\ParseCache.txt"
  "signalassignemnt_autogen"
  )
endif()
