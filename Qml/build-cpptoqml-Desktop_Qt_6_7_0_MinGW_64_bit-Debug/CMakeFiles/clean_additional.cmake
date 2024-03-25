# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appcpptoqml_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appcpptoqml_autogen.dir\\ParseCache.txt"
  "appcpptoqml_autogen"
  )
endif()
