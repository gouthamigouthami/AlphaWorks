# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\gouthamiassignemnet_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\gouthamiassignemnet_autogen.dir\\ParseCache.txt"
  "gouthamiassignemnet_autogen"
  )
endif()
