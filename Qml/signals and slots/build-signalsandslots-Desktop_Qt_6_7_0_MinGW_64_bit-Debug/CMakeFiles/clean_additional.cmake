# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appsignalsandslots_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appsignalsandslots_autogen.dir\\ParseCache.txt"
  "appsignalsandslots_autogen"
  )
endif()
