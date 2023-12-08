# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\smart_auto_pntr_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\smart_auto_pntr_autogen.dir\\ParseCache.txt"
  "smart_auto_pntr_autogen"
  )
endif()
