# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appColor_gradiant_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appColor_gradiant_autogen.dir\\ParseCache.txt"
  "appColor_gradiant_autogen"
  )
endif()
