# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\window_timer_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\window_timer_autogen.dir\\ParseCache.txt"
  "window_timer_autogen"
  )
endif()
