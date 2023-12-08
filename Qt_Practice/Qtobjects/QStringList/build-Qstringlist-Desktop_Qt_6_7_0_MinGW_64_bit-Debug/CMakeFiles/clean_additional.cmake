# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Qstringlist_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Qstringlist_autogen.dir\\ParseCache.txt"
  "Qstringlist_autogen"
  )
endif()
